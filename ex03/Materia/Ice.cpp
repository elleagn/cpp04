/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:53:25 by gozon             #+#    #+#             */
/*   Updated: 2025/03/03 11:13:52 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "../Character/ICharacter.hpp"

Ice::Ice() : AMateria("ice") {

}

Ice::Ice(const Ice& iceMateria) : AMateria(iceMateria) {

}

Ice::~Ice() {

}

Ice& Ice::operator=(const Ice& iceMateria) {

    this->AMateria::operator=(iceMateria);

    return (*this);

}

Ice* Ice::clone() const {

    std::cout << "Ice materia cloned" << std::endl;

    return (new Ice(*this));

}

void Ice::use(ICharacter& target) {

    std::cout << "* shoots an ice bolt at " << target.getName() << " *";
    std::cout << std::endl;

}
