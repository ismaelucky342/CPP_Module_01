/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:34:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 22:05:39 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){

	Zombie	*ary;
	ary = zombieHorde (10, "Horde");
	for (int i = 0; i < 10; i ++)
		ary[i].announce();
	delete [] ary;
	return 0;
}