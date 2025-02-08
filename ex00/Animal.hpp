/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:56:41 by gozon             #+#    #+#             */
/*   Updated: 2025/02/08 19:04:07 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {

	private:
		std::string type;

	public:

		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		~Animal();

		const std::string& getType() const;

		void makeSound() const;
};

#endif
