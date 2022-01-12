#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce();
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
	private:
		std::string	name;
};

#endif
