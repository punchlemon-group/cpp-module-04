#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#define NUM_OF_MATERIAS 4

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
    /* constructor */
    MateriaSource();

    /* copy constructor */
    MateriaSource(const MateriaSource& copy);

    /* operator */
    MateriaSource& operator=(const MateriaSource& copy);

    /* destructor */
    virtual ~MateriaSource();

    /* general */
    void learnMateria(AMateria* m);
    AMateria* createMateria(const std::string& type);

private:
    int _materiaIdx;
    AMateria* _materias[NUM_OF_MATERIAS];
};

#endif
