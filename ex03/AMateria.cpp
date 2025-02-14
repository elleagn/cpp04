/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:29:50 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 09:04:37 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
    
    std::cout << "AMateria default constructor called" << std::endl;

}

AMateria::AMateria(const std::string& type) : type(type) {
    
    std::cout << "AMateria copy constructor called" << std::endl;

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
