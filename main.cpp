#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

void punto2 (){ //Arreglo de 100 letras mayusculas aleatorias y cuenta cuantas veces estan repetidas.
    srand(time(NULL)); //Implanto semilla del relog del pc, para poder que sea pseudoaleatorias las letras.
    int n = 0;
    char array[100];
    for (int i=0;i<100;i++){
        array[i] = 66 + rand() % 25; //En la posicion i del arreglo, agrego las letras que van desde el #66 hasta el 90. El 25 son los caracteres que hay en ese rango.
        cout << n++ << " "<< array[i] << endl;
    }

}

int main()
{
    int option =0;
    cout << "Ingrese la opcion correspondiente"<<endl;
    cin >> option;
    switch (option) {
        case 1:
            punto2();
        break;
    }
    return 0;
}
