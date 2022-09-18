/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:12:08 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 18:47:00 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  {
    Zombie nameless;
    nameless.announce();
		nameless.set_name("Alf");
		nameless.announce();
  }
	Zombie *bob = newZombie("Bob");
	randomChump("Charlie");
	delete bob;
  return (0);
}