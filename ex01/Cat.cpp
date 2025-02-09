/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:35:02 by gozon             #+#    #+#             */
/*   Updated: 2025/02/08 19:40:28 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;

}

Cat::Cat(const Cat& copy) {

    this->Animal::operator=(copy);
    std::cout << "Cat copy constructor called" << std::endl;

}

Cat& Cat::operator=(const Cat& copy) {

    this->type = copy.type;
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);

}

Cat::~Cat() {

    std::cout << "Cat destroyed" << std::endl;

}

void Cat::makeSound() const {

    std::cout << "*meow*" << std::endl;

}
