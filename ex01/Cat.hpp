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
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public :
        //constructors
        Cat(void);
        Cat(Cat const &copy);

        //destructors
        ~Cat(void);

        //operator overload
        Cat &operator=(Cat const &src);

        //getters
        std::string const &get_type(void)const;

        //setters
        void    set_type(std::string const &type);

        //methods
        void    makeSound(void)const;
        void    display_ideas()const;
        void    set_ideas(unsigned int i, std::string idea);
};


