/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:05:33 by gozon             #+#    #+#             */
/*   Updated: 2025/02/08 19:20:26 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

    std::cout << "WrongAnimal default constructor called" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : type(copy.type) {

    std::cout << "WrongAnimal copy constructor called" << std::endl;

}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {

    this->type = copy.type;
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    return (*this);

}

WrongAnimal::~WrongAnimal() {

    std::cout << "WrongAnimal destroyed" << std::endl;

}

const std::string& WrongAnimal::getType() const {

    return (this->type);

}

void WrongAnimal::makeSound() const {

    std::cout << "*unidentified WrongAnimal noises*" << std::endl;

}
