#include <iostream>
#include <string>

void PrintString(const std::string& ref_string)
{
	// try to use reference if we want to change the value of the variable
	// we are promesing the we cannot override
	// we are using constant string reference
	//ref_string += "h";
	std::cout << ref_string << std::endl;
}

int main()
{
	// fixed allocated block of memory
	// when using " instead ' -> it becomes char pointer
	const char* name = "Text";
	// by adding 0 at the end we tell
	// to the compiler that is the end of char array
	char name2[5] = {'T', 'E',  'S',  'T', 0};


	// to add string to another string
	//std::string string_name = "Test String" + "Test";
	std::string string_name = std::string("Test String") + " Added";
	bool contains = string_name.find("no") != std::string::npos;

	PrintString(name);
	PrintString(name2);
	PrintString(string_name);
	//std::cout << name << std::endl;
	//std::cout << name2 << std::endl;
	//std::cout << string_name << std::endl;

	std::cin.get();
}