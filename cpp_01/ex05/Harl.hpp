#include <iostream>
#include <main.h>

class Harl
{
	private:
	public:
		Harl(void);
		~Harl();
	
		static void	debug(void);
		static void	info(void);
		static void	warning(void);
		static void	error(void);
		void	(*funcs[4])(void);

		void	complain(std::string level);
};

