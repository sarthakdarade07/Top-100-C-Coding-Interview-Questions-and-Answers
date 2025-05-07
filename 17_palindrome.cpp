// Write a Program to Check Palindrome

#include<iostream>
using namespace std;

bool isPalindeome(int num){
    int answer=0;
    int num2=num;
    while(num!=0){
        int last_digit=num%10;
        answer=answer*10+last_digit;
        num=num/10;
    }

    return num2==answer? true:false;
}

int main(){
    int num;

    cout<<"Enter num:";
    cin>>num;

    if(isPalindeome(num)){
        cout<<num<<" is Palindrome\n";
    }
    else{
        cout<<num<<" is not palindrome\n";
    }
    
    return 0;
}