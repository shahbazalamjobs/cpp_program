// Program 9.1
// Accept 3 integers and print the largest of three using only if

#include<iostream>
using namespace std;

int main(){

    int a,b,c,max;
    cout<< "\nEnter 3 intergers " ;
    cin >> a >> b >> c ;
    
    max = a;
    
    if(b>max) 
    {
        max = b;
    }
    
    if(c>max)
    {
        max = c;
    }

    cout<< "The maximum of three digits " << a << ", " << b << ", " << c << " is " << max <<"\n\n";
     
    return 0;
}
