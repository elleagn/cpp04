/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:45:48 by gozon             #+#    #+#             */
/*   Updated: 2025/03/04 09:51:54 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

    Animal* animals[10];

    std::cout << "ARRAY CREATION (right constructors + order)\n" << std::endl;
    for (int i = 0; i < 5; i++) {
        animals[i] = new Cat;
        animals[i + 5] = new Dog;
    }

    std::cout << "\nARRAY DELETION (right destructor)\n" << std::endl;
    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }

    std::cout << "\nCOPIES (check deep copies)\n" << std::endl;

    Cat* original = new Cat();
    Cat* copyAssign = new Cat();

    original->addIdea("I'm the original");
    Cat* copyConst = new Cat(*original);
    copyConst->addIdea("I'm the copy by construction");
    *copyAssign = *copyConst; 
    copyAssign->addIdea("I'm the copy by assignment");

    std::cout << std::endl;
    original->think();
    delete original;
    std::cout << std::endl;
    copyConst->think();
    delete copyConst;
    std::cout << std::endl;
    copyAssign->think();
    delete copyAssign;
    
    return 0;
}
