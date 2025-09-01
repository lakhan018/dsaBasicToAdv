// Base class
class Animal {
public:
    // A virtual function allows derived classes to override it
    virtual void makeSound() {
        std::cout << "Some generic animal sound\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the base class function
    void makeSound() override {
        std::cout << "Woof!\n";
    }
};

int main() {
    Animal* myPet = new Dog();
    myPet->makeSound(); // Prints "Woof!" because of polymorphism
    delete myPet;
}