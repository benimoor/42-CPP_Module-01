/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 08:23:09 by kali              #+#    #+#             */
/*   Updated: 2023/05/26 09:23:49 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
		std::string m_type;
	public:
		Weapon(std::string	const & r_type);
		// ~Weapon();
		std::string const &	getType();
		void	setType(std::string const &	r_type);
};
#endif