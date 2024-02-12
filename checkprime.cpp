/*
Given two numbers a and b, write a program to print all the prime numbers present between a and b.
Sample Input : 1 10
Sample Output : 1 3 5 7 9
*/

#include<iostream>
using namespace std;
bool prime(int num){
    for(int i = 2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    int b;
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
}