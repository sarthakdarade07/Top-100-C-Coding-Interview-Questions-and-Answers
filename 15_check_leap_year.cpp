// Write a Program to Find a Leap Year or Not

#include<iostream>
using namespace std;

bool check_leap_year(int);

int main(){
    int year;

    cout<<"Enter Year:";
    cin>>year;

    if(check_leap_year(year)){
        cout<<year<<" is leap year";
    }
    else{
        cout << year << " is not leap year";
    }

    return 0;
}

bool check_leap_year(int year){
    
    if(year%400==0){
        return true;
    }
      if(year%100==0){
        return false;
    }

     if(year%4==0){
        return true;
    }
    else{
        return false;
    }
}
