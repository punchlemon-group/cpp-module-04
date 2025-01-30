#include "Cat.hpp"

/* public */
/* constructor */
Cat::Cat() {
    _init("Meow meow!");
}

Cat::Cat(const std::string& sound) {
    _init(sound);
}

Cat::Cat(const Cat& copy) {
    _initByCopy(copy);
}

Cat& Cat::operator=(const Cat& copy) {
    if (this != &copy) {
        _initByCopy(copy);
    }
    return *this;
}

/* destructor */
Cat::~Cat() {}

/* support */
void Cat::_init(const std::string& sound) {
    _setType("Cat");
    _setSound(sound);
}
