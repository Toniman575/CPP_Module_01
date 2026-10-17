/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:46:14 by asadik            #+#    #+#             */
/*   Updated: 2026/10/17 16:24:38 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"
#include <string>

class HumanB {
	private:
	std::string Name;
	Weapon weapon;

  public:
	HumanB(std::string name, Weapon weapon);
};

#endif