/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:42:36 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/01 18:47:53 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private: std::string _name;

	public: Zombie();
	public: ~Zombie();
	public: void announce();
	public: void naming(std::string name);
};

	Zombie *zombieHorde(int N, std::string name);

#endif