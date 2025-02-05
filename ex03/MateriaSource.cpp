#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :_materiaId(0) {
    for (int i = 0; i < 4; ++i) {
        _materias[i] = NULL;
    }
    std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        if (_materias[i]) {
            delete _materias[i];
        }
    }
    std::cout << "MateriaSource destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia) {
    if (materia) {
        _materias[_materiaId] = materia;
        ++_materiaId;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    (void)type;
    return NULL; // WIP
}
