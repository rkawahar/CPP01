/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:42:35 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 16:53:33 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private: 
		std::string _name;
		Weapon* _weapon;

	public: 
		HumanB(const std::string name, Weapon* weapon = NULL);
		~HumanB();
		void setWeapon(Weapon& weapon);
		void attack() const;
};

#endif