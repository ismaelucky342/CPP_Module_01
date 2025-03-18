/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:46:36 by ismherna          #+#    #+#             */
/*   Updated: 2025/03/18 20:35:17 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	std::cout	<< _name << ": 💀"
				<< std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout	<< _name << ": BraiiiiiiinnnzzzZ..."
				<< std::endl;
}