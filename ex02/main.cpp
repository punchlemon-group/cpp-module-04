#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* i = new Dog();
    const Animal* j = new Cat();

    delete i;
    delete j;

    std::cout << "\n--- Animal array test ---\n" << std::endl;
    const int arraySize = 10;
    Animal* animals[arraySize];

    std::cout << "\nCreating " << arraySize << " animals:\n" << std::endl;
    for (int k = 0; k < arraySize; k++) {
        if (k < arraySize / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << "\nTesting sounds from all animals:\n" << std::endl;
    for (int k = 0; k < arraySize; k++) {
        animals[k]->makeSound();
    }

    std::cout << "\nCleaning up animal array:\n" << std::endl;
    for (int k = 0; k < arraySize; k++) {
        delete animals[k];
    }

    std::cout << "\n--- Deep copy test (copy constructor) ---\n" << std::endl;
    Dog* originalDog = new Dog();
    Dog* copiedDog = new Dog(*originalDog);

    std::cout << "\nDeleting original dog:\n" << std::endl;
    delete originalDog;
    std::cout << "\nCopied dog still works independently:\n" << std::endl;
    copiedDog->makeSound();
    delete copiedDog;

    std::cout << "\n--- Deep copy test (assignment operator) ---\n" << std::endl;
    Cat* cat1 = new Cat();
    Cat* cat2 = new Cat();
    *cat2 = *cat1;

    std::cout << "\nDeleting original cat:\n" << std::endl;
    delete cat1;
    std::cout << "\nCopied cat still works independently:\n" << std::endl;
    cat2->makeSound();
    delete cat2;

    return 0;
}
