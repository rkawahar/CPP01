/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:51:21 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/06 19:42:23 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Arguments error: select from \"DEBUG\" \"INFO\" \"WARNING\" \"ERROR\"" << std::endl;
		return (1);
	}
	Harl harl;
	std::string str = argv[1];
	harl.complain(str);
}