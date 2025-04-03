#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>

class Animal {
public:
    /* constructor */
    Animal();
    Animal(const Animal& copy);

    /* operator */
    Animal& operator=(const Animal& copy);

    /* destructor */
    virtual ~Animal();

    /* getter */
    const std::string& getType() const;

    /* general */
    virtual void makeSound() const;

protected:
    /* variable */
    std::string _type;
};

/* global */
std::ostream& operator<<(std::ostream& os, const Animal& animal);

#endif /* __ANIMAL_HPP__ */
