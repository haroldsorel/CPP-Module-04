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
    std::cout << "Dog Object Created" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain;
    if (this->_brain == nullptr)
        exit(1);
}

Dog::Dog(Dog const &copy)
{
    *this = copy;
    std::cout << "Dog Object Copied" << std::endl;
}
   
Dog::~Dog(void)
{
    delete this->_brain;
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
    this->_brain = new Brain;
    if (this->_brain == nullptr)
        exit(1);
    *(this->_brain) = *(src._brain);
    return (*this);
}

void    Dog::makeSound(void)const
{
    std::cout << "Wouf!" << std::endl;
}

void    Dog::display_ideas(void)const
{
    this->_brain->display_ideas();
}

void    Dog::set_ideas(unsigned int i, std::string idea)
{
    if (i > 99)
    {
        std::cout << "Dog doesn't have enough room" << std::endl;
        return ;
    }
    this->_brain->set_ideas(i, idea);
}
