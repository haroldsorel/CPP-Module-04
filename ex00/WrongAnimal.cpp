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
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Random Animal")
{
    std::cout << "WrongAnimal Object Created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) : _type(copy._type)
{
    std::cout << "WrongAnimal Object Copied" << std::endl;
}
   
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Object Destroyed" << std::endl;
}
       
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    if (this == &src)
    {
        std::cout << this->_type << " is already " << src._type << std::endl;
        return (*this);
    }
    this->_type = src._type;
    return (*this);
}
       
std::string const &WrongAnimal::getType(void)const
{
    return (this->_type);
}
       
void    WrongAnimal::setType(std::string const &type)
{
    this->_type = type;
}

void    WrongAnimal::makeSound(void)const
{
    std::cout << "[Random Animal Gibberish]" << std::endl;
}
