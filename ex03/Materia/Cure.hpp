/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:52:08 by gozon             #+#    #+#             */
/*   Updated: 2025/02/19 19:28:02 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include <iostream>

class ICharacter;

class Cure : public AMateria {

    public:

        Cure();
        Cure(const Cure& cureMateria);
        virtual ~Cure();

        Cure& operator=(const Cure& cureMateria);

        virtual Cure* clone() const;
        virtual void use(ICharacter& target);

};

#endif
