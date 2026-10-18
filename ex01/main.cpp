/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:16:21 by anton             #+#    #+#             */
/*   Updated: 2026/10/18 14:22:28 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *zombie_horde = zombieHorde(55, std::string("Horatio"));
	if (zombie_horde) {
		for (int i = 0; i < 20; i++) {
			zombie_horde[i].announce();
		}
		delete[] zombie_horde;
	}
}
