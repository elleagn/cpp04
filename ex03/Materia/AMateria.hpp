/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:53:22 by gozon             #+#    #+#             */
/*   Updated: 2025/02/14 09:14:03 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria {

    protected:

        std::string type;

    public:

        AMateria(std::string const & type);
        AMateria();
        AMateria(const AMateria& materia);
        AMateria& operator=(const AMateria& materia);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

};

#endif
