/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:05:33 by gozon             #+#    #+#             */
/*   Updated: 2025/02/10 12:23:48 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {

    std::cout << "Animal default constructor called" << std::endl;

}

Animal::Animal(const Animal& copy) : type(copy.type) {

    std::cout << "Animal copy constructor called" << std::endl;

}

Animal& Animal::operator=(const Animal& copy) {

    this->type = copy.type;
    std::cout << "Animal copy assignment operator called" << std::endl;
    return (*this);

}

Animal::~Animal() {

    std::cout << "Animal destroyed" << std::endl;

}

const std::string& Animal::getType() const {

    return (this->type);

}
