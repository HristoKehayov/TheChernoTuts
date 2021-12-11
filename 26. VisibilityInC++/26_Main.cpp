#include <iostream>
#include <string>

class Entity
{
// keyword protected can only be access
// by all its subclasses / inheritances
protected:
	int X, Y;
	void Print() {}
public:
	Entity()
	{
		X = 0;
		Print();
	}

};

class Player : public Entity
{
public:
	Player()
	{
		X = 2;
		Print();
	}
};

int main()
{

	Entity e;
	// Can't be access
	// main does not inheritance the Entity Class
	//e.Print();
	//e.X = 2;
	std::cin.get();
}