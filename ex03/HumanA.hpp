/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:06:35 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/05 15:36:27 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private: std::string _name;
	private: Weapon& _weapon;
	private: HumanA();

	public: HumanA(const std::string name, Weapon& weapon);
	public: ~HumanA();
	public: void attack() const;
};

#endif