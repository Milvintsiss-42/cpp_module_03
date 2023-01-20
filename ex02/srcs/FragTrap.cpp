/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:43:21 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/20 16:48:54 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->_name = "unamed";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor by name called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(
	std::string name,
	int hitPoints,
	int energyPoints,
	int attackDamage)
{
	std::cout << "FragTrap Custom constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = hitPoints;
	this->_energyPoints = energyPoints;
	this->_attackDamage = attackDamage;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys() const
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead and cannot asks "
			"for high fives." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " asks for 5 high fives."
		<< std::endl;
}
