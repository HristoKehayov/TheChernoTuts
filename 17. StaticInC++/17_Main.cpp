#include <iostream>


/*
* (external linking) extern -> referre to already defined variable
* static only visable in 1 translation unit (file)
* extern int s_Variable;
*
*/


// global variable, meaning it will be available to all translation unit
// try to avoid, unless 100% sure it should be global
int s_Variable; 

void Function()
{

}

int main()
{
	std::cout << s_Variable << std::endl;

	std::cin.get();
}