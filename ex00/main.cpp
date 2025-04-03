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

    delete meta;
    delete i;
    delete j;

    std::cout << "\n--- Additional polymorphism tests ---\n" << std::endl;

    // コピーコンストラクタと代入演算子のテスト
    Dog originalDog;
    Dog copiedDog(originalDog);
    Dog assignedDog;
    assignedDog = originalDog;

    std::cout << "\nTesting copied and assigned objects:" << std::endl;
    originalDog.makeSound();
    copiedDog.makeSound();
    assignedDog.makeSound();

    // 配列でのポリモーフィズムテスト
    std::cout << "\nTesting polymorphism with arrays:" << std::endl;
    Animal* animals[4];
    animals[0] = new Animal();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Dog();

    for (int k = 0; k < 4; k++) {
        std::cout << "Animal " << k << " says: ";
        animals[k]->makeSound();
    }

    // 配列の解放
    for (int k = 0; k < 4; k++) {
        delete animals[k];
    }

    // refarenceでのポリモーフィズムテスト
    std::cout << "\nTesting with Animal references:" << std::endl;
    Dog dog;
    Cat cat;
    Animal& animalRef1 = dog;
    Animal& animalRef2 = cat;

    animalRef1.makeSound(); // Dog::makeSound()が呼ばれる
    animalRef2.makeSound(); // Cat::makeSound()が呼ばれる

    return 0;
}
