#include "AAnimal.hpp"

/* public */
/* construcotr */
AAnimal::AAnimal() {
    std::cout << "AAnimal default constructor" << std::endl;
    _init("...");
}

AAnimal::AAnimal(const std::string& sound) {
    std::cout << "AAnimal default constructor" << std::endl;
    _init(sound);
}

AAnimal::AAnimal(const AAnimal& copy) {
    std::cout << "AAnimal copy constructor" << std::endl;
    _initByCopy(copy);
}

AAnimal& AAnimal::operator=(const AAnimal& copy) {
    std::cout << "AAnimal assignation operator" << std::endl;
    if (this != &copy) {
        delete _brain;
        _initByCopy(copy);
    }
    return *this;
}

/* destructor */
AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor" << std::endl;
    delete _brain;
}

/* getter */
const std::string& AAnimal::getSound() const {
    return _sound;
}
const std::string& AAnimal::getType() const {
    return _type;
}


/* protected */
/* setter */
void AAnimal::_setSound(const std::string& sound) {
    _sound = sound;
}

void AAnimal::_setType(const std::string& type) {
    _type = type;
}

/* support */
void AAnimal::_init(const std::string& sound) {
    _setType("AAnimal");
    _setSound(sound);
    _brain = new Brain();
}

void AAnimal::_initByCopy(const AAnimal& copy) {
    _setType(copy.getType());
    _setSound(copy.getSound());
    if (copy._brain) {
        _brain = new Brain(*(copy._brain));
    } else {
        _brain = NULL;
    }
}


/* global */
std::ostream& operator<<(std::ostream& os, const AAnimal& animal) {
    os << animal.getType();
    return os;
}
