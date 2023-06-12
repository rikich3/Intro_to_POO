#include <iostream> //import std input and output
#include <vector>
#include <string> 
#include "Humano.hpp"

using namespace std; //lugar de las variables, o los nombres de las clases que se van a utilizar
 
long factorial(int);

int main() //metodo main, falta en la plantilla
{   //System.out.print( + + + ) osea puedo agregar una variable con <<
    cout << "Factorial" << endl; //Que hemos 
    int elnum; //declaracion por valor -------------
    cin >> elnum;
    {
        //int elnum;
        //cin >> elnum;
        cout << "Se va a calcular el factorial de " << elnum << "\n";
    }
    cout << factorial(elnum) << "\n"; // cout << {factorial}
    return 0; 
}
// wally que extension se descarga de c++ xd!!!!!!!!!!!!!!!!!
long factorial(int parametro1){
    long rpta = 1; //declaracion por valor, no pueden tener valor nulo, por lo que al ser declaradas se les asigna un valor garbage
    for(int i = 1; i <= parametro1; i++){
        rpta *= i;
    }
    return rpta;
}