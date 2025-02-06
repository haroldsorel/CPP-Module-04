/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:02:58 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 19:02:59 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "Constructing" <<std::endl;
    std::cout << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;
    std::cout << "Data" <<std::endl;
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    std::cout << "Wrong Animals" <<std::endl;
    std::cout << std::endl;
    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongCat* wrongi = new WrongCat();
    std::cout << wrongi->getType() << " " << std::endl;
    wrongi->makeSound(); //will output the wronganimal sound!
    wrongmeta->makeSound();

    std::cout << std::endl;
    std::cout << "Destructing" <<std::endl;
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrongmeta;
    delete wrongi;
    return (0);
}
