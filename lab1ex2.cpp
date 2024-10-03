#include <iostream>

using namespace std;

int main()
{
   int n, suma=0;
   double media;

   cout<< "Introduceti numarul de elemente: ";
   cin >> n;

   int numar;
   for(int i=0; i<n; i++){
    cout<< "Introduceti elementul"<<(i+1)<<":";
    cin >> numar;
    suma+=numar;
   }

   media=suma/n;

   cout<< "Suma este: "<<suma<<endl;
   cout<< "Media este: "<<media<<endl;

    return 0;
}
