#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include <string>

class ICharacter;

class AMateria {
public:
    /* constructor */
    AMateria();

    AMateria(std::string const & type);

    /* copy constructor */
    AMateria(AMateria const & copy);

    /* operator */
    AMateria& operator=(AMateria const & copy);

    /* destructor */
    virtual ~AMateria();

    /* getter */
    std::string const & getType() const;

    /* general */
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

protected:
    /* variable */
    std::string _type;
};

#endif /* __AMATERIA_HPP__ */
