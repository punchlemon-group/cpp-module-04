#include "Cat.hpp"

/* public */
/* constructor */
Cat::Cat() {
    _type = "Cat";
    std::cout << *this << ": Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) : AAnimal(copy) {
    std::cout << *this << ": Cat copy constructor" << std::endl;
}

/* operator */
Cat& Cat::operator=(const Cat& copy) {
    std::cout << *this << ": Cat assignation operator" << std::endl;
    if (this != &copy) {
        AAnimal::operator=(copy);
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
