/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:15:32 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/29 20:41:26 by hsorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void    delete_animals(Animal const **animals, int j)
{
    int i;

    i = 0;
    while (i <= j)
    {
        delete animals[i];
        i++;
    }
}

int main()
{
    const Animal *animals[20];
    std::cout << std::endl;

    int i = 0;
    while (i < 10)
    {
        animals[i] = new Dog;
        i++;
    }
    std::cout << std::endl;
    while (i < 20)
    {
        animals[i] = new Cat;
        i++;
    }
    std::cout << std::endl;
    std::cout << "DESTRUCTION" << std::endl;
    delete_animals(animals, 19);

    std::cout << std::endl;
    std::cout << "CONSTRUCTION 2" << std::endl;
    Dog dog1;
    Dog dog2(dog1);
    Dog dog3;
    dog3 = dog1;
    
    dog1.set_ideas(3, "food");
    dog1.set_ideas(4, "sleep");
    dog1.set_ideas(5, "play");
    dog1.set_ideas(6, "food");
    dog2.set_ideas(99, "qwerty");
    dog3.set_ideas(27, "water");
    dog3.set_ideas(89, "water");
    dog3.set_ideas(64, "water");
    std::cout << std::endl;
    std::cout << "DOG1 IDEAS" << std::endl;
    dog1.display_ideas();
    std::cout << std::endl;
    std::cout << "DOG2 IDEAS" << std::endl;
    dog2.display_ideas();
    std::cout << std::endl;
    std::cout << "DOG3 IDEAS" << std::endl;
    dog3.display_ideas();
    std::cout << std::endl;
    std::cout << "DOG1=DOG3" << std::endl;
    dog1 = dog3;
    std::cout << std::endl;
    std::cout << "DOG1 IDEAS" << std::endl;
    dog1.display_ideas();
    std::cout << std::endl;
/*
    std::cout << std::endl;
    std::cout << "CONSTRUCTION 3" << std::endl;
    WrongCat cat1;
    WrongCat cat2(cat1);
    WrongCat cat3;
    cat3 = cat1;
    
    cat1.set_ideas(3, "food");
    cat1.set_ideas(4, "sleep");
    cat1.set_ideas(5, "play");
    cat1.set_ideas(6, "food");
    cat2.set_ideas(99, "qwerty");
    cat2.set_ideas(100, "qwerty");
    cat3.set_ideas(27, "water");
    cat3.set_ideas(89, "water");
    cat3.set_ideas(64, "water");
    std::cout << std::endl;
    std::cout << "DOG1 IDEAS" << std::endl;
    cat1.display_ideas();
    std::cout << std::endl;
    std::cout << "DOG2 IDEAS" << std::endl;
    cat2.display_ideas();
    std::cout << std::endl;
    std::cout << "DOG3 IDEAS" << std::endl;
    cat3.display_ideas();
    std::cout << std::endl;
    return 0;
*/
}