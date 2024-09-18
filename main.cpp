#include <iostream>
#include "Array.hpp"

using namespace std;

int main(){
    int num;

    cout<<"Enter a number to double: ";
    cin>>num;

    Array arr;

    int doubled_num = arr.twice(num);
    cout<<num<<" * 2 = "<<doubled_num<<endl;
    
    return 0;
}