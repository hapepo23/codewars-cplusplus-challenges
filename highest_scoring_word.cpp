/*
6 kyu
Highest Scoring Word
https://www.codewars.com/kata/57eb8fcdf670e99d9b000272
*/

#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

using std::getline, std::istringstream, std::sort, std::string, std::vector;

struct words {
  string w;
  int pos;
  int score;
};

static bool compare(words a, words b) {
  if (a.score == b.score)
    return a.pos < b.pos;
  else
    return a.score > b.score;
}

string highestScoringWord(const string& str) {
  istringstream stream(str);
  vector<words> data;
  string word;
  int pos = 1;
  while (getline(stream, word, ' ')) {
    int score = 0;
    for (char c : word)
      score += (c - 'a' + 1);
    data.push_back(words{word, pos, score});
    ++pos;
  }
  sort(data.begin(), data.end(), compare);
  return data[0].w;
}
