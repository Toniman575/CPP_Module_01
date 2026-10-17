/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:21:57 by asadik            #+#    #+#             */
/*   Updated: 2026/10/17 16:25:09 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon {
  private:
	std::string Type;

  public:
	Weapon(std::string);
	std::string const &getType() const;
	void setType(std::string type);
};

#endif