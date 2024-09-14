/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:44:55 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 22:04:40 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if (N < 0)
		return NULL;
	Zombie *fin = new Zombie[N];
	for (int i = 0; i < N ; i++){
		new (fin + i) Zombie(name);
	}
	return fin;
}