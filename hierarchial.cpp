#include <iostream>

// Base class: Animal
class Animal {
public:
    void makeSound() {
        std::cout << "Animal makes sound" << std::endl;
    }
};

// Derived class 1: Dog
class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class 2: Cat
class Cat : public Animal {
public:
    void makeSound() {
        std::cout << "Cat meows" << std::endl;
    }
};

int main() {
    // Create objects of derived classes
    Dog dog;
    Cat cat;

    // Call makeSound() member function from Dog and Cat classes
    dog.makeSound();
    cat.makeSound(); 

    // Call makeSound() member function from Animal class using Dog and Cat objects
    dog.Animal::makeSound(); 
    cat.Animal::makeSound(); 

    return 0;
}