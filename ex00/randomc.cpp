/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomc.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:57:27 by ismherna          #+#    #+#             */
/*   Updated: 2025/03/18 19:57:48 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie = Zombie(name);
	zombie.announce();
}