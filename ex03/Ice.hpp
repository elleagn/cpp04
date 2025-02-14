/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:52:08 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 08:59:30 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
    
    public:
        
        Ice();
        Ice(const Ice& iceMateria);

        virtual Ice* clone() const;

};

#endif
