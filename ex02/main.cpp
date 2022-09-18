/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:15:49 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/18 11:47:48 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << std::left << std::setw(33) << "Address of str: " << &str 
						<< std::endl;
	std::cout << std::left << std::setw(33) << "Address held by stringPTR: " 
						<< stringPTR << std::endl;
	std::cout << std::left << std::setw(33) << "Address held by stringREF: " 
						<< &stringREF << std::endl;
	std::cout << std::left << std::setw(33) << "Value of str: " << str 
						<< std::endl;
	std::cout << std::left << std::setw(33) << "Value pointed to by stringPTR: " 
						<< *stringPTR << std::endl;
	std::cout << std::left << std::setw(33) << "Value pointed to by stringREF: " 
						<< stringREF << std::endl;
}