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
    std::cout << "WrongCat Object Created" << std::endl;
    this->_type = "WrongCat";
    this->_brain = new Brain;
    if (this->_brain == nullptr)
        exit(1);
}

WrongCat::WrongCat(WrongCat const &copy)
{
    *this = copy;
    std::cout << "WrongCat Object Copied" << std::endl;
}
   
WrongCat::~WrongCat(void)
{
    delete this->_brain;
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
    this->_brain = src._brain;
    return (*this);
}

void    WrongCat::makeSound(void)const
{
    std::cout << "Miaw!" << std::endl;
}

void    WrongCat::display_ideas(void)const
{
    this->_brain->display_ideas();
}

void    WrongCat::set_ideas(unsigned int i, std::string idea)
{
    if (i > 99)
    {
        std::cout << "Cat doesn't have enough room" << std::endl;
        return ;
    }
    this->_brain->set_ideas(i, idea);
}
