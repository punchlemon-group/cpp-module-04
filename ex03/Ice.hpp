#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"

class Ice: virtual public AMateria {

public:
    void use(ICharacter& target);

};

#endif /* __ICE_HPP__ */
