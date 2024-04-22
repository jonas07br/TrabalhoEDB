#include <iostream>

using namespace std;

/*Dado um valor inteiro positivo N.
● Implemente o algoritmo iterativo de fibonacci. De modo a
retornar o valor inteiro X na posição N da sequência de
fibonacci.
*/
int main(){
    int n = 0;
    cout << "Informe o N" << endl;
    cin >> n;
    int p=0;
    int s=1;
    int r=0;
    for(int i = 0;i<n;i++){
        r=p+s;
        s=p;
        p=r;
        
    }
    cout << r << endl;
}