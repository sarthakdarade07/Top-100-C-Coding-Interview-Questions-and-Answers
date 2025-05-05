<<<<<<< HEAD
// Write a Program to Find the Factorial of a Number Using Loops

#include<iostream>
using namespace std;

int main(){
    int fact=1,num;

    cout<<"Enter a num to find factorial:";
    cin>>num;

    for(int i=1;i<=num;i++){
        if(num==0){
            break;
        }
        else{
            fact*=i;
        }
    }

    cout<<"\nfactorial of "<<num<<" is "<<fact;
    return 0;
=======
// Write a Program to Find the Factorial of a Number Using Loops

#include<iostream>
using namespace std;

int main(){
    int fact=1,num;

    cout<<"Enter a num to find factorial:";
    cin>>num;

    for(int i=1;i<=num;i++){
        if(num==0){
            break;
        }
        else{
            fact*=i;
        }
    }

    cout<<"\nfactorial of "<<num<<" is "<<fact;
    return 0;
>>>>>>> ab7935dc1c79becf354efcedebcdc9960dd8ec9c
}