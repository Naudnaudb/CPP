#include "ClapTrap.hpp"

int	main() {
	ClapTrap	caio("Caio"), noia("Noia"), jojo(caio), def;

	caio = noia;

	caio.attack("Ollo");
	noia.takeDamage(100);
	jojo.beRepaired(42);
}
