#include <iostream>
using namespace std;

void calcularFuerza(void);

int main() 
{  
 //matrizes ingresadas por el ususario

 double** matA;
 double** matB;

 //llenar A

 double**matA=new double*[4]; 
 int i;
  for (i=0; i<4; i++)
{
   mat[i]=new double[5];
}
  int j;
   for (i=0; i<4; i++)
{
   for (j=0; j<5; j++)
{
   mat[i][j]=i*j;
   cout<<mat[i][j]<<"";
}
   cout<<endl; 
     
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









