#include <iostream>
#include <cstdio>
#include <stdio.h>

#pragma region KarlsPetPeeve
// using namespace std;
#pragma endregion
#pragma region Class&Implementation
class foo{
private:
    int m_int;

public:
    void set_int(const int n);
    int get_int();
};

void foo::set_int(const int n) { this->m_int = n; }
int foo::get_int() { return this->m_int; }
#pragma endregion
#pragma region namespaces
//can nest name spaces
namespace fun{
    namespace bar {
        void foo();
    }
}
#pragma endregion

// interviewer may not think string solution is not memory efficient
// try to do it in place without creating extra, unnecessary data structures

bool is_palindrome(int);

int main() {

    std::cout << "Hello World"<< std::endl;
    bool oneResult = is_palindrome(121);
    std::cout<< oneResult<< std::endl;

    // namespace implementation
    // fun::bar::foo();
}

bool is_palindrome(int n)
{
    int original = n;
    if(n < 0){
        return false;
    }
    if(n < 10){
        return false;
    }
    int rev = 0, remainder;
    while(n != 0){
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    return rev == original;
}