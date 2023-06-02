/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:47:44 by kali              #+#    #+#             */
/*   Updated: 2023/06/02 20:14:02 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *AshotDavo = zombieHorde(10, "Ero");

    for (int i = 0; i < 10; i++)
    {
        std::cout << "[i: " << i << "] ";
        AshotDavo[i].announce();
    }
    delete []AshotDavo;
    
    return 0;
}