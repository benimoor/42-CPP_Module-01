/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:26:51 by ergrigor              #+#    #+#             */
/*   Updated: 2023/05/24 11:26:54 by ergrigor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
    std::string m_name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
public:
	void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
#endif