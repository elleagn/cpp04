/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:24:04 by gozon             #+#    #+#             */
/*   Updated: 2025/02/19 10:46:57 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

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
