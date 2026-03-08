CXX = g++
CXXFLAGS = -std=c++17 -g -O0 -Wall -Wextra
LDLIBS = -lm

TARGETS = \
	bankers_plan \
	beeramid \
	bin_to_decimal \
	boolean_to_string \
	build_quadratic_equation \
	calculating_with_functions \
	century_from_year \
	class_creation_skills \
	coin_flips \
	convert_time_to_string \
	correct_time_string \
	count_by_x \
	count_smileys \
	descending_order \
	determinant \
	digitize \
	disemvowel \
	drone_fly_by \
	duplicate_encoder \
	find_missing_letter \
	find_most_frequent \
	find_the_odd_int \
	fixme_hello \
	friend_or_foe \
	from_pascal_to_cpp \
	fun_with_operators \
	grazing_donkey \
	hashtag_generator \
	how_good_really \
	isograms \
	is_square \
	lazy_repeater \
	leet_greek_case \
	make_the_deadfish_swim \
	most_frequent_item_count \
	multiple_of_eleven \
	mumbling \
	number_proper_fractions \
	number_to_string \
	people_in_the_bus \
	personalized_message \
	pointer_swap \
	polygon_area_inside_circle \
	population_growth \
	positive_sum \
	potion_class_101 \
	prime_factors \
	prime_word \
	printer_errors \
	pyramid_structure_analyzer \
	rectangle_into_squares \
	remove_array_values \
	rot13 \
	same_arrays \
	shortest_word \
	smallest_value \
	sort_array_by_string_length \
	split_strings \
	string_matchup \
	string_remove_first_last_char \
	string_repeat \
	string_reverse \
	string_scramble \
	sum_arrays \
	sum_of_odd_numbers \
	sum_of_parts \
	sum_the_tree \
	the_lift \
	third_angle_triangle \
	unique_in_order \
	vigenere_cipher_helper

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
