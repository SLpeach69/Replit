#include <iostream>

int main() {
	int a, b, c, first, second, third;

	std::cout << "Введите 3 числа\n";
	std::cin >> a >> b >> c;

	first = ((a >= b) && (a >= c) ? a : ((b > a) && (b > c) ? b : c));
	second = ((a >= b) && (a <= c) || ((a <= b) && (a >= c)) ? a : (((b >= a) && (b <= c)) || ((b <= a) && (b >= c))) ? b : c);
	third = ((a <= c) && (a <= b) ? a : ((b < a) && (b < c) ? b : c));

	std::cout << first << ' ' << second << ' ' << third;

	return 0;
}