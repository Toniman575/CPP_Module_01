/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anton <anton@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:16:24 by anton             #+#    #+#             */
/*   Updated: 2026/10/13 16:50:15 by anton            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

void Zombie::setName(std::string name) { Name = name; }

void Zombie::announce(void) {
	std::cout << Name << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie() { std::cout << Name << " is dying their final death.\n"; }
