/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:42:35 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/05 17:45:22 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private: std::string _name;
	private: Weapon* _weapon;

	public: HumanB(const std::string name, Weapon* weapon = NULL);
	public: ~HumanB();
	public: void setWeapon(Weapon& weapon);
	public: void attack() const;
};

#endif