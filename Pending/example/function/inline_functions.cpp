// g++ -Wall -Wextra -Werror inline_functions.cpp
#include <iostream>
using namespace std;

inline int Square(int x) {
	return x * x;
}
//#define Square(x) x*x
int main() {
	using namespace std;
	int val = 5;
	int result = Square(val + 1);
	cout << result << endl;
	return 0;
}
