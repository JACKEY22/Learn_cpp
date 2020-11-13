#include <iostream>
#include "Function_Ref.cpp"
extern int funcoutside();

int i = 5;
int main(){
    int i = funcoutside();
    cout<<"return value:"<<i<<endl;
    cout<<"Scope resolution operator:"<<::i<<endl;
    return 0;
}