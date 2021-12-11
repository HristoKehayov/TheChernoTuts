#include <iostream>

class Entity
{
public:
	float X, Y;

	// each class has default empty constructors with no initialization
	// so we SHOULD initialize everything we tend to use in the program
	Entity()
	{
		X = 0;
		Y = 0;
	}

	Entity(int x, int y)
	{
		X = x;
		Y = y;
	}

	void Init()
	{
		X = 0;
		Y = 0;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};


class Log
{
public:
	// here we tell the compiler
	// to remove the default constructor
	Log() = delete;

	static void Write()
	{

	}
};

int main()
{
	Entity e(10, 5);
	//e.Init();
	e.Print();

	Log::Write();

	// (gives error) class Log cant be initialized like object
	// because we have deleted the default constructor
	// Log l; 
	std::cin.get();
}