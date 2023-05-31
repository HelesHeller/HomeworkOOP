#include "mystring.h"
#include <iostream>
#include<Windows.h>

using namespace std;



int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    MyString s1;
    s1.input();
    s1.display();

    MyString s2(50);
    s2.input();
    s2.display();

    MyString s3("Hello");
    s3.display();

    cout << "Количество созданных объектов: " << MyString::getObjectCount() << std::endl;

    return 0;
}
