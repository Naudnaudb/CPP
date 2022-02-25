#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->set_name("anonymous");
	this->set_hitPoints(100);
	this->set_energyPoints(100);
	this->set_attackDamage(30);
	std::cout << "FragTrap " << this->get_name() << " was born!" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->set_name(name);
	this->set_hitPoints(100);
	this->set_energyPoints(100);
	this->set_attackDamage(30);
	std::cout << "FragTrap " << name << " was born!" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &other): ClapTrap(other)
{
	std::cout << "FragTrap " << this->get_name() << " was copied" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->get_name() << " blasting off again!" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap " << this->get_name() << " is copied from " << other.get_name() << std::endl;

	if (this != &other)
	{
		this->set_hitPoints(other.get_hitPoints());
		this->set_energyPoints(other.get_energyPoints());
		this->set_attackDamage(other.get_attackDamage());
	}
	return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->get_energyPoints() > 0 && this->get_hitPoints() > 0)
	{
		std::cout << "FragTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attackDamage() << " points of damage!" << std::endl;
		this->set_energyPoints(this->get_energyPoints() - 1);
	}
	else if (this->get_energyPoints() <= 0)
		std::cout << "FragTrap " << this->get_name() << " can not attacks, he has no more energy points !" << std::endl;
	else
		std::cout << "FragTrap " << this->get_name() << " can not attacks, he has no more hit points !" << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap " << this->get_name() << " is asking you to high five!" << std::endl;
}
