#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"

class Cure: virtual public AMateria {

public:
    void use(ICharacter& target);

};

#endif /* __CURE_HPP__ */
