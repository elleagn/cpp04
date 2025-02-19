/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:56:32 by gozon             #+#    #+#             */
/*   Updated: 2025/02/19 19:24:21 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia/Ice.hpp"
#include "Materia/Cure.hpp"
#include "Character/Character.hpp"
#include "MateriaSource/MateriaSource.hpp"

void testMaterias() {

    {
        AMateria* ice = new Ice;
        AMateria* clone;

        std::cout << "Type = " << ice->getType() << std::endl;
        clone = ice->clone();

        delete ice;
        delete clone;

    }
    {
        AMateria* cure = new Cure;
        AMateria* clone;

        std::cout << "Type = " << cure->getType() << std::endl;
        clone = cure->clone();

        delete cure;
        delete clone;

    }

}

int main(void) {

    std::cout << "MATERIAS:\n" << std::endl;
    testMaterias();

}
