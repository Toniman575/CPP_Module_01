/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anton <anton@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:02:07 by asadik            #+#    #+#             */
/*   Updated: 2026/10/13 16:44:31 by anton            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
  private:
	std::string Name;

  public:
	Zombie(std::string name);
	void announce(void);
	~Zombie(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
