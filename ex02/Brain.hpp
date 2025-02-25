/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:57:18 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/08 22:57:19 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>

class Brain 
{
    private:
        std::string _ideas[100];
    public:
        //constructors
        Brain();
        Brain(const Brain &copy);

        //destructors
        ~Brain();

        //overloaded operators
        Brain &operator=(const Brain &src);

        void    display_ideas()const;
        void    set_ideas(unsigned int i, std::string idea);
};