/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:53:25 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 09:31:50 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
    
    std::cout << "Ice constructor called" << std::endl;
    
}

Ice::Ice(const Ice& iceMateria) : AMateria(iceMateria) {
    
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {

    std::cout << "Ice destructor called" << std::endl;
    
}

Ice& Ice::operator=(const Ice& iceMateria) {

    this->operator=(iceMateria);

    return (*this);
    
}

Ice* Ice::clone() const {
    
    return (new Ice);

}

void Ice::use(ICharacter& target) {
    
    std::cout << "* shoots an ice bolt at " << target.getName() << " *";

}
