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
#include "../Character/ICharacter.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::Cure(const Cure& CureMateria) : AMateria(CureMateria) {

}

Cure::~Cure() {

}

Cure& Cure::operator=(const Cure& CureMateria) {

    this->AMateria::operator=(CureMateria);

    return (*this);

}

Cure* Cure::clone() const {

    std::cout << "Materia of type cure cloned" << std::endl;

    return (new Cure(*this));

}

void Cure::use(ICharacter& target) {

    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;

}
