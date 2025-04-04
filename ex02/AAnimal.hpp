#ifndef __AANIMAL_HPP__
#define __AANIMAL_HPP__

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal {
public:
    /* constructor */
    AAnimal();
    AAnimal(const AAnimal& copy);

    /* operator */
    AAnimal& operator=(const AAnimal& copy);

    /* destructor */
    virtual ~AAnimal();

    /* getter */
    const std::string& getType() const;

    /* general */
    virtual void makeSound() const = 0;

protected:
    /* variable */
    std::string _type;
    Brain* _brain;
};

/* global */
std::ostream& operator<<(std::ostream& os, const AAnimal& animal);

#endif /* __AANIMAL_HPP__ */
