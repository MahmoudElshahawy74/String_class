#include "string_class.hpp"
#include <cstring>
#include <algorithm> 

// Default constructor
MyString::MyString() : data(nullptr) {}

// Constructor with a C-string
MyString::MyString(const char* str) {
    if (str != nullptr) { //check str is coming with data or null
        data = new char[std::strlen(str) + 1];
        std::strcpy(data, str);
    } else {
        data = nullptr;
    }
}

// Copy constructor
MyString::MyString(const MyString& other){
    if(other.data != nullptr){//check str is coming with data or null
        this->data= new char[std::strlen(other.data)+1];
        std::strcpy(this->data, other.data);
    }
    else{
        this->data=nullptr;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copy assignment operator
MyString& MyString::operator=(const MyString& other){
    if(this == &other){ // check if i copy for myself
        return *this;
    }

    else{     //delete if data is located before 
        delete [] this->data;
        this->data=nullptr;

        if(other.data != nullptr){//check str is coming with data or null
            this->data=new char[strlen(other.data)+1];
            std::strcpy(this->data, other.data);
        }
        else{
            this->data=nullptr;
        }
    }
    return *this;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Move constructor
MyString::MyString(MyString&& other){ // right value Ref
    if(other.data){
        this->data=other.data;
        other.data=nullptr;
    }

}

// MyString::MyString(MyString&& other) : data(nullptr) {
//     std::swap(data, other.data);
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Move assignment operator

MyString& MyString::operator=(MyString&& other){ //right value Ref
    if(this != &other){
        if(this->data){
            delete [] this->data;
            this->data=nullptr;
        }
        this->data=other.data;
        other.data=nullptr;
    }

    return *this;
}


// MyString& MyString::operator=(MyString&& other)  {
//     if (this != &other) {
//         delete[] data;
//         data = nullptr;
//         std::swap(data, other.data);
//     }
//     return *this;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Destructor
MyString::~MyString() {
    delete[] data;
}

// Function to get the C-string
const char* MyString::c_str() const {
    return data;
}
