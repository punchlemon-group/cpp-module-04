#include "AMateria.hpp"

/* public */
/* constructor */
AMateria::AMateria() : _type("Unknown") {
}

AMateria::AMateria(const std::string& type) : _type(type) {
}

/* copy constructor */
AMateria::AMateria(const AMateria& copy) : _type(copy._type) {
}

/* operator */
AMateria& AMateria::operator=(const AMateria& copy) {
    if (this != &copy) {
        _type = copy._type;
    }
    return *this;
}

/* destructor */
AMateria::~AMateria() {
}

/* getter */
const std::string& AMateria::getType() const {
    return _type;
}

/* general */
void AMateria::use(ICharacter& target) {
    (void)target;
}
