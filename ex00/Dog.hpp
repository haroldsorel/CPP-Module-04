/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:54:43 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 23:54:44 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public :
        //constructors
        Dog(void);
        Dog(std::string name);
        Dog(Dog const &copy);

        //destructors
        ~Dog(void);

        //operator overload
        Dog &operator=(Dog const &src);

        //getters
        std::string const &get_type(void)const;

        //setters
        void    set_type(std::string const &type);

        //methods
        void    makeSound(void)const;
};


