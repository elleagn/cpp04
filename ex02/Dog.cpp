/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:35:02 by gozon             #+#    #+#             */
/*   Updated: 2025/02/09 18:05:35 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();

}

Dog::Dog(const Dog& copy) : Animal(copy) {

    this->brain = new Brain();
    std::cout << "Dog copy constructor called" << std::endl;

}

Dog& Dog::operator=(const Dog& copy) {

    this->Animal::operator=(copy);
    this->brain = copy.brain;
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);

}

Dog::~Dog() {

    delete this->brain;
    std::cout << "Dog destroyed" << std::endl;

}

void Dog::makeSound() const {

    std::cout << "*woof*" << std::endl;

}

void Dog::addIdea(const std::string& idea) {

    this->brain->addIdea(idea);

}

void Dog::think() const {

    this->brain->printIdeas();

}
