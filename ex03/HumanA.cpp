/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:46:36 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 22:30:22 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_weapon = &weapon;
	_name = name;
}

HumanA::~HumanA()
{}

void	HumanA::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanA::attack()
{
	if (!_weapon)
	{
		std::cout	<< _name
					<< " can't attack"
					<< std::endl;
	}
	else
	{
		std::cout	<< _name
					<< " attacks with their "
					<< _weapon->getType()
					<< std::endl;
	}
}