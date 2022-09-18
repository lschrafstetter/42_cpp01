/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:17:13 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 12:17:14 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string name);
  ~HumanB();

  std::string getName();

  void setName(std::string name);
  void setWeapon(Weapon &weapon);

  void attack();

 private:
  std::string name;
  Weapon *weapon;
};

#endif