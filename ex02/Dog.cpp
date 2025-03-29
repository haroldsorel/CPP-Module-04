/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:54:37 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/29 19:55:03 by hsorel           ###   ########.fr       */
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
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
    if (this->_brain == nullptr)
        exit(1);
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
    delete this->_brain;
    this->_brain = new Brain(*src._brain);
    if (this->_brain == nullptr)
        exit(1);
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
