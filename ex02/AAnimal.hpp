#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal {
public:
    /* constructor */
    AAnimal();
    AAnimal(const std::string& sounds);
    AAnimal(const AAnimal& copy);
    AAnimal& operator=(const AAnimal& copy);

    /* destructor */
    virtual ~AAnimal();

    /* getter */
    const std::string& getType() const;
    const std::string& getSound() const;

    /* general */
    virtual void makeSound() const = 0;

protected:

    /* setter */
    void _setSound(const std::string& sound);
    void _setType(const std::string& type);

    /* support */
    virtual void _init(const std::string& sound);
    void _initByCopy(const AAnimal& copy);

private:
    /* variable */
    std::string _type;
    std::string _sound;
    Brain* _brain;
};

/* global */
std::ostream& operator<<(std::ostream& os, const AAnimal& animal);

#endif /* __ANIMAL_HPP__ */
