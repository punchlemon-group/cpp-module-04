#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "AAnimal.hpp"

class Cat : virtual public AAnimal {
public:
    /* constructor */
    Cat();

    /* destructor */
    virtual ~Cat();

    /* general */
    void makeSound() const;

protected:
    /* support */
    virtual void _init(const std::string& sound);
};

#endif /* __CAT_HPP__ */
