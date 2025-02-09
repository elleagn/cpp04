/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:35:02 by gozon             #+#    #+#             */
/*   Updated: 2025/02/09 18:06:08 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();

}

Cat::Cat(const Cat& copy) : Animal(copy) {

    this->brain = new Brain(*copy.brain);
    std::cout << "Cat copy constructor called" << std::endl;

}

Cat& Cat::operator=(const Cat& copy) {

    this->Animal::operator=(copy);
    *this->brain = *copy.brain;
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);

}

Cat::~Cat() {

    delete this->brain;
    std::cout << "Cat destroyed" << std::endl;

}

void Cat::makeSound() const {

    std::cout << "*meow*" << std::endl;

}

void Cat::addIdea(const std::string& idea) {

    this->brain->addIdea(idea);

}

void Cat::think() const {

    this->brain->printIdeas();

}
