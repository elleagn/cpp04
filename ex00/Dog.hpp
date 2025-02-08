/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:24:15 by gozon             #+#    #+#             */
/*   Updated: 2025/02/08 19:44:07 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {

    public:

        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        ~Dog();

        void makeSound() const override;
};

#endif
