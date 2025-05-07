// Write a Program to Check the Prime Number

#include<iostream>
using namespace std;
bool check_prime(int);

int main(){
    int num;

    cout<<"Enter a number:";
    cin>>num;
    if(check_prime(num)){
        cout<<num<<" is prime number\n";
    }
    else{
        cout<<num<<" is not prime Number";
    }
    return 0;

}

bool check_prime(int num){
    
    if(num <=1){
        return false;  
    }

    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }

    return true;
}