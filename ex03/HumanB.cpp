/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:17:08 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 12:21:13 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
HumanB::~HumanB() {}

std::string HumanB::getName() { return this->name; }

void HumanB::setName(std::string name) { this->name = name; }
void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }

void HumanB::attack() {
	if (this->weapon) {
		std::cout << this->name << " attacks with their " << this->weapon->getType()
							<< "!" << std::endl;
	} else {
		std::cout << this->name << " attacks with their fists!" 
							<< std::endl;
	}
}