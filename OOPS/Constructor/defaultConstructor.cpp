// default_constructor.cpp
#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    // Default constructor
    MyClass() {                                    // it is mandatory that a constructor has the same name as the class 
        x = 0; // Initialize x to 0
        cout << "Default constructor called. x = " << x << endl;
    }

    // Function to display value of x
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    // Creating an object using the default constructor
    MyClass obj1;                                     //constrcutor is automatically called as soon as obj1 is created                
    obj1.display();
    return 0;
}
