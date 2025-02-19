/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 08:48:53 by gozon             #+#    #+#             */
/*   Updated: 2025/02/19 09:35:09 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): name("default"), garbageSize(10) {

        for (int i = 0; i < 4; i++) {
            this->inventory[i] = NULL;
        }

        this->garbage = new AMateria*[garbageSize];
        for (int i = 0; i < this->garbageSize; i++) {
            this->garbage[i] = NULL;
        }

        std::cout << "Character default constructor called." << std::endl;

}

Character::Character(const std::string& name): name(name), garbageSize(10) {

    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }

    this->garbage = new AMateria*[garbageSize];
    for (int i = 0; i < this->garbageSize; i++) {
        this->garbage[i] = NULL;
    }

    std::cout << "Character " << name << " created" << std::endl;

}

Character::Character(const Character& c): name(name), garbageSize(10) {

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

    std::cout << "Charcter " << c.name << " copied by construction";
    std::cout<< std::endl;

}

Character::~Character() {

    std::cout << "Character " << this->name << " deleted" << std::endl;

    for (int i = 0; i < 4; i++) {
        delete this->inventory[i];
    }

    for (int i = 0; i < this->garbageSize; i++) {
        delete this->garbage[i];
    }
    delete[] garbage;

}

Character& Character::operator=(const Character& c) {

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

    std::cout << "Charcter " << c.name << " copied by assignment";
    std::cout<< std::endl;

}

const std::string& Character::getName() const {

    return (this->name);

}

void equip(AMateria* m) {



}
