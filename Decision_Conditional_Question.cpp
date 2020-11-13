#include <iostream>
using namespace std;

int If_Statement();
int Conditional_Question();

int main(){
    int result_by_if_statement = If_Statement();
    int result_by_conditional_question = Conditional_Question(); 
    return 0;
}

int If_Statement(){
    int x,y = 10, var;
    if(y<10){
        var=30;
    }
    else{
        var=40;
    }
    cout << "value of x : " << var << endl;
    return var;
}

int Conditional_Question(){
    int x,y = 10, var;
    x=(y < 10)?30:40;
    cout << "value of x : " << x << endl;
    return var;
}