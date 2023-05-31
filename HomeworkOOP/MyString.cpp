#include "mystring.h"
#include <iostream>
#include <cstring>

using namespace std;

int MyString::objectCount = 0;

MyString::MyString() : MyString(80) {}

MyString::MyString(int size) {
    str = new char[size];
    length = size;
    objectCount++;
}

MyString::MyString(const char* input) {
    length = std::strlen(input);
    str = new char[length + 1];
    strcpy_s(str, length + 1, input);
    objectCount++;
}

MyString::~MyString() {
    delete[] str;
    objectCount--;
}

void MyString::input() {
    cout << "Введите строку: ";
    cin.getline(str, length);
}

void MyString::display() {
    cout << "Строка: " << str << std::endl;
}

void MyString::MyStrcpy(MyString& obj) {
    strcpy_s(str, length, obj.str);
}

bool MyString::MyStrStr(const char* str) {
    return (strstr(this->str, str) != nullptr);
}

int MyString::MyChr(char c) {
    char* pos = strchr(str, c);
    if (pos != nullptr) {
        return pos - str;
    }
    return -1;
}

int MyString::MyStrLen() {
    return strlen(str);
}

void MyString::MyStrCat(MyString& b) {
    strcat_s(str, length, b.str);
}

void MyString::MyDelChr(char c) {
    char* src = str;
    char* dst = str;

    while (*src != '\0') {
        if (*src != c) {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';
}

int MyString::MyStrCmp(MyString& b) {
    int result = strcmp(str, b.str);
    if (result < 0) {
        return -1;
    }
    else if (result > 0) {
        return 1;
    }
    return 0;
}

int MyString::getObjectCount() {
    return objectCount;
}
