/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:28:02 by ismherna          #+#    #+#             */
/*   Updated: 2025/04/29 20:28:25 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/*=================================INCLUDES=================================*/

# include <iostream>
# include <algorithm>

/*=================================CLASS====================================*/

class	Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
};

/*=================================PROTOTYPES================================*/

Zombie		*newZombie(std::string name);
void		randomChump(std::string name);

#endif