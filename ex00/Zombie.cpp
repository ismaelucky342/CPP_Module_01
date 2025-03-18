/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:57:27 by ismherna          #+#    #+#             */
/*   Updated: 2025/03/18 19:57:30 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout	<< _name << RED "has died 💀" RESET
				<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout	<< _name << YELLOW ": BraiiiiiiinnnzzzZ..." RESET
				<< std::endl;
}
