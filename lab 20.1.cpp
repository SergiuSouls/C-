#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    string job; 
    string city;       
};

void print(Person* person) {
    cout << person->name << " is " << person->age << " years old." << endl;
    cout << "They work as a " << person->job << " and live in " << person->city << "." << endl;
}

int main() {
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.job = "Engineer"; 
    person.city = "Kyiv";                

    cout << "Meet " << person.name << endl; 
    print(&person);

    return 0;
}