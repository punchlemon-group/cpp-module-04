#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :_materiaIdx(0) {
    for (int i = 0; i < NUM_OF_MATERIAS; ++i) {
        _materias[i] = NULL;
    }
    std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < _materiaIdx; ++i) {
        delete _materias[i];
    }
    std::cout << "MateriaSource destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (m) {
        if (_materiaIdx < NUM_OF_MATERIAS) {
            std::cout << "learn " << m->getType() << std::endl;
            _materias[_materiaIdx] = m;
            ++_materiaIdx;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < _materiaIdx; ++i) {
        if (_materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    }
    return NULL;
}
