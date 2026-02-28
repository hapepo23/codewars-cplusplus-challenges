/*
3 kyu
The Lift
https://www.codewars.com/kata/58905bfa1decb981da00009e
*/

#include <vector>

using VI = std::vector<int>;
using VVI = std::vector<std::vector<int>>;
using VS = std::vector<size_t>;
using VVS = std::vector<std::vector<size_t>>;

static void calculate_leaving(const size_t current_floor, VS& lift) {
  for (size_t person = 0; person < lift.size(); ++person) {
    if (lift[person] == current_floor) {
      lift.erase(lift.begin() + person);
      --person;
    }
  }
}

static void calculate_entering(const int capacity,
                               const size_t current_floor,
                               const bool lift_up,
                               VVI& q,
                               VS& lift) {
  size_t cap = capacity;
  if (lift.size() < cap) {
    for (size_t pos = 0; pos < q[current_floor].size(); ++pos) {
      size_t enter = q[current_floor][pos];
      if ((lift_up && enter > current_floor) ||
          (!lift_up && enter < current_floor)) {
        lift.push_back(enter);
        q[current_floor].erase(q[current_floor].begin() + pos);
        --pos;
        if (lift.size() == cap)
          return;
      }
    }
  }
}

static void calculate_calls(const VVI& q, VVS& callupdown) {
  callupdown.clear();
  for (size_t floor = 0; floor < q.size(); ++floor) {
    size_t up = 0;
    size_t down = 0;
    for (size_t person = 0; person < q[floor].size(); ++person) {
      size_t destfloor = q[floor][person];
      if (destfloor > floor)
        ++up;
      else
        ++down;
    }
    callupdown.push_back({up, down});
  }
}

static void calculate_next_floor_and_direction(const size_t floors,
                                               const size_t current_floor,
                                               const VS& lift,
                                               const VVS& callupdown,
                                               size_t& next_floor,
                                               bool& lift_up) {
  if (lift_up) {
    size_t nextup = floors;
    for (size_t person = 0; person < lift.size(); ++person) {
      if (lift[person] > current_floor && lift[person] < nextup)
        nextup = lift[person];
    }
    for (size_t floor = current_floor + 1; floor < nextup; ++floor) {
      if (callupdown[floor][0] > 0 && floor < nextup)
        nextup = floor;
    }
    if (nextup == floors) {
      nextup = current_floor;
      for (size_t floor = current_floor + 1; floor < floors; ++floor) {
        if (callupdown[floor][1] > 0 && floor > nextup)
          nextup = floor;
      }
      if (nextup == current_floor) {
        nextup = 999;
      }
    }
    next_floor = nextup;
  } else {
    int nextdown = -1;
    for (size_t person = 0; person < lift.size(); ++person) {
      if (lift[person]<current_floor&& static_cast<int>(lift[person])> nextdown)
        nextdown = lift[person];
    }
    for (int floor = current_floor - 1; floor > nextdown; --floor) {
      if (callupdown[floor][1] > 0 && floor > nextdown)
        nextdown = floor;
    }
    if (nextdown == -1) {
      nextdown = current_floor;
      for (int floor = current_floor - 1; floor >= 0; --floor) {
        if (callupdown[floor][0] > 0 && floor < nextdown)
          nextdown = floor;
      }
      if (static_cast<size_t>(nextdown) == current_floor) {
        nextdown = 999;
      }
    }
    next_floor = nextdown;
  }
}

VI the_lift(const VVI& queues, const int capacity) {
  VVI q = queues;
  size_t floors = queues.size();
  VVS callupdown;
  VS lift = {};
  VI visits = {0};
  size_t current_floor = 0;
  size_t next_floor = 0;
  bool lift_up = true;
  bool notfinish = true;
  while (notfinish) {
    calculate_leaving(current_floor, lift);
    calculate_entering(capacity, current_floor, lift_up, q, lift);
    calculate_calls(q, callupdown);
    calculate_next_floor_and_direction(floors, current_floor, lift, callupdown,
                                       next_floor, lift_up);
    if (next_floor == 999) {
      lift_up = !lift_up;
      calculate_entering(capacity, current_floor, lift_up, q, lift);
      calculate_next_floor_and_direction(floors, current_floor, lift,
                                         callupdown, next_floor, lift_up);
      if (next_floor == 999) {
        lift_up = false;
        if (current_floor != 0)
          visits.push_back(0);
        notfinish = false;
      }
    }
    if (next_floor != 999) {
      current_floor = next_floor;
      visits.push_back(next_floor);
    }
  }
  return visits;
}
