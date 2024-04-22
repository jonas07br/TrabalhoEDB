#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

/*Dado um vetor de entrada A de tamanho N.
● Implemente um algoritmo que verifica se o vetor está
ordenado na forma crescente.*/
bool check(vector <int> &vetor,int tam){
    int i = 0;
    
    for(i=0;i<tam-1;i++){
        if(vetor[i]>vetor[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector <int> vetor{1,2,3,4,5,6,7,8,9};

    if(check(vetor,vetor.size())){
        cout << "O vetor esta ordenado" << endl;
    }

    else{
        cout << "O vetor nao esta ordenado" << endl;
    }
    cout<< endl <<"--------------------"<<endl;
    for(int i = 0;i<9;i++){
        cout << vetor[i]<<"-";
    }
    cout<< endl <<"--------------------"<<endl;



}