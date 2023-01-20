/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-stra <ple-stra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:43:08 by ple-stra          #+#    #+#             */
/*   Updated: 2023/01/20 16:38:23 by ple-stra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(
		std::string name,
		int hitPoints,
		int energyPoints,
		int attackDamage);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	void attack(const std::string & target);
	void guardGate() const;
};
