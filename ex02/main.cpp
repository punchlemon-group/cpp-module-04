#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // const AAnimal* meta = new AAnimal();
    const AAnimal* i = new Dog();
    const AAnimal* j = new Cat();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    // meta->makeSound();

    std::cout << std::endl;

    Dog dog = Dog();
    std::cout << std::endl;
    Dog dog2 = Dog();
    std::cout << std::endl;
    dog = dog2;
    std::cout << std::endl;
    Dog dog3 = Dog(dog2);
    std::cout << std::endl;

    // delete meta;
    // std::cout << std::endl;
    delete i;
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;

    return 0;
}
