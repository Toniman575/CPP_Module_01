/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:59:51 by asadik            #+#    #+#             */
/*   Updated: 2026/10/18 12:42:03 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : Name(name) {}

void HumanB::setWeapon(class Weapon *weapon) { Weapon = weapon; }

void HumanB::attack() {
	std::cout << Name << " attacks with their " << Weapon->getType() << std::endl;
}