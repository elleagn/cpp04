/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:56:41 by gozon             #+#    #+#             */
/*   Updated: 2025/02/08 19:50:51 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {

    protected:
        std::string type;

    public:

        WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& copy);
        ~WrongAnimal();

        const std::string& getType() const;

        void makeSound() const;
};

#endif
