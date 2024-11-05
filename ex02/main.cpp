/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:54:14 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/05 14:44:05 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string sentence = "HI THIS IS BRAIN";
	std::string *stringPTR = &sentence;
	std::string &stringREF = sentence;

	std::cout << "sentence : " << &sentence << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringPEF : " << &sentence << std::endl;

	std::cout << "*sentence : " << sentence << std::endl;
	std::cout << "*stringPTR : " << *stringPTR << std::endl;
	std::cout << "*stringREF : " << stringREF << std::endl;
}