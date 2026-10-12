/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:02:04 by asadik            #+#    #+#             */
/*   Updated: 2026/10/12 16:01:20 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) { Name = name; }

void Zombie::announce(void) { std::cout << Name << " : BraiiiiiiinnnzzzZ...\n"; }

Zombie::~Zombie() { std::cout << Name << " is dying their final death.\n"; }
