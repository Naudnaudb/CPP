#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->set_name("anonymous");
	this->set_hitPoints(100);
	this->set_energyPoints(50);
	this->set_attackDamage(20);
	std::cout << "ScavTrap " << this->get_name() << " was born!" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->set_name(name);
	this->set_hitPoints(100);
	this->set_energyPoints(50);
	this->set_attackDamage(20);
	std::cout << "ScavTrap " << name << " was born!" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other)
{
	std::cout << "ScavTrap " << other << " was copied" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->get_name() << " blasting off again!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap " << this->get_name() << " is copied from " << other.get_name() << std::endl;

	if (this != &other)
	{
		this->set_hitPoints(other.get_hitPoints());
		this->set_energyPoints(other.get_energyPoints());
		this->set_attackDamage(other.get_attackDamage());
	}
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->get_energyPoints() > 0 && this->get_hitPoints() > 0)
	{
		std::cout << "ScavTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attackDamage() << " points of damage!" << std::endl;
		this->set_energyPoints(this->get_energyPoints() - 1);
	}
	else if (this->get_energyPoints() <= 0)
		std::cout << "ScavTrap " << this->get_name() << " can not attacks, he has no more energy points !" << std::endl;
	else
		std::cout << "ScavTrap " << this->get_name() << " can not attacks, he has no more hit points !" << std::endl;
	return;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->get_name() << " is in \"Gate keeper\" mode!" << std::endl;
}
