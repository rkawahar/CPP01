/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:45:01 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/01 18:49:58 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	int i = 0;
	Zombie *zombiehazard = new Zombie[N];

	if (N < 1)
		return (NULL);
	while (i < N)
	{
		zombiehazard[i].naming(name + std::to_string(i));
		i++;
	}
	return (zombiehazard);
}
