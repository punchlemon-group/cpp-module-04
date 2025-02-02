#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* i = new Dog();
    const Animal* j = new Cat();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    Dog dog = Dog();
    Dog dog2 = Dog(dog);
    Dog dog3 = Dog();
    dog3 = dog2;

    delete meta;
    delete i;
    delete j;

    return 0;
}
