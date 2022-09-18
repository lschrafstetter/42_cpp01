/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:12:17 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 10:54:30 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}
Zombie::~Zombie() { std::cout << this->name << " died." << std::endl; }

std::string Zombie::get_name() const { return this->name; }

void Zombie::set_name(std::string name) { this->name = name; }


void Zombie::announce(void) {
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}