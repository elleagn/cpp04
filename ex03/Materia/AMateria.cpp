/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:29:50 by gozon             #+#    #+#             */
/*   Updated: 2025/03/04 10:10:44 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "../Character/ICharacter.hpp"

AMateria::AMateria() {

    std::cout << "AMateria created\n";

}

AMateria::AMateria(const std::string& type) : type(type) {

    std::cout << "AMateria of type" << type << " created\n";

}

AMateria::AMateria(const AMateria& materia) : type(materia.type) {

    std::cout << "AMateria copied\n";

}

AMateria& AMateria::operator=(const AMateria& materia) {

   (void)materia;
   return (*this);

}

AMateria::~AMateria() {

    std::cout << "AMateria destroyed\n";

}

const std::string& AMateria::getType() const {

    return (this->type);

}

void AMateria::use(ICharacter& target) {

    std::cout << "* " << target.getName() << " uses materia *" << std::endl;
}
