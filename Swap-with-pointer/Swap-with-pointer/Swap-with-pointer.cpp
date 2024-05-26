#include <iostream>

void swap(int* a, int* b) {
	int swp = *a;
	*a = *b;
	*b = swp;
}

int main(int argc, char** argv) {
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	int* first = &a;
	int* second = &b;

	swap(first, second);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}