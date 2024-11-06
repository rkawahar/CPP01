/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:53:12 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/06 14:32:16 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA() : _name(""), _weapon() {}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}