#include "Cure.hpp"

void Cure::use(ICharacter& target) {
    std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}
