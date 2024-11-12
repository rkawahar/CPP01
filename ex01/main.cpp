/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:41:51 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 16:46:50 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	std::string name = "unko";
	int num = 5;
	Zombie *zombies = zombieHorde(num, name);

	for (int i = 0; i < num; i++) {
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}