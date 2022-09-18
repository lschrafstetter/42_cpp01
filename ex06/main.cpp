/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:19:25 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 16:37:32 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: [./harlFilter <loglevel>]" << std::endl;
    exit(EXIT_FAILURE);
  }
  Harl harl = Harl();
	harl.filter(argv[1]);
	return (EXIT_SUCCESS);
}