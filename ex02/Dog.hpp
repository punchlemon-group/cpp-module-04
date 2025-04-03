#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {
public:
    /* constructor */
    Dog();
    Dog(const Dog& copy);

    /* operator */
    Dog& operator=(const Dog& copy);

    /* destructor */
    virtual ~Dog();

    /* general */
    void makeSound() const;
};

#endif /* __DOG_HPP__ */
