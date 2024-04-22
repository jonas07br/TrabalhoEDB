#include <iostream>
#include <vector>

using namespace std;

/*Dado um vetor A de tamanho N, ordenado de forma crescente:
● Implemente o algoritmo de busca binária na forma iterativa. */
void busca(vector <int> &vetor,int n, int x){
    int li = 0;
    int lf = n-1;
    int meio = 0;
    while (li<=lf){
        meio=(li+lf)/2;
        cout << "Limite Inicio;" << li<< endl;
        cout << "Limite Final;" << lf << endl;
        cout << "Meio;" << meio << endl;
        cout << "-----------------" << endl;
        
        if(vetor[meio]==x){
            cout << "encontrado no indice;" << meio << endl;
            break;    
        }
        if(vetor[meio]<x){
            
            li=meio+1;
        }
        if(vetor[meio]>x){
            lf=meio-1;
        }
    }
}
int main(){
    vector <int> vetor {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    cout << "Informe o valor a ser buscado" << endl;
    int x = 0;
    cin >> x;
    busca(vetor,vetor.size(),x);
    





    return 0;
}