#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : virtual public Animal {
public:
    /* constructor */
    Dog();

    /* destructor */
    virtual ~Dog();

protected:
    /* support */
    virtual void _init(const std::string& sound);
};

#endif /* __DOG_HPP__ */
