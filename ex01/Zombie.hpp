/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anton <anton@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:16:27 by anton             #+#    #+#             */
/*   Updated: 2026/10/13 16:49:43 by anton            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
  private:
	std::string Name;

  public:
	Zombie();
	void announce(void);
	void setName(std::string name);
	~Zombie(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif