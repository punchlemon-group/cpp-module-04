#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "AAnimal.hpp"

class Cat : public AAnimal {
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
