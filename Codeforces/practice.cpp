#include <iostream>
using namespace std;

class MyClass {
public:
    void display(int val) {
        cout << val << endl;
    }
};

int main() {
    MyClass obj;
    obj.display();
    return 0;
}