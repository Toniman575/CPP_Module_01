/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 15:02:07 by asadik            #+#    #+#             */
/*   Updated: 2026/10/12 15:39:56 by asadik           ###   ########.fr       */
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
