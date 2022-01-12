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
	private:
		std::string		name;
};

#endif
