#include <string>
#include <iostream>

class Entity
{
public:
	// 
	virtual std::string GetName() { return "Entity"; }
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
};


void PrintName(Entity* entity)
{
	// here we use arrow (->) to access its properties/methods
	// if the passed object is a pointer
	// in C# it is entity.GetName();
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;
	PrintName(e);

	Player* p = new Player("Cherno");
	PrintName(p);
	//std::cout << p->GetName() << std::endl;

	std::cin.get();
}