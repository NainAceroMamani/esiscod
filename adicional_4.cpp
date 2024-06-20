#include <iostream>
#include <math.h>
using namespace std;

int main(void){
	// ax2 + bx + c = 0
	
    float a, b, c, x1, x2, x3;
    
    cout<<"Ingresa el valor de a: "<<endl;
    cin>>a;
    
    cout<<"Ingresa el valor de b: "<<endl;
    cin>>b;
    
    cout<<"Ingresa el valor de c: "<<endl;
    cin>>c;
    
    x3 = (b*b) - (4*a*c); 
    
    x1 = (-b + sqrt(x3)) / (2*a);
    x2 = (-b - sqrt(x3)) / (2*a);
        
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;

    return 0;
}
