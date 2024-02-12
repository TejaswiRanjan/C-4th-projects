/*
Given the age of a person, write a function to check if the person is eligible to vote or not.
Sample Input : 19
Sample Output : Yes
Sample Input : 17
Sample Output : No
*/

#include<iostream>
using namespace std;

bool vote(int age){
        if(age>=18){
           return true;
        }else{
           return false;
        }
    };


int main(){
    int age;
    cout<<"Enter the age : ";
    cin>>age;


    if(vote(age)==true){
        cout<<"Yes they can vote ";
    }else{
        cout<<"No they cannot vote ";
    };

}