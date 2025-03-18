/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:34:46 by ismherna          #+#    #+#             */
/*   Updated: 2025/03/18 19:56:35 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string	input;

	std::cout << "insert heap zombie name:\t";
	std::cin >> input;

	Zombie *z1 = new_zombie(input);
	z1->announce();

	std::cout << "insert stack zombie name:\t";
	std::cin >> input;
	
	randomChump(input);
	delete(z1);
}