/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:18:08 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/20 19:45:15 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap riri("Riri");
	DiamondTrap fifi("Fifi");
	DiamondTrap loulou("Loulou");

	riri.whoAmI();
	fifi.whoAmI();
	loulou.whoAmI();
	std::cout << "Riri attack damage: " << riri.getAttackDamage() << std::endl;
	std::cout << "Riri hit points: " << riri.getHitPoints() << std::endl;
	std::cout << "Riri energy points: " << riri.getEnergyPoints() << std::endl;
	riri.attack(fifi.getName());
	fifi.takeDamage(riri.getAttackDamage());
	loulou.beRepaired(5);
	riri.attack(fifi.getName());
	fifi.takeDamage(riri.getAttackDamage());
	fifi.beRepaired(10);
	riri.attack(loulou.getName());
	loulou.takeDamage(riri.getAttackDamage());
	riri.attack(loulou.getName());
	loulou.takeDamage(riri.getAttackDamage());
	riri.attack(loulou.getName());
	loulou.takeDamage(riri.getAttackDamage());
	riri.attack(loulou.getName());
	loulou.takeDamage(riri.getAttackDamage());
	riri.attack(loulou.getName());
	loulou.takeDamage(riri.getAttackDamage());
	loulou.highFivesGuys();
	loulou.guardGate();
	riri.highFivesGuys();
	riri.guardGate();
	return 0;
}
