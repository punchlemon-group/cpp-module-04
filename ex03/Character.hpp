#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#define NUM_OF_MATERIAS 4

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
    int _materiaIdx;
    AMateria* _materias[NUM_OF_MATERIAS];

};

#endif
