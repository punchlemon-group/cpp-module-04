#include "Dog.hpp"

/* public */
/* constructor */
Dog::Dog() {
    _init("Bow wow!");
    std::cout << *this << ": Dog default constructor" << std::endl;
}

// Dog::Dog(const std::string& sound) {
//     _init(sound);
// }

// Dog::Dog(const Dog& copy) {
//     _initByCopy(copy);
// }

// Dog& Dog::operator=(const Dog& copy) {
//     if (this != &copy) {
//         _initByCopy(copy);
//     }
//     return *this;
// }

/* destructor */
Dog::~Dog() {
    std::cout << *this << ": Dog destructor" << std::endl;
}

/* support */
void Dog::_init(const std::string& sound) {
    _setType("Dog");
    _setSound(sound);
}
