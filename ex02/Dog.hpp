#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "AAnimal.hpp"

class Dog : virtual public AAnimal {
public:
    /* constructor */
    Dog();

    /* destructor */
    virtual ~Dog();

    /* general */
    void makeSound() const;

protected:
    /* support */
    virtual void _init(const std::string& sound);
};

#endif /* __DOG_HPP__ */
