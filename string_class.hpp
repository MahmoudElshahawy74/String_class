#ifndef MYSTRING_HPP
#define MYSTRING_HPP

class MyString {
private:
    char* data;

public:
    // Default constructor
    MyString();

    // Constructor with a C-string
    MyString(const char* str);

    // Copy constructor
    MyString(const MyString& other);

    // Copy assignment operator constructor
    MyString& operator=(const MyString& other);

    // Move constructor
    MyString(MyString&& other);

    // Move assignment operator
    MyString& operator=(MyString&& other);

    // Destructor
    ~MyString();

    // Function to get the C-string
    const char* c_str() const;
};

#endif // MYSTRING_HPP
