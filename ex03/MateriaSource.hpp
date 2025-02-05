#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__
#define NUM_OF_MATERAS 4

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
    /* constructor */
    MateriaSource();

    /* destructor */
    virtual ~MateriaSource();

    /* general */
    void learnMateria(AMateria*);
    AMateria* createMateria(const std::string& type);

private:
    int _materiaId;
    AMateria* _materias[NUM_OF_MATERAS];
};

#endif
