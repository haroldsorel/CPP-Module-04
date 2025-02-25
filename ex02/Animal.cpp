/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:54:02 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 23:54:03 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

Animal::Animal(void) : _type("Random Animal")
{
    std::cout << "Animal Object Created" << std::endl;
}

Animal::Animal(Animal const &copy) : _type(copy._type)
{
    std::cout << "Animal Object Copied" << std::endl;
}
   
Animal::~Animal(void)
{
    std::cout << "Animal Object Destroyed" << std::endl;
}
       
Animal &Animal::operator=(Animal const &src)
{
    if (this == &src)
    {
        std::cout << this->_type << " is already " << src._type << std::endl;
        return (*this);
    }
    this->_type = src._type;
    return (*this);
}
       
std::string const &Animal::getType(void)const
{
    return (this->_type);
}
       
void    Animal::setType(std::string const &type)
{
    this->_type = type;
}

void    Animal::makeSound(void)const
{
    std::cout << "[Random Animal Gibberish]" << std::endl;
}