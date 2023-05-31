#ifndef MYSTRING_H
#define MYSTRING_H

class MyString {
private:
    static int objectCount;
    char* str;
    int length;

public:
    MyString();
    MyString(int size);
    MyString(const char* input);
    ~MyString();

    void input();
    void display();

    void MyStrcpy(MyString& obj);
    bool MyStrStr(const char* str);
    int MyChr(char c);
    int MyStrLen();
    void MyStrCat(MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(MyString& b);

    static int getObjectCount();
};

#endif
