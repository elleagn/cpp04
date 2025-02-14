/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:52:08 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 09:28:19 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include <iostream>

class ICharacter;

class Ice : public AMateria {
    
    public:
        
        Ice();
        Ice(const Ice& iceMateria);
        virtual ~Ice();
        
        Ice& operator=(const Ice& iceMateria);

        virtual Ice* clone() const;
        virtual void use(ICharacter& target);

};

#endif
