/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:17:03 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 12:16:41 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : name(name), weapon(&weapon) {}
HumanA::~HumanA() {}

std::string HumanA::getName() { return this->name; }

void HumanA::setName(std::string name) { this->name = name; }
void HumanA::setWeapon(Weapon &weapon) { this->weapon = &weapon; }

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType()
						<< "!" << std::endl;
}