/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:29:50 by gozon             #+#    #+#             */
/*   Updated: 2025/03/03 10:39:35 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "../Character/ICharacter.hpp"

AMateria::AMateria() {

}

AMateria::AMateria(const std::string& type) : type(type) {

}

AMateria::AMateria(const AMateria& materia) : type(materia.type) {

}

AMateria& AMateria::operator=(const AMateria& materia) {

   (void)materia;
   return (*this);

}

AMateria::~AMateria() {

}

const std::string& AMateria::getType() const {

    return (this->type);

}

void AMateria::use(ICharacter& target) {

    std::cout << "* " << target.getName() << " uses materia *" << std::endl;
}
