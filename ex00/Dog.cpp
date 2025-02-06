/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:54:37 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 23:54:38 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "Dog Object Created" << std::endl;
}

Dog::Dog(Dog const &copy)
{
    this->_type = copy._type;
    std::cout << "Dog Object Copied" << std::endl;
}
   
Dog::~Dog(void)
{
    std::cout << "Dog Object Destroyed" << std::endl;
}
       
Dog &Dog::operator=(Dog const &src)
{
    if (this == &src)
    {
        std::cout << this->_type << " is already " << src._type << std::endl;
        return (*this);
    }
    this->_type = src._type;
    return (*this);
}

void    Dog::makeSound(void)const
{
    std::cout << "Wouf!" << std::endl;
}

