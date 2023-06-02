/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:34:52 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/02 18:28:16 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindAndReplace.hpp"

int main(int ac, char *av[])
{
	if (ac != 4)
		return 1;
	std::ifstream inFile;
	inFile.open(av[1]);
	if(!inFile)
	{
		std::cerr << "Unable to open file " << av[1] << "\n";
		return 2;
	}
	if(!av[2] || !*av[2])
	{
		std::cerr << "mi ban tpem durs gam tenam incha asum" << av[1] << "\n";
		return 3;
	}
	FindAndReplace(inFile, av[1], av[2], av[3]);
	return 0;
		
}