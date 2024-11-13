/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkawahar <rkawahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:42:36 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/13 08:51:59 by rkawahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <sstream>
# include <iostream>

class Zombie {
	private: 
		std::string _name;

	public: 
		Zombie();
		~Zombie();
		void announce();
		void naming(std::string name);
};

	Zombie *zombieHorde(int N, std::string name);

#endif