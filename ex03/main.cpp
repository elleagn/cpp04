/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:56:32 by gozon             #+#    #+#             */
/*   Updated: 2025/03/04 10:27:02 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia/Ice.hpp"
#include "Materia/Cure.hpp"
#include "Character/Character.hpp"
#include "MateriaSource/MateriaSource.hpp"


int main(void) {

    IMateriaSource* msource = new MateriaSource();
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();
    Character* bob = new Character("bob");

    std::cout << "\nMateria source : learnMateria + create a materia of unexisting type\n\n"; 
    msource->learnMateria(ice);
    std::cout << std::endl;
    msource->createMateria("cure");

    std::cout << "\nMateria source: learn too many materias\n\n"; 
    msource->learnMateria(cure);
    msource->learnMateria(ice);
    msource->learnMateria(ice);
    std::cout << std::endl;
    msource->learnMateria(ice);

    std::cout << "\nCharacter: equip/unequip\n\n";
    bob->equip(msource->createMateria("ice"));
    std::cout << std::endl;
    bob->equip(msource->createMateria("ice"));
    std::cout << std::endl;
    bob->unequip(3);
    bob->unequip(0);

    std::cout << "\nCharacter: use materia\n\n";
    Character* me = new Character(*bob);
    std::cout << std::endl;
    bob->use(0, *me);
    std::cout << std::endl;
    bob->use(1, *me);
    std::cout << std::endl;
    bob->equip(msource->createMateria("cure"));
    std::cout << std::endl;
    bob->use(0, *me);

    std::cout << "\nCharacter: operator=\n\n";
    *me = *bob;
    std::cout << std::endl;
    me->use(1, *bob);

    std::cout << "\nCharacter: Deep copies\n\n";
    *bob = *me;
    delete me;
    me = new Character("me");
    std::cout << std::endl;
    bob->use(1, *me);
    std::cout << std::endl;
    
    delete me;
    delete ice;
    delete cure;
    delete msource;
    delete bob;

}

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     AMateria* ice = new Ice();
//     src->learnMateria(ice);
//     AMateria* cure = new Cure();
//     src->learnMateria(cure);
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     delete ice;
//     delete cure;
//     return 0;
// }
