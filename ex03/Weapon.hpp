/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:46:36 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 22:31:17 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

/*=================================INCLUDES=================================*/

#include <string>
#include <iostream>

/*=================================CLASS====================================*/

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		~Weapon();

		const std::string	&getType();
		void		setType(std::string);
};

#endif