/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:47:44 by kali              #+#    #+#             */
/*   Updated: 2023/05/24 12:04:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie first;
    first.announce();
    
    Zombie Ashot("Ashot");
    Ashot.announce();
    
    Zombie *Davo = newZombie("Davo");
    Davo->announce();
    delete(Davo);
    
    Zombie *NorDavo = new Zombie("NorDavo");
    NorDavo->announce();
    delete(NorDavo);
    
    randomChump("RandomAshot");
    
    return 0;
}