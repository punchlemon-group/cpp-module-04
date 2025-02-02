#include "Animal.hpp"

/* public */
/* construcotr */
Animal::Animal() {
    std::cout << "Animal default constructor" << std::endl;
    _init("...");
}

Animal::Animal(const std::string& sound) {
    std::cout << "Animal default constructor" << std::endl;
    _init(sound);
}

Animal::Animal(const Animal& copy) {
    std::cout << "Animal copy constructor" << std::endl;
    _initByCopy(copy);
}

Animal& Animal::operator=(const Animal& copy) {
    std::cout << "Animal assignation operator" << std::endl;
    if (this != &copy) {
        _initByCopy(copy);
    }
    return *this;
}

/* destructor */
Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
    delete _brain;
}

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
    _brain = new Brain();
}

void Animal::_initByCopy(const Animal& copy) {
    _setType(copy.getType());
    _setSound(copy.getSound());
}
