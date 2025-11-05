#include<bits/stdc++.h>
using namespace std;

int main(){
    int decimal;
    cout<<"Decimal Number: ";
    cin>>decimal;
    string binary;
    for(int i=31;i>=0;i--){
        int mask=(1<<i);
        if((decimal&mask)>0){
            binary.push_back('1');
        }
        else{
            binary.push_back('0');
        }
    }
    cout<<"Binary Representation is: "<<binary;
}