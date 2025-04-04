#include "Cure.hpp"
#include "ICharacter.hpp"

/* constructor */
Cure::Cure() : AMateria("cure") {
}

/* copy constructor */
Cure::Cure(const Cure& copy) : AMateria(copy) {
}

/* operator */
Cure& Cure::operator=(const Cure& copy) {
    if (this != &copy) {
        AMateria::operator=(copy);
    }
    return *this;
}

/* destructor */
Cure::~Cure() {
}

/* general */
AMateria* Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
