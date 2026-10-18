/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:46:14 by asadik            #+#    #+#             */
/*   Updated: 2026/10/18 12:41:24 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"
#include <string>

class HumanB {
	private:
	std::string Name;
	Weapon *Weapon;

  public:
	HumanB(std::string name);
	void setWeapon(class Weapon *weapon);
	void attack();
};

#endif