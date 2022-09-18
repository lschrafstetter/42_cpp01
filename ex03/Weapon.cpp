/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:16:55 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 12:14:22 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon() {}

std::string Weapon::getType() { return this->type; }

void Weapon::setType(std::string type) { this->type = type; }