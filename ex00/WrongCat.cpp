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
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "WrongCat Object Created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
    this->_type = copy._type;
    std::cout << "WrongCat Object Copied" << std::endl;
}
   
WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Object Destroyed" << std::endl;
}
       
WrongCat &WrongCat::operator=(WrongCat const &src)
{
    if (this == &src)
    {
        std::cout << this->_type << " is already " << src._type << std::endl;
        return (*this);
    }
    this->_type = src._type;
    return (*this);
}

void    WrongCat::makeSound(void)const
{
    std::cout << "Miaw!" << std::endl;
}
