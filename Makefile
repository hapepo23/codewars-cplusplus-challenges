CXX = g++
CXXFLAGS = -std=c++23 -g -O0 -Wall -Wextra
LDLIBS = -lm

TARGETS = \
	beeramid \
	bin_to_decimal \
	boolean_to_string \
	class_creation_skills \
	correct_time_string \
	descending_order \
	disemvowel \
	how_good_really \
	isograms \
	is_square \
	most_frequent_item_count \
	mumbling \
	number_proper_fractions \
	number_to_string \
	personalized_message \
	population_growth \
	positive_sum \
	remove_array_values \
	same_arrays \
	smallest_value \
	split_strings \
	string_matchup \
	string_remove_first_last_char \
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
