/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:17:21 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/02 19:37:23 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	Harl		harl;
	std::string	param;

	if (ac != 2)
		return 1;
	param = av[1];
	if (param.compare("DEBUG") && param.compare("INFO") && param.compare("WARNING") && param.compare("ERROR"))
	{
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 2;
	}
	harl.complain(param);
	return 0;
}