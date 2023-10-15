#include <iostream>
#include<string>
using namespace std;



// // C++ Constructors. Constructors are methods or function that are automatically executed every time you create an object.   
// The purpose of a constructor is to construct an object and assign values to the object's members.               
// A constructor takes the same name as the class to which it belongs, and does not return any values.


class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}