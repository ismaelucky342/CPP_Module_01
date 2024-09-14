/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:46:36 by ismherna          #+#    #+#             */
/*   Updated: 2024/09/14 22:33:57 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"
#include <fstream>

void	program(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		str;
	std::string		ret;

	infile.open(filename.c_str());
	outfile.open((filename + ".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	outfile.clear();
	
	if (infile.is_open())
		std::getline(infile, str, '\0');

	if (s1.empty() || s2.empty())
	{
		outfile << str;
		infile.close();
		outfile.close();
		return ;
	}
	
	long			i = 0;
	while ((i = str.find(s1)) != -1)
	{
		ret.append(str, 0, i);
		ret.append(s2);
		str = str.substr(i + s1.length());
	}
	if (str.empty() == false)
		ret.append(str);

	outfile << ret;
	infile.close();
	outfile.close();
}