#pragma once
#include "Bird.h"
namespace Animals {
    namespace Birds {
        namespace Domestic {
            class Eagle :
                public Bird
            {
                void makeSound()const override;
            };
        }
    }
};

