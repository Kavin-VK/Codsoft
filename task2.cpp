#include<iostream>
#include<math.h>

using namespace std;

int main()

{
    float a,b;
    int n;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"_______Simple Calculator______"<<endl;
    cout<<"1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\nEnter your choice:";
    cin>>n;
    
    switch(n)
    {
        case 1:
        {
            cout<<"Addition : "<<a<<" + "<<b<<" = "<<a+b;
            break;
        }
        case 2:
        {
            cout<<"Subraction : "<<a<<" - "<<b<<" = "<<a-b;
            break;
        }
        case 3:
        {
            cout<<"Multiplication : "<<a<<" * "<<b<<" = "<<a*b;
            break;
        }
        case 4:
        {
            cout<<"Division : "<<a<<" / "<<b<<" = "<<a/b;
            break;
        }
        default:
        {
            cout<<"Enter a valid input.";
            break;
        }
    }
    return 0;
    
