/*
Given the age of a person, write a function to check if the person is eligible to vote or not.
Sample Input : 19
Sample Output : Yes
Sample Input : 17
Sample Output : No
*/

#include<iostream>
using namespace std;
void check(int age){
    if(age>=18){
        cout<<"Eligible to Vote";
    }else{
        cout<<"Not Eligible to vote";
    }
}
int main(){
    int age;
    cout<<"Enter the Age : ";
    cin>>age;
    check(age);
}