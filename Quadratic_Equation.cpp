#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float a,b,c;

    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"\nEnter the value of b : ";
    cin>>b;
    cout<<"\nEnter the value of c : ";
    cin>>c;
 
    float d=((b*b)-4*(a*c));
    float x1=(-b-d)/(2*a);
    float x2=(-b+d)/(2*a);
    
    cout<<"\nX1 = "<<x1;
    cout<<"\nX2 = "<<x2;

    return 0;
}