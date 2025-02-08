/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:35:02 by gozon             #+#    #+#             */
/*   Updated: 2025/02/08 19:44:17 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;

}

Dog::Dog(const Dog& copy) {

    this->Animal::operator=(copy);
    std::cout << "Dog copy constructor called" << std::endl;

}

Dog& Dog::operator=(const Dog& copy) {

    this->type = copy.type;
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);

}

Dog::~Dog() {

    std::cout << "Dog destroyed" << std::endl;

}

void Dog::makeSound() const {

    std::cout << "*woof*" << std::endl;

}
