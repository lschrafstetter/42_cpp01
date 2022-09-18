/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:16:37 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 12:23:13 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  std::cout << std::endl << "Custom test: attack with no weapon" << std::endl;
  HumanB alf = HumanB("Alf");
  alf.attack();
	Weapon grenade_launcher = Weapon("Grenade Launcher");
	alf.setWeapon(grenade_launcher);
	alf.attack();
  return 0;
}