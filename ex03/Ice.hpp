#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"

class Ice: virtual public AMateria {

public:
    /* constructor */
    Ice();

    /* copy constructor */
    Ice(const Ice& copy);

    /* operator */
    Ice& operator=(const Ice& copy);

    /* destructor */
    ~Ice();

    /* general */
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif /* __ICE_HPP__ */
