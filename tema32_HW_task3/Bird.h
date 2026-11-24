#pragma once
#include "Animal.h"
namespace Animals {
    namespace Birds {
        class Bird :
            public Animal
        {
            void makeSound()const override;
        };
    }
}


