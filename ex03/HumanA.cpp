/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:59:53 by asadik            #+#    #+#             */
/*   Updated: 2026/10/18 14:08:33 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, class Weapon &weapon)
	: Name(name), Weapon(weapon) {}

void HumanA::setWeapon(class Weapon &weapon) { Weapon = weapon; }

void HumanA::attack() {
	std::cout << Name << " attacks with their " << Weapon.getType()
			  << std::endl;
}
