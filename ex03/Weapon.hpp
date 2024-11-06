/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:54:11 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/06 14:21:22 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	private: std::string _type;

	public: Weapon(const std::string &weaponType);
	public: ~Weapon();
	public: std::string getType() const;
	public: void setType(const std::string& type);
};

#endif