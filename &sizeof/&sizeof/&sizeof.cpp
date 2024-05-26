#include <iostream>

int main() {
	int valInt = 1;
	short valShort = 1;
	long valLong = 1;
	long long valLongLong = 1;
	float valFloat = 1.00;
	double valDouble = 1.00;
	long double valLongDouble = 1.00;
	bool valBool = 1;

	std::cout << "int: " << &valInt << " " << sizeof(valInt) << std::endl;

	std::cout << "short: " << &valShort << " " << sizeof(valShort) << std::endl;

	std::cout << "long: " << &valLong << " " << sizeof(valLong) << std::endl;

	std::cout << "long long: " << &valLongLong << " " << sizeof(valLongLong) << std::endl;

	std::cout << "float: " << &valFloat << " " << sizeof(valFloat) << std::endl;

	std::cout << "double: " << &valDouble << " " << sizeof(valDouble) << std::endl;

	std::cout << "long double: " << &valLongDouble << " " << sizeof(valLongDouble) << std::endl;

	std::cout << "bool: " << &valBool << " " << sizeof(valBool) << std::endl;

	return 0;
}