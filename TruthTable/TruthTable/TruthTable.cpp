#include <iostream>

int main() {
	bool A = true, B = true;
	std::cout << "Оператор:&&\n";
	std::cout << A << " " << B << " " << (A && B) << std::endl;
	std::cout << A << " " << !B << " " << (!A && B) << std::endl;
	std::cout << !A << " " << B << " " << (A && !B) << std::endl;
	std::cout << !A << " " << !B << " " << (!A && !B) << std::endl;
	std::cout << "Оператор:||\n";
	std::cout << A << " " << B << " " << (A || B) << std::endl;
	std::cout << A << " " << !B << " " << (!A || B) << std::endl;
	std::cout << !A << " " << B << " " << (A || !B) << std::endl;
	std::cout << !A << " " << !B << " " << (!A || !B) << std::endl;

	return 0;


}