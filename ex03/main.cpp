/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:52:04 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/06 14:27:51 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	Weapon weapon = Weapon("sword");
	HumanA alex("alex", weapon);
	alex.attack();
	weapon.setType("Japanese sword");
	alex.attack();

	weapon = Weapon("elder wand");
	HumanB bob("bob");
	bob.attack();
	bob.setWeapon(weapon);
	bob.attack();

	return (0);
}