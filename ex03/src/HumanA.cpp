/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 08:53:59 by kali              #+#    #+#             */
/*   Updated: 2023/06/02 13:27:48 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string & r_name, Weapon & r_wp) : m_wp(r_wp)
{
		m_name = r_name;
}

HumanA::~HumanA(){};

void	HumanA::attack( void )
{
	std::cout << m_name << " attacks with their " << m_wp.getType() << std::endl;
}