// C++ Programto remove all characters from a string except alphabets

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    string str,final_str;

    cout<<"Enter a string:";
    cin>>str;

    for(int i=0;i<str.size();i++){
        if(isalpha(str[i])){
            final_str+=str[i];
        }
    }

    cout<<"\nString with only alphabates:\n"<<final_str;
    return 0;
}