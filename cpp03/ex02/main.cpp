#include "FragTrap.hpp"

int	main()
{
	FragTrap	clapi("Clapi"), clapo("Clapo");

	clapi.attack("his enemy");
	clapo.takeDamage(1000);
	clapo = clapi;
	clapo.takeDamage(1000);
	clapi.highFivesGuys();
}
