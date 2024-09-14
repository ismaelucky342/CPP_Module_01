/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:46:36 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 22:33:48 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout	<< "Error. Input must be:" << std::endl
					<< argv[0] << " <filename> <s1> <s2>"
					<< std::endl;
		return 1;
	}

	std::string	filename = argv[1];

	if (access(filename.c_str(), F_OK) == -1)
	{
		std::cout	<< "Error. Filename \"" << filename << "\" doesn't exist"
					<< std::endl;
		return 1;
	}

	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	program(filename, s1, s2);
}