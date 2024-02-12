/*
Given radius of a circle. Write a function to print the area and circumference of the cicle.
Sample Input : r =3
Sample Output : Area : 28.26
                Circumference : 18.84
*/

#include<iostream>
using namespace std;
double circumference(int r){
    
    double circumference = 2*3.14*r;
    return circumference;
    
}

double area(int r){

    double area = 3.14*(r*r);
    return area;
}
int main(){

    int radius;
    cout<<"Enter the radius of a circle : ";
    cin>>radius;

    cout<<"The circumference of a circle is : "<<circumference(radius)<<endl;
    cout<<"The area of a circle is : "<<area(radius);

}