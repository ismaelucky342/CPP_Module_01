/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:34:46 by ismherna          #+#    #+#             */
/*   Updated: 2025/03/18 20:34:19 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie *horde = zombieHorde(N, "WordMy");

	for (int i = 0; i < N; ++i)
		horde[i].announce();
	
	delete[] horde;
}