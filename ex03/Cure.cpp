#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure default constructor" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter& target) {
    std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}
