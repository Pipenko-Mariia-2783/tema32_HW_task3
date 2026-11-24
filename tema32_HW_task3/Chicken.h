#pragma once
#include "Bird.h"
namespace Animals {
    namespace Birds {
        namespace Domestic {
            class Chicken :
                public Bird
            {
                void makeSound()const override;
            };
        }
    }
}


