/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:54:18 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 23:54:19 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat Object Created" << std::endl;
}

Cat::Cat(Cat const &copy)
{
    this->_type = copy._type;
    std::cout << "Cat Object Copied" << std::endl;
}
   
Cat::~Cat(void)
{
    std::cout << "Cat Object Destroyed" << std::endl;
}
       
Cat &Cat::operator=(Cat const &src)
{
    if (this == &src)
    {
        std::cout << this->_type << " is already " << src._type << std::endl;
        return (*this);
    }
    this->_type = src._type;
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "Miaw!" << std::endl;
}
