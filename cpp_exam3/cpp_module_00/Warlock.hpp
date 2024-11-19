







#pragma once
#include <iostream>
#include <string>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(const Warlock &cp);
		Warlock&operator=(const Warlock &cp);
	public:
		~Warlock();

		Warlock(const std::string& name, const std::string& title);

		const std::string getName(void) const;
		const std::string getTitle(void) const;

		void	setTitle(const std::string& title);
		void 	introduce() const ;
};
