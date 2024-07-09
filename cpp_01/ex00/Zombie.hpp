#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 
# include <iostream>
# include <iomanip>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();


		void announce(void);
	private:
		std::string	_name;
};

#endif // ZOMBIE_HPP