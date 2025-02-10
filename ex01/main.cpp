/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:45:48 by gozon             #+#    #+#             */
/*   Updated: 2025/02/10 11:51:45 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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

    Cat original;
    Cat copyConst(original);
    Cat copyAssign = original;

    original.addIdea("I'm the original");
    copyConst.addIdea("I'm the copy by construction");
    copyAssign.addIdea("I'm the copy by assignment");
    original.think();
    copyConst.think();
    copyAssign.think();
    
    return 0;
}
