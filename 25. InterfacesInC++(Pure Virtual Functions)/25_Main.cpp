#include <string>
#include <iostream>

class Printable
{
public:
	// = 0 makes it pure virtual function
	// and has to be implemented
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:

	virtual std::string GetName() { return "[Name] Enttity"; }
	std::string GetClassName() override { return "[ClassName] Entity"; }
};


class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {}

	// recommended to write override keyword
	// if using virtual functions
	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "[ClassName] Player"; }

};


void PrintName(Entity* entity)
{
	// here we use arrow (->) to access its properties/methods
	// if the passed object is a pointer
	// in C# it is entity.GetName();
	std::cout << entity->GetName() << std::endl;
}

class A : public Printable
{
public:
	std::string GetClassName() override { return "[ClassName] A"; }
};

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;
	//PrintName(e);

	Player* p = new Player("Cherno");

	A* a = new A();
	//PrintName(p);
	//std::cout << p->GetName() << std::endl;

	Print(e);
	Print(p);
	Print(a);


	std::cin.get();
}