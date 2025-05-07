// 18. Write a Program to Check Whether a Number is an Armstrong Number or Not
//"An Armstrong number is a number that, 
//it’s equal to the sum of its own digits raised to the power of how many digits it has!"
#include<iostream>
#include<math.h>
using namespace std;
int isArmstrong(int num){
    int dummyNum=num,digits=0,rem;
    int num2=num;

    while(dummyNum!=0){
        dummyNum=dummyNum/10;
        digits++;
    }
    dummyNum=0;
    while(num!=0){
        rem=num%10;
       
        dummyNum += pow(rem,digits);
      
        num=num/10;
    }

    
    return dummyNum==num2;
}

int main(){
    int num;

    cout<<"Enter a number:";
    cin>>num;

   if(isArmstrong(num)){
    cout<<num<<" is Armstrong number\n";
   }
   else{
    cout<<num<<" is not Armstrong num\n";
   }


    return 0;
}