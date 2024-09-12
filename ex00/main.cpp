/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:34:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/12 17:38:12 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string	input;

	std::cout << "Heap zombie name:\t";
	std::cin >> input;

	Zombie *z1 = new_zombie(input);
	z1->announce();


	std::cout << "Stack zombie name:\t";
	std::cin >> input;
	
	randomChump(input);


	delete(z1);
}