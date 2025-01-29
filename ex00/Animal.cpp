#include "Animal.hpp"

/* public */
/* construcotr */
Animal::Animal() {
    _init("...");
}

Animal::Animal(const std::string& sound) {
    _init(sound);
}

Animal::Animal(const Animal& copy) {
    _initByCopy(copy);
}

Animal& Animal::operator=(const Animal& copy) {
    if (this != &copy) {
        _initByCopy(copy);
    }
    return *this;
}

/* destructor */
Animal::~Animal() {}

/* getter */
const std::string& Animal::getSound() const {
    return _sound;
}
const std::string& Animal::getType() const {
    return _type;
}

/* general */
void Animal::makeSound() const {
    std::cout << *this << ": <" << getSound() << ">" << std::endl;
}

/* free */
std::ostream& operator<<(std::ostream& os, const Animal& animal) {
    os << animal.getType();
    return os;
}


/* protected */
/* setter */
void Animal::_setSound(const std::string& sound) {
    _sound = sound;
}

void Animal::_setType(const std::string& type) {
    _type = type;
}

/* support */
void Animal::_init(const std::string& sound) {
    _setType("Animal");
    _setSound(sound);
}

void Animal::_initByCopy(const Animal& copy) {
    _setType(copy.getType());
    _setSound(copy.getSound());
}
