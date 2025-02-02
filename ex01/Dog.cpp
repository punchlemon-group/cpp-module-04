#include "Dog.hpp"

/* public */
/* constructor */
Dog::Dog() {
    _init("Bow wow!");
}

Dog::Dog(const std::string& sound) {
    _init(sound);
}

Dog::Dog(const Dog& copy) {
    _initByCopy(copy);
}

// Dog& Dog::operator=(const Dog& copy) {
//     if (this != &copy) {
//         _initByCopy(copy);
//     }
//     return *this;
// }

/* destructor */
Dog::~Dog() {}

/* support */
void Dog::_init(const std::string& sound) {
    _setType("Dog");
    _setSound(sound);
}
