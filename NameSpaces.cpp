#include <iostream>
//#include "NameSpaces_Ref.cpp"
#include "NameSpaces_Ref.hpp"
using namespace std;

namespace first_space{
    void func(){
        cout << "Inside first_spaece" << endl;
    }
}
namespace second_space{
    void func(){
        cout << "Inside second_space" << endl;
    }
}

using namespace first_space;
using namespace third_space;
int main(){
    func();
    second_space::func();

    third_space::funcInside();
    funcOutside();
    return 0;
}

