#include "Cat.hpp"

/* public */
/* constructor */
Cat::Cat() {
    _init("Meow meow!");
    std::cout << *this << ": Cat default constructor" << std::endl;
}

/* destructor */
Cat::~Cat() {
    std::cout << *this << ": Cat destructor" << std::endl;
}

/* support */
void Cat::_init(const std::string& sound) {
    _setType("Cat");
    _setSound(sound);
}
