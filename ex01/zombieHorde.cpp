/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:45:01 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/25 12:17:07 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	int i = 0;
	if (N < 1)
		return (NULL);
	Zombie *zombiehazard = new Zombie[N];
	while (i < N)
	{
		std::ostringstream oss;
		oss << i;
		zombiehazard[i].naming(name + oss.str());
		i++;
	}
	return (zombiehazard);
}
