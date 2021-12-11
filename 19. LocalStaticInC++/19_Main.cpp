#include <iostream>

class Singleton
{
public:
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}
public:
	void Hello() 
	{ 
		std::cout << "Hello From Singleton Class!" << std::endl; 
	}
};

void Function()
{
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main()
{
	Function();
	Function();
	Function();
	Function();
	Function();

	Singleton::Get().Hello();
	Singleton::Get().Hello();

	std::cin.get();
}