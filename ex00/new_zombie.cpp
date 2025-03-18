/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_zombie.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:57:27 by ismherna          #+#    #+#             */
/*   Updated: 2025/03/18 19:57:43 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* new_zombie(std::string name )
{
	Zombie	*zombie = new Zombie(name);
	return (zombie);
}