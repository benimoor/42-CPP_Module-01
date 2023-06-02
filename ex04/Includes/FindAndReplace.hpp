/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindAndReplace.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:35:13 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/02 14:37:55 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FINDANDREPLACE_HPP
# define  FINDANDREPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

int	FindAndReplace(std::ifstream &inFile, char *file, char *s1, char *s2);

#endif