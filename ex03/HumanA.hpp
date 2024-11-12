/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:06:35 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 16:51:08 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private: 
		std::string _name;
		Weapon& _weapon;
		HumanA();

	public: 
		HumanA(const std::string name, Weapon& weapon);
		~HumanA();
		void attack() const;
};

#endif