/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:14:40 by gozon             #+#    #+#             */
/*   Updated: 2025/02/19 10:23:47 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>
#include <iostream>

class AMateria;

class MateriaSource: public IMateriaSource {

    private:
        AMateria* materias[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& ms);
        virtual ~MateriaSource();

        MateriaSource& operator=(const MateriaSource& ms);

        void learnMateria(AMateria* m);
        AMateria* createMateria(const std::string& type);

};

#endif
