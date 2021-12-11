#include <iostream>


#define LOG(x) std::cout << x << std::endl;

void Increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	int b = 8;

	int& ref = a;
	ref = b;
	// a = 8, b = 8
	// instead we can swap between pointers then change the reference

	int* ref_a = &a;
	ref_a = &b; // changed to referece b

	Increment(a);
	LOG(a);

	// (pointer) get mem address of variable a
	int* memadr_of_a = &a;

	// get reference of variable a
	// reference if part of the type
	int& ref_of_a = a;
	ref_of_a = 2;

	LOG(a);

	//std::cin.get();
	return 0;
}