#include <iostream>
using namespace std;

void calcularFuerza(void);

int main() 
{  
 //matrizes ingresadas por el ususario

 double** matA;
 double** matB;

 //llenar A
 cout<<"ingrese numero filas de A";
 int N;
 int M;
 cin>>(N) ;
 cout<<"ingrese numero columnas de A";
 cin>>(M);
 matA= get_Matrix(N,M);
  
//llenar B
 cout<<"ingrese numero filas de B";
 int N2;
 int M2;
 cin>>(N2); 
 cout<<"ingrese numero columnas de B";
 cin>>(M2);
 matB= get_Matrix(N2,M2);

 cout << matrix_product(matA,matB,N,M,N2,M2);
 
}
   return 0;

}

//matrix_product, esta funcion recibe como parametro dos matrices A y B junto con sus filas y columnas, y hace la multipluicacion de matriuces guardando los valores en una matriz c

   double** matrix_product(double** matA,double** matB,  int filasA, int columnasB, int filasA, int columnasB) 
{


 double**matC=new double*[filasA]; 
 int i;
  for (i=0; i< filasA; i++)
{
   matA[i]=new double[columnasB];
}

  int j;
   for (i=0; i< filasA; i++)
{
   for (j=0; j< columnasB; j++)
{
   for(k=0; k<columna A; k++)
{
   double suma;
   suma += matA[i][k] * matB[k][j];
}
   matrizC[i][j]=suma

}      
}
return matC
}


// metodo que pide una a una las componenetes de la matriz
double** get_Matrix(int N, int M)
{
double** matA;
double**matA=new double*[N]; 
 int i;
 i=N;
  for (i=0; i<4; i++)
{
   mat[i]=new double[5];
}
  int j;
  j=M;
   for (i=0; i<4; i++)
{
   for (j=0; j<5; j++)
{

   cout<<"insertar el"<< i <<""<< j << "esimo elemento";
   double var;
   cin>> var;
   matA[i][j]= var;  
}
    
}
return matA
}

