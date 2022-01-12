#include "Zombie.hpp"

int
	main()
{
	Zombie	z1("zombie 1");
	z1.announce();
	Zombie	*zombies;
	const int	num_of_zombies = 5;
	zombies = z1.zombieHorde(num_of_zombies, "hoge");
	for (int i = 0; i < num_of_zombies; i++)
		zombies[i].announce();
	delete [] zombies;
}
