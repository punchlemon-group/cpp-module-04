#include "Dog.hpp"

/* public */
/* constructor */
Dog::Dog() {
    _init("Bow wow!");
    std::cout << *this << ": Dog default constructor" << std::endl;
}

/* destructor */
Dog::~Dog() {
    std::cout << *this << ": Dog destructor" << std::endl;
}

/* support */
void Dog::_init(const std::string& sound) {
    _setType("Dog");
    _setSound(sound);
}
