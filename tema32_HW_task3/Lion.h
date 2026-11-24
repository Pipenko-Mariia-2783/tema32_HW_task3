#pragma once
#include "Animal.h"
namespace Animals {
    namespace Wild {
        class Lion :
            public Animal
        {
            void makeSound()const override;
        };
    }
}

