#pragma once
#include "Animal.h"
namespace Animals {
    namespace Wild {
    class Wolf :
        public Animal
    {
    public:
        void makeSound()const override;
    };
    }
}


