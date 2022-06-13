#include <iostream>

#include "Singleton.h"
#include "Single.h"

using namespace std;

int main() {
    Singleton* example = Singleton::Instance();
    Singleton* example2 = Singleton::Instance();
    example->SetNumber(5);

    cout << example->GetNumber() << endl;
    cout << example2->GetNumber() << endl;

    Single::setNumber(5);
    cout << Single::getNumber() << endl;

    return 0;
}
