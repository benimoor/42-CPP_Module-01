/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:05:04 by kali              #+#    #+#             */
/*   Updated: 2023/05/25 12:22:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string =  "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string&    stringREF = string;

    std::cout << "string = " << string << "\n";
    std::cout << "stringPTR = " << *stringPTR << "\n";
    std::cout << "stringREF = " << stringREF << "\n";
    
    return 0;
}