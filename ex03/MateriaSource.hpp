#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
    /* constructor */
    MateriaSource();

    /* destructor */
    virtual ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
private:
    int _materiaId;
    AMateria* _materias[4];
};

#endif
