#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType();
		void				setType(std::string type);
	private:
		std::string	type;
};

#endif
