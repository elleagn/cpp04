/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:56:32 by gozon             #+#    #+#             */
/*   Updated: 2025/03/03 09:56:21 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia/Ice.hpp"
#include "Materia/Cure.hpp"
#include "Character/Character.hpp"
#include "MateriaSource/MateriaSource.hpp"

void testMaterias() {

    std::cout << "ICE:\n" << std::endl;
    {
        AMateria* ice = new Ice;
        AMateria* clone;

        std::cout << "Type = " << ice->getType() << std::endl;
        clone = ice->clone();

        delete ice;
        delete clone;

    }
    std::cout << std::endl;
    std::cout << "ICE:\n" << std::endl;
    {
        AMateria* cure = new Cure;
        AMateria* clone;

        std::cout << "Type = " << cure->getType() << std::endl;
        clone = cure->clone();

        delete cure;
        delete clone;

    }

}

// int main(void) {

//     std::cout << "MATERIAS:\n" << std::endl;
//     testMaterias();

//     std::cout << "CHARACTERS:\n" << std::endl;

// }

int main()
{
IMateriaSource* src = new MateriaSource();
AMateria* ice = new Ice();
src->learnMateria(ice);
AMateria* cure = new Cure();
src->learnMateria(cure);
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
delete ice;
delete cure;
return 0;
}
