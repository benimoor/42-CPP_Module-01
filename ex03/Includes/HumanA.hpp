/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 08:44:59 by kali              #+#    #+#             */
/*   Updated: 2023/05/26 09:24:14 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
private:
	std::string m_name;
	Weapon &		m_wp;
public:
	HumanA(const std::string & r_name, Weapon & r_wp);
	~HumanA();
	void	attack( void );
};
#endif