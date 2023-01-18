/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:22:33 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/18 22:29:38 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("unamed"),
	_hitPoints(0),
	_energyPoints(0),
	_attackDamage(0)
{
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
	: _name(name),
	_hitPoints(hitPoints),
	_energyPoints(energyPoints),
	_attackDamage(attackDamage)
{
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
}
