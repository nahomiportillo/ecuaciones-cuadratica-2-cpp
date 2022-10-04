#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>

using namespace std; 

int main(void){
    int a=0, b=0, c=0; 
    float d=0, e=0, f=0, g=0, x1=0, x2=0;

    cout << "ingrese el valor de a: " << endl;
    cin >> a;
    while(a==0){
    if( isdigit(a) ) 
        {
            a=a;
            break;
        } 
        else 
        {
            cout << "Ingrese un numero valido" << endl;
            break;

        }
    }

    cout << "ingrese el valor de b: " << endl;
    cin >> b; 
    while(b==0){
    if( isdigit(b) ) 
        {
            b=b;
            break;
        } 
        else 
        {
            cout << "Ingrese un numero valido" << endl;
            break;

        }
    }

    cout << "ingrese el valor de c: " << endl;
    cin >> c;
    while(c==0){
    if( isdigit(c) ) 
        {
            c=c;
            break;
        } 
        else 
        {
            cout << "Ingrese un numero valido" << endl;
            break;

        }
    }

    d = (-1*b); 
    e = (b*b) - (4*a*c);
    f = 2*a;
    g = sqrt(e);
    x1= (d+g) / f;
    x2 = (d-g) /f;

    if (e <= 0){
        x1=d/f;
        x2=d/f;
    }

    cout << "x1 vale: " << x1 << endl;
    cout << "x2 vale: " << x2 << endl;
}