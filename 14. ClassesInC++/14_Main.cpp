#include <iostream>
#define LOG(x) std::cout<<x<<std::endl;

class Player
{
public:
	int x, y, speed;
	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};



int main()
{
	Player player;
	player.x = 4;
	player.y = 4;
	player.speed = 5;
	player.Move(1, -1);

	LOG(player.x);
	LOG(player.y);

	return 0;
}