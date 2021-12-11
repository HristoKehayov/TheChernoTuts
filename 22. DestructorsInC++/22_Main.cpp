#include <iostream>

class Entity
{
public:
	float X, Y;

	// each class has default empty constructors with no initialization
	// so we SHOULD initialize everything we tend to use in the program
	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created Entity!" << std::endl;
	}

	Entity(int x, int y)
	{
		X = x;
		Y = y;
	}

	// Gets called when the entity object gets destroyed
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	
	Function();

	std::cin.get();
}