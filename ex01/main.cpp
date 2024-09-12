/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:34:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/12 17:47:51 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int			number = 5;
	std::string	name = "Z";

	Zombie *zombies = zombieHorde(number, name);

	for (int i = 0; i < number; i++)
		zombies[i].announce();

	delete[] zombies;
}