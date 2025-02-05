#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(const std::string& name) : _name(name), _materiaIdx(0) {
    for (int i = 0; i < NUM_OF_MATERIAS; ++i) {
        _materias[i] = NULL;
    }
    std::cout << "Character default constructor" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < _materiaIdx; ++i) {
        delete _materias[i];
    }
    std::cout << "Character destructor" << std::endl;
}

const std::string& Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    if (m) {
        if (_materiaIdx < NUM_OF_MATERIAS) {
            std::cout << "equip " << m->getType() << std::endl;
            _materias[_materiaIdx] = m;
            ++_materiaIdx;
        }
    }
}
void Character::unequip(int idx) {
    if (0 <= idx && idx < _materiaIdx) {
        if (_materiaIdx < NUM_OF_MATERIAS) {
            std::cout << "unequip " << _materias[idx]->getType() << std::endl;
            delete _materias[idx];
            _materias[idx] = NULL; // WIP もしかしたらコピーコンストラクタを作成したらdelete書かなくて済むかも
            --_materiaIdx;
        }
    }
}

void Character::use(int idx, ICharacter& target) {
    (void)idx;
    (void)target; // WIP
}
