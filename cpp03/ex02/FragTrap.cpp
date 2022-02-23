/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:02:56 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/24 16:01:17 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

#define HIT_POINTS		100
#define ENERGY_POINTS	100
#define ATTACK_DAMAGE	30

FragTrap::FragTrap(): ClapTrap() {
	_hitPoints = HIT_POINTS;
	_energyPoints = ENERGY_POINTS;
	_attackDamage = ATTACK_DAMAGE;
	std::cout << "FragTrap " << _name << " was born" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_hitPoints = HIT_POINTS;
	_energyPoints = ENERGY_POINTS;
	_attackDamage = ATTACK_DAMAGE;
	std::cout << "FragTrap " << _name << " was born" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other): ClapTrap(other) {
	std::cout << "FragTrap " << _name << " was copied" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " was destroyed" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const &other) {
	std::cout	<< "FragTrap " << _name << " is copied from " << other._name
				<< std::endl;

	if (this != &other) {
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}

	return *this;
}

void	FragTrap::attack(std::string const &target) const {
	std::cout	<< "FragTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout	<< "FragTrap " << _name << " is asking you to high five!"
				<< std::endl;
}
