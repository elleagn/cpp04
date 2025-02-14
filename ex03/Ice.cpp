/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 10:53:25 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 09:04:00 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    
    std::cout << "Ice constructor called" << std::endl;
    
}

Ice::Ice(const Ice& iceMateria) : AMateria(iceMateria) {
    
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice* Ice::clone() const {
    
    return (new Ice);

}
