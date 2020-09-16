#include <iostream>
#include <utility>

using namespace std;

struct Foo {
private:
    string lastName;
public:
    std::string name = "Elver";

    Foo() {
        cout << "Hello from Foo constructor" << endl;
    }

    string getLastName() {
        return lastName;
    }

    void setLastName(string value) {
        lastName = std::move(value);
    }
};

struct Bar: public Foo {

};

std::string greet(std::string* name) {
    std::string temp = "Victor Reznov";

    *name = temp;
    temp = "Elver";

    return "que pedorro " + *name;
}

float sum(float x, float y) {
    return x + y;
}

int main() {
    std::string name = "brunacido";

    std::cout << "Hello World, fella" << std::endl;
    std::cout << greet(&name) << std::endl;
    std::cout << name << std::endl;

    float x = 0;
    float y = 0;

    std::cout << "Set x value" << std::endl;
    std::cin >> x;
    std::cout << "Set y value" << std::endl;
    std::cin >> y;

    std::cout << sum(x, y) << std::endl;

    cout << max(x, y) << endl;

    // OOP
    Foo f;
    std::cout << f.name << std::endl;

    f.name = "Galarga";
    std::cout << f.name << endl;

    f.setLastName("Primate");

    cout << f.getLastName() << endl;

    // Inheritance
    Bar b;
    cout << b.name.length() << endl;

    cout << "introduce your name: ";
    getline(cin, b.name);

    cout << b.name << endl;

    // Ternary operator
    string res = (f.name == b.name) ? "same" : "master";
    cout << res;

    return 0;
}

