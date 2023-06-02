/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 08:29:15 by kali              #+#    #+#             */
/*   Updated: 2023/05/26 09:07:42 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	const & r_type)
{
	Weapon::setType(r_type);
}

std::string const &	Weapon::getType( void ) {return m_type;}

void	Weapon::setType(std::string const &	r_type)
{
		m_type = r_type;
}