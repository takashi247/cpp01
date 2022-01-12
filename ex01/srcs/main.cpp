#include "Zombie.hpp"

int
	main()
{
	const int	num_of_zombies = 5;
	zombies = zombieHorde(num_of_zombies, "hoge");
	for (int i = 0; i < num_of_zombies; i++)
		zombies[i].announce();
	delete [] zombies;
}
