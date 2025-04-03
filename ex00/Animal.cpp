#include "Animal.hpp"

/* public */
/* construcotr */
Animal::Animal() : _type("Animal") {
    std::cout << *this << ": Animal default constructor" << std::endl;
}

Animal::Animal(const Animal& copy) : _type(copy._type) {
    std::cout << *this << ": Animal copy constructor" << std::endl;
}

/* operator */
Animal& Animal::operator=(const Animal& copy) {
    if (this != &copy) {
        _type = copy._type;
        std::cout << *this << ": Animal assignation operator" << std::endl;
    }
    return *this;
}

/* destructor */
Animal::~Animal() {
    std::cout << *this << ": Animal destructor" << std::endl;
}

/* getter */
const std::string& Animal::getType() const {
    return _type;
}

/* general */
void Animal::makeSound() const {
    std::cout << *this << ": < ... >" << std::endl;
}


/* global */
std::ostream& operator<<(std::ostream& os, const Animal& animal) {
    os << animal.getType();
    return os;
}
