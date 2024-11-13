#include <iostream>
#include <cassert>  // Pour l'utilisation de assert

// Exemple de classe à tester
class MyClass {
public:
    static int sum(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }
};

// Fonction de test pour sum
void testSum() {
    int result = MyClass::sum(2, 3);
    assert(result == 5);
    std::cout << "testSum passed!" << std::endl;
}

void testMultiply() {
    int result = MyClass::multiply(2, 3);
    assert(result == 6);
    std::cout << "testMultiply passed!" << std::endl;
}

int main() {
    // Exécution des tests
    testSum();
    testMultiply();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
