#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 
# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void announce(void);
		void setName(std::string name);
		
	private:
		std::string	_name;
};

#endif // ZOMBIE_HPP