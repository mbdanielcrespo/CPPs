#include <Weapon.hpp>
#include <HumanA.hpp>
#include <HumanB.hpp>


int	main()
{
	Weapon club = Weapon("crude spiked club");

	HumanA bob("bob", &club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon club2 = Weapon("crude spiked club");
	HumanB jack("jack");
	jack.setWeapon(&club2);
	jack.attack();
	club2.setType("some other type of club");
	jack.attack();
}