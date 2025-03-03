/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:29:50 by gozon             #+#    #+#             */
/*   Updated: 2025/03/03 09:33:48 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "../Character/ICharacter.hpp"

AMateria::AMateria() {

    std::cout << "AMateria default constructor called" << std::endl;

}

AMateria::AMateria(const std::string& type) : type(type) {

    std::cout << "AMateria of type " << type << " created" << std::endl;

}

AMateria::AMateria(const AMateria& materia) : type(materia.type) {

    std::cout << "AMateria copy constructor called" << std::endl;

}

AMateria& AMateria::operator=(const AMateria& materia) {

    std::cout << "AMateria copy assignment operator called" << std::endl;
   (void)materia;
   return (*this);

}

AMateria::~AMateria() {

    std::cout << "AMateria destructor called" << std::endl;

}

const std::string& AMateria::getType() const {

    return (this->type);

}

void AMateria::use(ICharacter& target) {

    std::cout << "* " << target.getName() << " uses materia *" << std::endl;
}
