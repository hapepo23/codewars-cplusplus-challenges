CXX = g++
CXXFLAGS = -std=c++17 -g -O0 -Wall -Wextra
LDLIBS = -lm

TARGETS = \
	beeramid \
	bin_to_decimal \
	boolean_to_string \
	correct_time_string \
	disemvowel \
	is_square \
	mumbling \
	number_proper_fractions \
	number_to_string \
	personalized_message \
	positive_sum \
	same_arrays \
	smallest_value \
	string_matchup \
	string_repeat \
	string_reverse \
	sum_arrays \
	sum_of_parts \
	third_angle_triangle

.PHONY: all clean reformat run vrun

all: $(TARGETS)

%: %.cpp %_main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGETS)

reformat:
	clang-format --style=Chromium -i *.cpp

run:
	./`zenity --title="Execute Program" --height 600 --list --text="Choose Executable" --column=Executable $(TARGETS)`

vrun:
	valgrind --leak-check=full --show-error-list=yes ./`zenity --title="Valgrind Program" --height 600 --list --text="Choose Executable" --column=Executable $(TARGETS)`
