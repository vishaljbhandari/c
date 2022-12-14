// gcc -lstdc++ -lm reverse_iterator.cpp
#include <iostream>
#include <string>
#include <iterator>

int main() {
	std::string s = "Hello, world";
	std::reverse_iterator < std::string::iterator > r = s.rbegin();
	r[7] = 'O'; // replaces 'o' with 'O'
	r += 7; // iterator now points at 'O'
	std::string rev(r, s.rend());
	std::cout << rev << '\n';
	return 0;
}
