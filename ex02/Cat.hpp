#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : virtual public Animal {
public:
    /* constructor */
    Cat();

    /* destructor */
    virtual ~Cat();

protected:
    /* support */
    virtual void _init(const std::string& sound);
};

#endif /* __CAT_HPP__ */
