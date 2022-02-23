/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:01:44 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/23 18:49:40 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main() {
	FragTrap	caio("Caio"), noia("Noia"), jojo(caio), def;

	caio = noia;

	caio.attack("Ollo");
	noia.takeDamage(100);
	jojo.beRepaired(42);
	caio.highFivesGuys();
}
