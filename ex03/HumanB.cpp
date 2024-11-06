/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:53:07 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/05 17:47:37 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name, Weapon* weapon): _name(name), _weapon(weapon) {}


HumanB::~HumanB() {
}

void HumanB::attack() const {
	if (this->_weapon != nullptr)
		std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attack with bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}