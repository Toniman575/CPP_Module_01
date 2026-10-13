/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anton <anton@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:16:21 by anton             #+#    #+#             */
/*   Updated: 2026/10/13 17:43:06 by anton            ###   ########.fr       */
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
