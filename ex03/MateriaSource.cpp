#include "MateriaSource.hpp"

/* constructor */
MateriaSource::MateriaSource() :_materiaIdx(0) {
    for (int i = 0; i < NUM_OF_MATERIAS; ++i) {
        _materias[i] = NULL;
    }
}

/* copy constructor */
MateriaSource::MateriaSource(const MateriaSource& copy) : _materiaIdx(copy._materiaIdx) {
    for (int i = 0; i < NUM_OF_MATERIAS; ++i) {
        if (copy._materias[i]) {
            _materias[i] = copy._materias[i]->clone();
        } else {
            _materias[i] = NULL;
        }
    }
}

/* operator */
MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
    if (this != &copy) {
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
MateriaSource::~MateriaSource() {
    for (int i = 0; i < _materiaIdx; ++i) {
        delete _materias[i];
    }
}

/* general */
void MateriaSource::learnMateria(AMateria* m) {
    if (m) {
        if (_materiaIdx < NUM_OF_MATERIAS) {
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
