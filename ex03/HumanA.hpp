/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:46:16 by asadik            #+#    #+#             */
/*   Updated: 2026/10/17 16:24:27 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"
#include <string>

class HumanA {
  private:
	std::string Name;
	Weapon weapon;

  public:
	HumanA(std::string name, Weapon weapon);
};

#endif