/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:01:55 by asadik            #+#    #+#             */
/*   Updated: 2026/10/12 16:07:25 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	randomChump("Carl");
	Zombie *zombie = newZombie("Mandy");
	zombie->announce();
	delete zombie;
}
