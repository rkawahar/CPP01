/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:45:01 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/13 08:53:25 by rkawahar         ###   ########.fr       */
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
		std::ostringstream oss;
		oss << i;
		zombiehazard[i].naming(name + oss.str());
		i++;
	}
	return (zombiehazard);
}
