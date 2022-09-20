/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:16:50 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/20 08:29:50 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
 public:
  Weapon(std::string type);
  ~Weapon();

  const std::string &getType() const;

  void setType(std::string type);

 private:
  std::string type;
};

#endif