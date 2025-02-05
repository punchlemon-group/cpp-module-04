#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice default constructor" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor" << std::endl;
}

AMateria* Ice::clone() const {
    return NULL;// WIP
}

void Ice::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
