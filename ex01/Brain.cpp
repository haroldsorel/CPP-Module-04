/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:57:12 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/08 22:57:13 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"

Brain::Brain()
{
    //for (int i = 0; i < 100; i++)
    //    (this->_ideas)[i] = nullptr;
    std::cout << "Brain Object Created" << std::endl; 
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "A Copy Of A Brain Created" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    if (this == &src)
        return (*this);
    for (int i = 0; i < 100; i++)
        (this->_ideas)[i] = (src._ideas)[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Object Destroyed" << std::endl;
}

void    Brain::display_ideas()const
{
    for (int i = 0; i < 100; i++)
    {
        if ((this->_ideas)[i] != "")
            std::cout << (i) << " : " << (this->_ideas)[i] << std::endl;
    }
}

void    Brain::set_ideas(unsigned int i, std::string idea)
{
    if (i > 99)
        return ;
    this->_ideas[i] = idea;
}
