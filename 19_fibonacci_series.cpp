// Write a Program to Find the Nth Term of the Fibonacci Series

#include<iostream>
using namespace std;


int printFibSeries(int num){
    int first=0,second=1,fib;

    if(num==0){
        return first;
    }
    cout<<first<<" ";
    for(int i=0;i<num-1;i++){
        fib=first+second;
        first=second;
        second=fib;
        cout<<fib<<" ";
    }
    cout<<endl;

    return fib;


}

int main(){
    int num;

    cout<<"Enter a number:";
    cin>>num;

   cout<<num<<"th fib term is "<<printFibSeries(num);

    return 0;

    
}



