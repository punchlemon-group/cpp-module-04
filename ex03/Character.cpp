#include "Character.hpp"

Character::Character(const std::string& name) : _name(name) {
    std::cout << "Character default constructor" << std::endl;
}

Character::~Character() {
    std::cout << "Character destructor" << std::endl;
}

const std::string& Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    (void)m; // WIP
}
void Character::unequip(int idx) {
    (void)idx; // WIP
}

void Character::use(int idx, ICharacter& target) {
    (void)idx;
    (void)target; // WIP
}
