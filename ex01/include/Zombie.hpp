#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void			announce();
		void			setName(std::string name);
		std::string		getName() const;
		static Zombie*	zombieHorde(int N, std::string name);
	private:
		std::string		name;
};

#endif
