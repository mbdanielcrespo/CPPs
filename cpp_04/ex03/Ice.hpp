#include <AMateria.hpp>

class Ice : public AMateria
{
	private:
		
	public:
		Ice();
		Ice(const Ice& cp);
		Ice&operator=(const Ice& cp);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};
