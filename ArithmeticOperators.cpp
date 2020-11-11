#include <iostream>
using namespace std;

int main(){
    int first = 21, second = 10, result;
    result = first%second;
    cout<<"first % second of result is : "<<result<<endl;
    result=first++; // result = first, first = first + 1  21/22
    cout<<"first++ of result is : "<<result<<endl;
    result=first--; // result = first, first = first - 1  22/21
    cout<<"first-- of result is : "<<result<<endl;
    result=++first; // result = 1+ first 22/21
    cout<<"++first of result is : "<<result<<endl;

    first=21;
    result-=first; // result = result - first 22/21
    cout<<"-=Operator, Value of result : "<<result<<endl;

    result*=first; //result = result * first 1*21
    cout<<"*=Operator, Value of result : "<<result<<endl;
    result/=first; //result = result / first 21/21
    cout<<"/=Operator, Value of result : "<<result<<endl;
    return 0;
}
