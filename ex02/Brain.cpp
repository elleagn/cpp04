/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:51:07 by gozon             #+#    #+#             */
/*   Updated: 2025/02/10 11:55:29 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : nbIdeas(0) {

    std::cout << "Brain default constructor called" << std::endl;

}

Brain::Brain(const Brain& copy) : nbIdeas(copy.nbIdeas) {

    for (int i = 0; i < 100; i++) {
        this->ideas[i] = copy.ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;

}

Brain& Brain::operator=(const Brain& copy) {

    this->nbIdeas = copy.nbIdeas;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = copy.ideas[i];
    }
    std::cout << "Brain copy assignment operator called" << std::endl;
    return (*this);

}

Brain::~Brain() {

    std::cout << "Brain destructor called" << std::endl;

}

void Brain::addIdea(const std::string& idea) {

    if (this->nbIdeas >= 100) {
        std::cout << "that's too many ideas, brain is full." << std::endl;
    }
    else {
        this->ideas[this->nbIdeas] = idea;
        this->nbIdeas++;
        std::cout << "Idea added" << std::endl;
    }

}

void Brain::printIdeas(void) const {

    for (int i = 0; i < this->nbIdeas; i++) {
        std::cout << this->ideas[i] << std::endl;
    }

}
