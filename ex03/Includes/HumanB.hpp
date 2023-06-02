/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:14:32 by kali              #+#    #+#             */
/*   Updated: 2023/05/26 09:26:12 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string m_name;
		Weapon *m_wp;
	public:
		HumanB(const std::string & r_name);
		HumanB(const std::string & r_name, Weapon & r_wp);
		~HumanB();
		void	setWeapon(Weapon & r_wp);
		void	attack( void );
};
#endif