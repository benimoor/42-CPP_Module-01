/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:34:17 by kali              #+#    #+#             */
/*   Updated: 2023/05/24 12:12:58 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	m_name = "Zombie with no name";
}

Zombie::Zombie(std::string name)
{
	if (name.length() > 0)
		m_name = name;
	else
		m_name = "Zombie with no name";
}

Zombie::~Zombie()
{
	std::cout << m_name << ": destructory Armenakis\n";
}

void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}