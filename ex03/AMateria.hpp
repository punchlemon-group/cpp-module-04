#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include <string>

class ICharacter;

class AMateria {

public:
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
    virtual ~AMateria();

private:
    std::string _type;

};

#endif /* __AMATERIA_HPP__ */
