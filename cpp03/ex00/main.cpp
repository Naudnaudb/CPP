#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clapi("Clapi");
	ClapTrap	clapo("Clapo");

	clapi.attack("his enemy");
	clapi.takeDamage(9);
	clapi.attack("his enemy");
	clapi.beRepaired(10);
	clapi.attack("his enemy");
}
