#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :_materiaId(0) {
    for (int i = 0; i < NUM_OF_MATERAS; ++i) {
        _materias[i] = NULL;
    }
    std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < NUM_OF_MATERAS; ++i) {
        if (_materias[i]) {
            delete _materias[i];
        }
    }
    std::cout << "MateriaSource destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia) {
    if (materia) {
        _materias[_materiaId] = materia; // WIP
        ++_materiaId;
    }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < NUM_OF_MATERAS; ++i) {
        if (_materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    }
    return NULL;
}
