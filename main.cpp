#include <iostream>

using namespace std;

int casteo(char caracter){
    int temp = static_cast<int>(caracter);
    return temp;
}

int suma(int arr[], int tam)
{
   if (tam == 0)
   {
      return 0;
   }
   return suma(arr, tam-1) + arr[tam-1];
}

char decasteo(int numero){
    char temp = static_cast<char>(numero);
    return temp;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


void ordenar(char arr[4][9]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            if(casteo(arr[i][j]) > casteo(arr[i+1][j])){
                    char *temp = arr[i];
                    *(arr[i]) = *(arr[i+1]);
                    *(arr[i+1]) = *temp;
            }
        }
    }

}



int main(){


    char arreglo_cadenas[4][9] = {"verde", "rojo", "naranja","amarillo"};


    char temp = arreglo_cadenas[1][4];
    arreglo_cadenas[1][4] = arreglo_cadenas[2][7];
    arreglo_cadenas[2][7] = temp;


    cout << arreglo_cadenas[1] << endl;

    ordenar(arreglo_cadenas);

    //for (int i = 0; i < 4; i++)
       // cout << arreglo_cadenas[i] << "\n";

    int arr1[] = {3,3,3,3,3,3,3};

    cout << suma(arr1, 7);

    return 0;
}
