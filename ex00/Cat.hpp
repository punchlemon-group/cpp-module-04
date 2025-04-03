#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal {
public:
    /* constructor */
    Cat();
    Cat(const Cat& copy);

    /* operator */
    Cat& operator=(const Cat& copy);

    /* destructor */
    virtual ~Cat();

    /* general */
    void makeSound() const;
};

#endif /* __CAT_HPP__ */
