/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsorel <hsorel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:15:32 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/03/29 20:42:17 by hsorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
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
    //Animal a;
    //Animal b();
    //Animal *a = new Animal;
    //Animal *a = new Dog;

    const Animal *animals[20];
    std::cout << std::endl;

    int i = 0;
    while (i < 10)
    {
        animals[i] = new Dog;
        i++;
    }
    std::cout << std::endl;
    std::cout << "Cat Construction" << std::endl;
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
    dog2.set_ideas(100, "qwerty");
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
}