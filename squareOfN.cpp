/*
Write a function to print squares of the first 5 natural numbers.

Sample Output : 1  4  9  16  25
*/

#include<iostream>

int Sqaure(int a){
    return a*a;
}
using namespace std;
int main(){

    int a;
    cout<<"Enter a natural number : ";
    cin>>a;

    cout<<"The squares of a natural number are : ";

    for(int i = 1;i<=a;i++){
        cout<<Sqaure(i)<<"  ";
    }


}