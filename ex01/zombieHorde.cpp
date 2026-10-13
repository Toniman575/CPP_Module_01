/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anton <anton@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:17:01 by anton             #+#    #+#             */
/*   Updated: 2026/10/13 17:42:07 by anton            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	if (N <= 0)
		return NULL;
	Zombie *zombie_horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombie_horde[i].setName(name);
	}
	return zombie_horde;
}