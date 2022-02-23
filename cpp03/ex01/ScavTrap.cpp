/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:02:56 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/24 14:42:01 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

#define HIT_POINTS		100
#define ENERGY_POINTS	50
#define ATTACK_DAMAGE	20

ScavTrap::ScavTrap(): ClapTrap() {
	_hitPoints = HIT_POINTS;
	_energyPoints = ENERGY_POINTS;
	_attackDamage = ATTACK_DAMAGE;
	std::cout << "ScavTrap " << _name << " was born" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_hitPoints = HIT_POINTS;
	_energyPoints = ENERGY_POINTS;
	_attackDamage = ATTACK_DAMAGE;
	std::cout << "ScavTrap " << _name << " was born" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other) {
	std::cout << "ScavTrap " << _name << " was copied" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " was destroyed" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &other) {
	std::cout	<< "ScavTrap " << _name << " is copied from " << other._name
				<< std::endl;

	if (this != &other) {
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}

	return *this;
}

void	ScavTrap::attack(std::string const &target) const {
	std::cout	<< "ScavTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) const {
	std::cout << "ScavTrap " << _name << " is guarding the gate!" << std::endl;
}
