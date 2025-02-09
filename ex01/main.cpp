/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:45:48 by gozon             #+#    #+#             */
/*   Updated: 2025/02/09 18:01:57 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    Animal* animals[10];

    std::cout << "ARRAY CREATION (right constructors + order)\n" << std::endl;
    for (int i = 0; i < 5; i++) {
        animals[i] = new Cat();
        animals[i + 5] = new Dog();
    }


    return 0;
}
