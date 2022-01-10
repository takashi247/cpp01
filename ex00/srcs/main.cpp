#include "Zombie.hpp"

int
	main()
{
	Zombie	z1("zombie 1");
	z1.announce();
	Zombie	*z2;
	z2 = Zombie::newZombie("zombie 2");
	z2->announce();
	delete z2;
	Zombie::randomChump("zombie 3");
}
