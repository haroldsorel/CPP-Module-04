/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:54:23 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 23:54:25 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        //constructors
        WrongCat(void);
        WrongCat(WrongCat const &copy);

        //destructors
        ~WrongCat(void);

        //operator overload
        WrongCat &operator=(WrongCat const &src);

        //getters
        std::string const &get_type(void)const;

        //setters
        void    set_type(std::string const &type);

        //methods
        void    makeSound(void)const;
};


