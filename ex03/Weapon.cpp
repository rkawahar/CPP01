/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:53:04 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/06 14:21:14 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType) {
	this->_type = weaponType;
}

Weapon::~Weapon() {
}

std::string Weapon::getType() const {
	return this->_type;
}

void Weapon::setType(const std::string& type) {
	this->_type = type;
}