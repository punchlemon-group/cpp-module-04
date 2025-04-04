#include "Ice.hpp"
#include "ICharacter.hpp"

/* constructor */
Ice::Ice() : AMateria("ice") {
}

/* copy constructor */
Ice::Ice(const Ice& copy) : AMateria(copy) {
}

/* operator */
Ice& Ice::operator=(const Ice& copy) {
    if (this != &copy) {
        AMateria::operator=(copy);
    }
    return *this;
}

/* destructor */
Ice::~Ice() {
}

/* general */
AMateria* Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}
