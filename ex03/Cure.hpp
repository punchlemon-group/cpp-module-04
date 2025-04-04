#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"

class Cure: virtual public AMateria {

public:
    /* constructor */
    Cure();

    /* copy constructor */
    Cure(const Cure& copy);

    /* operator */
    Cure& operator=(const Cure& copy);

    /* destructor */
    ~Cure();

    /* general */
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif /* __CURE_HPP__ */
