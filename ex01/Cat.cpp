/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:54:18 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/29 19:55:06 by hsorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Object Created" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain;
    if (this->_brain == nullptr)
        exit(1);
}

Cat::Cat(Cat const &copy)
{
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
    if (this->_brain == nullptr)
        exit(1);
    std::cout << "Cat Object Copied" << std::endl;
}
   
Cat::~Cat(void)
{
    delete this->_brain;
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
    delete this->_brain;
    this->_brain = new Brain(*src._brain);
    if (this->_brain == nullptr)
        exit(1);
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "Miaw!" << std::endl;
}

void    Cat::display_ideas(void)const
{
    this->_brain->display_ideas();
}

void    Cat::set_ideas(unsigned int i, std::string idea)
{
    if (i > 99)
    {
        std::cout << "Cat doesn't have enough room" << std::endl;
        return ;
    }
    this->_brain->set_ideas(i, idea);
}