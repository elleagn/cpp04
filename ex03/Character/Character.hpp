/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 08:31:29 by gozon             #+#    #+#             */
/*   Updated: 2025/02/19 19:18:15 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria;

class Character: public ICharacter {

    private:

        std::string name;
        AMateria* inventory[4];
        AMateria** garbage;
        int garbageSize;


    public:

        Character();
        Character(const std::string& name);
        Character(const Character& c);
        virtual ~Character();

        Character& operator=(const Character& c);

        virtual const std::string& getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

};

#endif
