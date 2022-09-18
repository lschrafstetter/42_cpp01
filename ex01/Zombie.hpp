/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:12:22 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 10:54:10 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
 public:
  Zombie();
  ~Zombie();

  std::string get_name() const;

  void set_name(std::string name);
	
  void announce();
	

 private:
  std::string name;
};

#endif