/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:35:02 by gozon             #+#    #+#             */
/*   Updated: 2025/02/08 19:51:26 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {

    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;

}

WrongCat::WrongCat(const WrongCat& copy) {

    this->WrongAnimal::operator=(copy);
    std::cout << "WrongCat copy constructor called" << std::endl;

}

WrongCat& WrongCat::operator=(const WrongCat& copy) {

    this->type = copy.type;
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return (*this);

}

WrongCat::~WrongCat() {

    std::cout << "WrongCat destroyed" << std::endl;

}

void WrongCat::makeSound() const {

    std::cout << "*meow*" << std::endl;

}
