/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:53:04 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/25 12:20:02 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType) {
	this->_type = weaponType;
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() {
	return this->_type;
}

void Weapon::setType(std::string type) {
	this->_type = type;
}