/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:50:53 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/06 19:36:53 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::invalid() {
	std::cout << "[ Invalid Args ]" << std::endl;
	std::cout << "Invalid Argument: select from \"DEBUG\" \"INFO\" \"WARNING\" \"ERROR\"" << std::endl;
}

void Harl::complain(std::string level) {
	t_func funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::invalid};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	int index = 0;
	while (index < 4)
	{
		if (!levels[index].compare(level))
			break;
		index++;
	}
	(this->*funcs[index])();
}