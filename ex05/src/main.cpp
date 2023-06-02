/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:17:21 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/02 19:18:17 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl		harl;
	std::string	param;

	while (true)
	{
		std::cout << "Please insert \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\" or \"EXIT\"(for exit program) -> ";
		getline(std::cin, param);
		if (param.compare("EXIT") == 0 || std::cin.eof())
			return 0;
		harl.complain(param);
	}
	
	return 0;
}