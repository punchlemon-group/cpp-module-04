#include "Dog.hpp"

/* public */
/* constructor */
Dog::Dog() {
    _type = "Dog";
    std::cout << *this << ": Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
    std::cout << *this << ": Dog copy constructor" << std::endl;
}

/* operator */
Dog& Dog::operator=(const Dog& copy) {
    if (this != &copy) {
        Animal::operator=(copy);
        std::cout << *this << ": Dog assignation operator" << std::endl;
    }
    return *this;
}

/* destructor */
Dog::~Dog() {
    std::cout << *this << ": Dog destructor" << std::endl;
}

/* general */
void Dog::makeSound() const {
    std::cout << *this << ": " << "Woof woof!🐕🐕🐕🐕" << std::endl;
}
