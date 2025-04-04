#include "AAnimal.hpp"

/* public */
/* construcotr */
AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << *this << ": AAnimal default constructor" << std::endl;
    _brain = new Brain();
}

AAnimal::AAnimal(const AAnimal& copy) : _type(copy._type) {
    std::cout << *this << ": AAnimal copy constructor" << std::endl;
    _brain = new Brain(*copy._brain);
}

/* operator */
AAnimal& AAnimal::operator=(const AAnimal& copy) {
    std::cout << *this << ": AAnimal assignation operator" << std::endl;
    if (this != &copy) {
        _type = copy._type;
        if (_brain) {
            delete _brain;
        }
        _brain = new Brain(*copy._brain);
    }
    return *this;
}

/* destructor */
AAnimal::~AAnimal() {
    std::cout << *this << ": AAnimal destructor" << std::endl;
    if (_brain) {
        delete _brain;
    }
}

/* getter */
const std::string& AAnimal::getType() const {
    return _type;
}

/* global */
std::ostream& operator<<(std::ostream& os, const AAnimal& animal) {
    os << animal.getType();
    return os;
}
