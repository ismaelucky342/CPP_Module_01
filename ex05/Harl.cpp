/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:46:36 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 22:37:13 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug()
{
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
				<<	std::endl;
}

void	Harl::info()
{
	std::cout	<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
				<<	std::endl;
}

void	Harl::warning()
{
	std::cout	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
				<<	std::endl;
}

void	Harl::error()
{
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<<	std::endl;
}

void	Harl::complain(std::string level)
{
	t_harl	commands[4] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};
	
	for (size_t i = 0; i < 4; i++)
	{
		if (commands[i].text == level)
			(this->*commands[i].func)();
	}
}