#include "Cat.hpp"

/* public */
/* constructor */
Cat::Cat() {
    _type = "Cat";
    std::cout << *this << ": Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy) {
    std::cout << *this << ": Cat copy constructor" << std::endl;
}

/* operator */
Cat& Cat::operator=(const Cat& copy) {
    if (this != &copy) {
        Animal::operator=(copy);
        std::cout << *this << ": Cat assignation operator" << std::endl;
    }
    return *this;
}

/* destructor */
Cat::~Cat() {
    std::cout << *this << ": Cat destructor" << std::endl;
}

/* general */
void Cat::makeSound() const {
    std::cout << *this << ": " << "Meow meow!🐈🐈🐈🐈" << std::endl;
}
