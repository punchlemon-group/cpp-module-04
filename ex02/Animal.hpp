#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
public:
    /* constructor */
    Animal();
    Animal(const std::string& sounds);
    Animal(const Animal& copy);
    Animal& operator=(const Animal& copy);

    /* destructor */
    virtual ~Animal();

    /* getter */
    const std::string& getType() const;
    const std::string& getSound() const;

    /* general */
    void makeSound() const;

    /* free */
    friend std::ostream& operator<<(std::ostream& os, const Animal& animal);

protected:

    /* setter */
    void _setSound(const std::string& sound);
    void _setType(const std::string& type);

    /* support */
    virtual void _init(const std::string& sound);
    void _initByCopy(const Animal& copy);

private:
    /* variable */
    std::string _type;
    std::string _sound;
    Brain* _brain;
};

#endif /* __ANIMAL_HPP__ */
