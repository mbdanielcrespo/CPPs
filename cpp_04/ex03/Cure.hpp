#include <AMateria.hpp>

class Cure : public AMateria
{
private:
	
public:
	Cure();
	Cure(const Cure& cp);
	Cure&operator=(const Cure& cp);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};
