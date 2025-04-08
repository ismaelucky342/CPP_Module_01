/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 19:57:27 by ismherna          #+#    #+#             */
/*   Updated: 2025/04/08 19:18:02 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

/*=================================INCLUDES=================================*/

#include <iostream>
#include <string>
#include <iostream>

/*=================================MACROS===================================*/

#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

/*===================================CLASS===================================*/

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

/*=================================PROTOTYPES================================*/

Zombie *new_zombie(std::string name);
void randomChump(std::string name);

#endif