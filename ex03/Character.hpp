#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter {

public:
    /* constructor */
    Character(const std::string& name);

    /* destructor */
    ~Character();

    /* getter */
    const std::string& getName() const;

    /* general */
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

private:
    std::string _name;

};

#endif
