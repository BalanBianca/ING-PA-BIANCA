#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double a,b,c,x1,x2,delta;
    cout << "Introduceti coeficientii a,b si c:";
    cin >> a >> b >> c;

    delta=b*b-4*a*c;

    if(delta>=0){

        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);

        //solutii

        cout << "Solutiile sunt: " << x1 << "si" << x2 << endl;
    } else {
        cout << "Ecuatia nu are solutii reale." << endl;

    }

    return 0;

}
