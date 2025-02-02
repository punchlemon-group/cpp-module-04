#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : virtual public Animal {
public:
    /* constructor */
    Dog();
    // Dog(const std::string& name);
    // Dog(const Dog& copy);
    // Dog& operator=(const Dog& copy);

    /* destructor */
    virtual ~Dog();

protected:
    /* support */
    virtual void _init(const std::string& sound);
};

#endif /* __DOG_HPP__ */
