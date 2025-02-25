/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:54:11 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 23:54:13 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>

class Animal
{
    protected :
        std::string _type;
    public :
        //constructors
        Animal(void);
        Animal(Animal const &copy);

        //destructors
        virtual ~Animal(void);

        //operator overload
        Animal &operator=(Animal const &src);

        //getters
        std::string const &getType(void)const;

        //setters
        void    setType(std::string const &type);

        //methods
        virtual void    makeSound(void)const = 0;
};