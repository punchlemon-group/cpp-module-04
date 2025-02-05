#include <iostream>
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    std::cout << std::endl;

    src->learnMateria(new Ice());
    std::cout << std::endl;

    src->learnMateria(new Cure());
    std::cout << std::endl;

    ICharacter* me = new Character("me");
    std::cout << std::endl;

    AMateria* tmp;
    tmp = src->createMateria("ice");
    std::cout << std::endl;

    me->equip(tmp);
    std::cout << std::endl;

    tmp = src->createMateria("cure");
    std::cout << std::endl;

    me->equip(tmp);
    std::cout << std::endl;

    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    delete me;
    std::cout << std::endl;

    delete src;
    std::cout << std::endl;

    return 0;
}
