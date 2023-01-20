/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:18:08 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/20 16:49:52 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		ClapTrap riri("Riri", 10, 5, 12);
		ClapTrap fifi("Fifi");
		ClapTrap loulou("Loulou");

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
	}
	std::cout << std::endl << std::endl;
	{
		ScavTrap riri("Riri");
		ScavTrap fifi("Fifi");
		ScavTrap loulou("Loulou");

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
		riri.attack(loulou.getName());
		loulou.takeDamage(riri.getAttackDamage());
		riri.attack(loulou.getName());
		loulou.takeDamage(riri.getAttackDamage());
		loulou.guardGate();
		riri.guardGate();
	}
	std::cout << std::endl << std::endl;
	{
		FragTrap riri("Riri");
		FragTrap fifi("Fifi");
		FragTrap loulou("Loulou");

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
		riri.highFivesGuys();
	}
	return 0;
}
