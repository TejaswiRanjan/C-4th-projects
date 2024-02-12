/*
Given two numbers a and b, write a program to print all the prime numbers present between a and b.
Sample Input : 2 10
Sample Output : 2 3 5 7
*/

#include<iostream>
using namespace std;

bool check(int num){

    if(num%2!=0){
        return true;
    }else{
        return false;
    }
    
    }

int main(){
    int a,b;
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
    for(int i =a;i<=b;i++){
        if(check(i)==true){
            cout<<i<<" ";
        }
    }
}