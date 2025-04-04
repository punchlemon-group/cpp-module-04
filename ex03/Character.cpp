#include "Character.hpp"
#include "AMateria.hpp"

/* constroctor */
Character::Character() : _name("Unknown"), _materiaIdx(0) {
    for (int i = 0; i < NUM_OF_MATERIAS; ++i) {
        _materias[i] = NULL;
    }
}

Character::Character(const std::string& name) : _name(name), _materiaIdx(0) {
    for (int i = 0; i < NUM_OF_MATERIAS; ++i) {
        _materias[i] = NULL;
    }
}

/* copy constructor */
Character::Character(const Character& copy) : _name(copy._name), _materiaIdx(copy._materiaIdx) {
    for (int i = 0; i < NUM_OF_MATERIAS; ++i) {
        if (copy._materias[i]) {
            _materias[i] = copy._materias[i]->clone();
        } else {
            _materias[i] = NULL;
        }
    }
}

/* operator */
Character& Character::operator=(const Character& copy) {
    if (this != &copy) {
        _name = copy._name;
        _materiaIdx = copy._materiaIdx;
        for (int i = 0; i < NUM_OF_MATERIAS; ++i) {
            if (_materias[i]) {
                delete _materias[i];
            }
            if (copy._materias[i]) {
                _materias[i] = copy._materias[i]->clone();
            } else {
                _materias[i] = NULL;
            }
        }
    }
    return *this;
}

/* destructor */
Character::~Character() {
    for (int i = 0; i < _materiaIdx; ++i) {
        delete _materias[i];
    }
}

const std::string& Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    if (m) {
        if (_materiaIdx < NUM_OF_MATERIAS) {
            _materias[_materiaIdx] = m;
            ++_materiaIdx;
        }
    }
}
void Character::unequip(int idx) {
    if (0 <= idx && idx < _materiaIdx) {
        if (_materiaIdx < NUM_OF_MATERIAS) {
            delete _materias[idx];
            _materias[idx] = NULL;
            --_materiaIdx;
        }
    }
}

void Character::use(int idx, ICharacter& target) {
    if (0 <= idx && idx < _materiaIdx) {
        _materias[idx]->use(target);
    }
}
