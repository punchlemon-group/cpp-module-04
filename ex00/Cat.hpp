#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : virtual public Animal {
public:
    /* constructor */
    Cat();
    // Cat(const std::string& name);
    // Cat(const Cat& copy);
    // Cat& operator=(const Cat& copy);

    /* destructor */
    virtual ~Cat();

protected:
    /* support */
    virtual void _init(const std::string& sound);
};

#endif /* __CAT_HPP__ */
