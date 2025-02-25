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

class WrongAnimal
{
    protected :
        std::string _type;
    public :
        //constructors
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &copy);

        //destructors
        virtual ~WrongAnimal(void);

        //operator overload
        WrongAnimal &operator=(WrongAnimal const &src);

        //getters
        std::string const &getType(void)const;

        //setters
        void    setType(std::string const &type);

        //methods
        void    makeSound(void)const;
};