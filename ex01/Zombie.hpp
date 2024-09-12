/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:47:04 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/12 17:48:12 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <stdlib.h>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();

		void	set_name(std::string name);
		
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif