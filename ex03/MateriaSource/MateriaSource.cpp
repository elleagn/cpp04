/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:24:04 by gozon             #+#    #+#             */
/*   Updated: 2025/03/03 09:53:01 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "../Materia/AMateria.hpp"

MateriaSource::MateriaSource() {

    for (int i = 0; i < 4; i++) {
        this->materias[i] = NULL;
    }

}

MateriaSource::MateriaSource(const MateriaSource& ms) {

    for (int i = 0; i < 4; i++) {
        if (!ms.materias[i]) {
            this->materias[i] = NULL;
        }
        else {
            this->materias[i] = ms.materias[i]->clone();
        }
    }

}

MateriaSource::~MateriaSource() {

    for (int i = 0; i < 4; i++) {
        if (this->materias[i]) {
            delete this->materias[i];
        }
    }

}

MateriaSource& MateriaSource::operator=(const MateriaSource& ms) {

    for (int i = 0; i < 4; i++) {
        if (this->materias[i]) {
            delete this->materias[i];
        }
    }

    for (int i = 0; i < 4; i++) {
        if (!ms.materias[i]) {
            this->materias[i] = NULL;
        }
        else {
            this->materias[i] = ms.materias[i]->clone();
        }
    }

    return (*this);

}

void MateriaSource::learnMateria(AMateria* m) {

    if (m) {
        for (int i = 0; i < 4; i++) {
            if (!this->materias[i]) {
                this->materias[i] = m->clone();
                std::cout << "Materia learned by MateriaSource." << std::endl;
                return ;
            }
        }
        std::cout << "MateriaSource could not learn materia, too many materias";
        std::cout << std::endl;
    }

}

AMateria* MateriaSource::createMateria(const std::string& type) {

    for (int i = 0; i < 4; i++) {
        if (this->materias[i] && this->materias[i]->getType() == type) {
            std::cout << "Materia of type " << type << " created" << std::endl;
            return (this->materias[i]->clone());
        }
    }

    std::cout << "Could not find materia of type " << type << std::endl;

    return (NULL);

}
