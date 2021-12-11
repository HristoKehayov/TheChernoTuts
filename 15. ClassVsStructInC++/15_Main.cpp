#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;

class Player_Class
{
	// By default the visability in classes is PRIVATE
	// that this the only difference

public:
	int x, y, speed;
	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

struct Player_Struct
{
	// By default the visability in structs is PUBLIC
	// that this the only difference

	int x, y, speed;
	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};



int main()
{
	Player_Class player_class;
	player_class.x = 4;
	player_class.y = 4;
	player_class.speed = 5;
	player_class.Move(1, -1);


	Player_Struct player_struct;
	player_struct.x = 4;
	player_struct.y = 4;
	player_struct.speed = 5;
	player_struct.Move(1, -1);


	return 0;
}