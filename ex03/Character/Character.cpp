/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 08:48:53 by gozon             #+#    #+#             */
/*   Updated: 2025/03/03 11:40:21 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "../Materia/AMateria.hpp"

Character::Character(): name("default"), garbageSize(10) {

        for (int i = 0; i < 4; i++) {
            this->inventory[i] = NULL;
        }

        this->garbage = new AMateria*[garbageSize];
        for (int i = 0; i < this->garbageSize; i++) {
            this->garbage[i] = NULL;
        }

}

Character::Character(const std::string& name): name(name), garbageSize(10) {

    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }

    this->garbage = new AMateria*[garbageSize];
    for (int i = 0; i < this->garbageSize; i++) {
        this->garbage[i] = NULL;
    }

}

Character::Character(const Character& c): name(c.name), garbageSize(10) {

    for (int i = 0; i < 4; i++) {
        if (!c.inventory[i]) {
            this->inventory[i] = NULL;
        }
        else {
            this->inventory[i] = c.inventory[i]->clone();
        }
    }

    this->garbage = new AMateria*[garbageSize];
    for (int i = 0; i < this->garbageSize; i++) {
        this->garbage[i] = NULL;
    }

}

Character::~Character() {

    for (int i = 0; i < 4; i++) {
        delete this->inventory[i];
    }

    for (int i = 0; i < this->garbageSize; i++) {
        delete this->garbage[i];
    }
    delete[] garbage;

}

Character& Character::operator=(const Character& c) {
    
    if (this != &c) {
        for (int i = 0; i < 4; i++) {
            delete this->inventory[i];
        }

        for (int i = 0; i < this->garbageSize; i++) {
            delete this->garbage[i];
            this->garbage[i] = NULL;
        }

        for (int i = 0; i < 4; i++) {
            if (!c.inventory[i]) {
                this->inventory[i] = NULL;
            }
            else {
                this->inventory[i] = c.inventory[i]->clone();
            }
        }
        this->name = c.name;
    }

    return (*this);

}

const std::string& Character::getName() const {

    return (this->name);

}

void Character::equip(AMateria* m) {

    for (int i = 0; i < 4; i++) {

        if (!this->inventory[i]) {
            this->inventory[i] = m;
            std::cout << "AMateria equipped" << std::endl;
            return ;
        }
    }

    std::cout << "Inventory full, could not equip Materia" << std::endl;

}

void Character::unequip(int idx) {
    if (idx > 4) {
        std::cout << "Unequip failed, index out of range." << std::endl;
    }
    else {
        std::cout << "Materia unequipped" << std::endl;

        for (int i = 0; i < garbageSize; i++) {
            if (!this->garbage[i]) {
                this->garbage[i] = this->inventory[idx];
                this->inventory[idx] = NULL;
                return ;
            }
        }

        AMateria** newGarbage = new AMateria*[garbageSize + 10];
        for (int i = 0; i < this->garbageSize; i++) {
            newGarbage[i] = this->garbage[i];
        }
        newGarbage[garbageSize] = this->inventory[idx];
        delete[] this->garbage;
        this->garbage = newGarbage;
        this->garbageSize += 10;
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {

    if (idx < 4 && this->inventory[idx]) {
        std::cout << this->name << ": ";
        this->inventory[idx]->use(target);
    }
    else
    {
        std::cout << "Could not use Materia, invalid index (out of range or ";
        std::cout << "empty slot)" << std::endl;
    }

}
