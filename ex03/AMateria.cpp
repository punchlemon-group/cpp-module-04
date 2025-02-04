#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type) {
    std::cout << "AMateria default constructor" << std::endl;
}

const std::string& AMateria::getType() const {
    return _type;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor" << std::endl;
}
