/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:53:25 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 09:31:50 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
    
    std::cout << "Cure constructor called" << std::endl;
    
}

Cure::Cure(const Cure& CureMateria) : AMateria(CureMateria) {
    
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {

    std::cout << "Cure destructor called" << std::endl;
    
}

Cure& Cure::operator=(const Cure& CureMateria) {

    this->operator=(CureMateria);

    return (*this);
    
}

Cure* Cure::clone() const {
    
    return (new Cure);

}

void Cure::use(ICharacter& target) {
    
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;

}
