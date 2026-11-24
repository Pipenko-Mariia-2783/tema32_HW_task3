#pragma once
#include <iostream>
#include <string>
namespace Animals {
	class Animal
	{
	protected:
		std::string name;
	public:
		~Animal();
		virtual void makeSound()const;
	};
}


