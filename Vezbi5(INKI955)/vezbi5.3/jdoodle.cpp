#include <iostream>
#include <cmath>
 
using namespace std;
 
int Addition(int a, int b)
{
    return a + b;
}
 
int Subtraction(int a, int b) 
{
    return a - b;
}
 
float Division(int a, int b) 
{
    return static_cast<float>(a) / static_cast<float>(b);
}
 
double Power(int a, int b)
{
    return pow(a, b);
}
 
void calculate(void *result, int A, int N, int (*op)(int, int))
{
    int *r = reinterpret_cast<int*>(result);
    *r = op(A, N);
}
 
void calculate(void *result, int A, int N, float (*op)(int, int))
{
    float *r = reinterpret_cast<float*>(result);
    *r = op(A, N);
}
 
void calculate(void *result, int A, int N, double (*op)(int, int))
{
    double *r = reinterpret_cast<double*>(result);
    *r = op(A, N);
}
 
int main() 
{
    int A = (int)'A';
    int N = (int)'N'; 
    int intRezultat;
    float floatRezultat;
    double doubleRezultat;
 
    calculate(&intRezultat, A, N, &Addition);
    cout<<A<<" + "<<N<< " = "<<intRezultat<<endl;
 
    calculate(&intRezultat, A, N, &Subtraction);
    cout<<A<<" - "<<N<<" = "<<intRezultat<<endl;
 
    calculate(&floatRezultat, A, N, &Division);
    cout << A<<" / "<<N <<" = "<<floatRezultat<<endl;
 
    calculate(&doubleRezultat, A, N, &Power);
    cout<<A<<" ^ "<<N<<" = "<<doubleRezultat<<endl;
    return 0;
 
}