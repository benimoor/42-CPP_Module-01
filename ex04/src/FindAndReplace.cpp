/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindAndReplace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:17:19 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/02 18:16:31 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindAndReplace.hpp"

int	FindAndReplace(std::ifstream & inFile, char *file, char *s1, char *s2)
{
	//creating new file
	std::string name = file;
	name += ".replace";
	std::ofstream outFile(name);

	//writting file content to string
	std::string line;
	std::string data;
	std::string newData;
	while(std::getline(inFile, line))
	{
		data.append(line);
		data.append("\n");
	}
	std::string str1 = s1;
	std::string str2 = s2;
	std::size_t	i = 0;
	std::size_t	j = 0;
	while((i = data.find(str1, i)) != std::string::npos)
	{
		newData.append(data.substr(j, i - j));
		newData.append(str2);
		i += str1.length();
		j = i;
	}
	newData += data.substr(j , data.length());
		std::cout << newData << std::endl << std::endl;
	outFile << newData;
	return 0;
}