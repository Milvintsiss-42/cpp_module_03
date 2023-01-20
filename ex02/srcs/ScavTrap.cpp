/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:42:55 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/20 16:36:01 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_name = "unamed";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constructor by name called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(
	std::string name,
	int hitPoints,
	int energyPoints,
	int attackDamage)
{
	std::cout << "ScavTrap Custom constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = hitPoints;
	this->_energyPoints = energyPoints;
	this->_attackDamage = attackDamage;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot attack"
			<< std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " does not have enough "
			<< "energy points to attack." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damage!"
		<< std::endl;
	this->_energyPoints--;
}

void ScavTrap::guardGate() const
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot switch "
			"to Gate keeper mode." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << "is now in Gate keeper mode."
		<< std::endl;
}
