#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->set_name("anonymous");
	this->set_hitPoints(10);
	this->set_energyPoints(10);
	this->set_attackDamage(0);
	std::cout << "ClapTrap " << this->get_name() << " was born!" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	this->set_name(name);
	this->set_hitPoints(10);
	this->set_energyPoints(10);
	this->set_attackDamage(0);
	std::cout << "ClapTrap " << this->get_name() << " was born!" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src.get_name()), _hitPoints(src.get_hitPoints()), _energyPoints(src.get_energyPoints()), _attackDamage(src.get_attackDamage())
{
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->get_name() << " blasting off again!" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	(void)rhs;
	return (*this);
}

const std::string ClapTrap::get_name(void) const
{
	return (this->_name);
}

int ClapTrap::get_hitPoints(void) const
{
	return (this->_hitPoints);
}

int ClapTrap::get_energyPoints(void) const
{
	return (this->_energyPoints);
}

int ClapTrap::get_attackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void ClapTrap::set_hitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void ClapTrap::set_energyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void ClapTrap::set_attackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->get_energyPoints() > 0 && this->get_hitPoints() > 0)
	{
		std::cout << "ClapTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attackDamage() << " points of damage!" << std::endl;
		this->set_energyPoints(this->get_energyPoints() - 1);
	}
	else if (this->get_energyPoints() <= 0)
		std::cout << "ClapTrap " << this->get_name() << " can not attacks, he has no more energy points !" << std::endl;
	else
		std::cout << "ClapTrap " << this->get_name() << " can not attacks, he has no more hit points !" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->get_hitPoints() > 0)
	{
		this->set_hitPoints(this->get_hitPoints() - amount);
		std::cout << "ClapTrap " << this->get_name() << " take " << amount << " damage! He has " << this->get_hitPoints() << " hit points left." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->get_name() << " can not take damage, he has no more hit points !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->get_energyPoints() > 0 && this->get_hitPoints() > 0)
	{
		std::cout << "ClapTrap " << this->get_name() << " regain " << amount << " hit points!" << std::endl;
		this->set_hitPoints(this->get_hitPoints() + amount);
		std::cout << "Now he has " << this->get_hitPoints() << " hit points." << std::endl;
		this->set_energyPoints(this->get_energyPoints() - 1);
	}
	else if (this->get_energyPoints() <= 0)
		std::cout << "ClapTrap " << this->get_name() << " can not take damage, he has no more energy points !" << std::endl;
	else
		std::cout << "ClapTrap " << this->get_name() << " can not take damage, he has no more hit points !" << std::endl;
	return;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &src)
{
	o << src.get_name();
	return (o);
}