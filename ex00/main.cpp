/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anton <anton@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:01:55 by asadik            #+#    #+#             */
/*   Updated: 2026/10/13 16:44:43 by anton            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	randomChump("Carl");
	Zombie *zombie = newZombie("Mandy");
	zombie->announce();
	delete zombie;
}
