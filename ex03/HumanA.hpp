/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:17:27 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 12:17:20 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();

  std::string getName();

  void setName(std::string name);
  void setWeapon(Weapon &weapon);

  void attack();

 private:
  std::string name;
  Weapon *weapon;
};

#endif