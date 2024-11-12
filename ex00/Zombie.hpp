/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:01:40 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 16:44:26 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private: 
		std::string _name;

	public: 
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

void randomChump( std::string name );
Zombie *newZombie(std::string name);

#endif