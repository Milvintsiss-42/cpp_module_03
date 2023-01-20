/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:18:08 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/20 15:36:45 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
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

	return 0;
}
