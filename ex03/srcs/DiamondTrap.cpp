/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:54:23 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/20 19:28:49 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("unamed_clap_name"),
	FragTrap("unamed_clap_name"),
	ScavTrap("unamed_clap_name")
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_name = "unamed";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	_name(name)
{
	std::cout << "DiamondTrap Constructor by name called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
	: FragTrap(src),
	ScavTrap(src),
	_name(src.getName())
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

std::string DiamondTrap::getName() const
{
	return this->_name;
}

void DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap "
		<< "name is " << this->ClapTrap::_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs.getName();
	this->ClapTrap::_name = rhs.ClapTrap::getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}
