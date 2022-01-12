#include "Zombie.hpp"

Zombie
	*zombieHorde(int N, std::string name)
{
	Zombie	*head;
	head = new Zombie[N];
	for (int i = 0; i < N; i++)
		head[i].setName(name);
	return (head);
}