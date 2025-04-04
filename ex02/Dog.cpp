#include "Dog.hpp"

/* public */
/* constructor */
Dog::Dog() {
    _type = "Dog";
    std::cout << *this << ": Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& copy) : AAnimal(copy) {
    std::cout << *this << ": Dog copy constructor" << std::endl;
}

/* operator */
Dog& Dog::operator=(const Dog& copy) {
    std::cout << *this << ": Dog assignation operator" << std::endl;
    if (this != &copy) {
        AAnimal::operator=(copy);
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
