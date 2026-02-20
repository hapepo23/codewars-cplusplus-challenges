CXX = g++
CXXFLAGS = -std=c++17 -g -O0 -Wall -Wextra
LDLIBS = -lm

TARGETS = \
	beeramid \
	boolean_to_string \
	number_proper_fractions \
	sum_arrays \
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
