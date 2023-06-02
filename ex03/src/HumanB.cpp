/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:16:42 by kali              #+#    #+#             */
/*   Updated: 2023/06/02 20:19:32 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string & r_name)
{
		m_name = r_name;
}
HumanB::HumanB(const std::string & r_name, Weapon & r_wp)
{
	m_wp = &r_wp;
	m_name = r_name;
}
HumanB::~HumanB(){};
void	HumanB::setWeapon(Weapon & r_wp)
{
	m_wp = &r_wp;
}
void	HumanB::attack( void )
{
	std::cout << m_name << " attacks with their " << m_wp->getType() << std::endl;
}