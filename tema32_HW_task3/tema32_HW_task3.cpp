#include <iostream>
#include <vector>
#include "Animal.h"
#include "Wolf.h"
#include "Dog.h"
#include "Lion.h"
#include "Bird.h"
#include "Chicken.h"
#include "Eagle.h"
#include "Duck.h"

int main()
{
    std::vector<Animals::Animal*> animals;

    Animals::Wild::Wolf wolf;
    Animals::Wild::Dog dog;
    Animals::Wild::Lion lion;

    Animals::Birds::Bird bird;
    Animals::Birds::Domestic::Eagle eagle;

    Animals::Birds::Domestic::Chicken chicken;
    Animals::Birds::Domestic::Duck duck;

    animals.push_back(&wolf);
    animals.push_back(&dog);
    animals.push_back(&lion);
    animals.push_back(&bird);
    animals.push_back(&eagle);
    animals.push_back(&chicken);
    animals.push_back(&duck);

    for (auto animal : animals)
    {
        animal->makeSound();
    }
}