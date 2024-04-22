#include <iostream>
#include <vector>
using namespace std;
/*DADO UM VETOR A DE TAMANHO N,COM VALORES INTEIROS E UM VALOR INTEIRO X

-IMPLEMENTE UM ALGORITMO DE BUSCA SEQUENCIAL RECURSIVO QUE RETORNA O INDICE DO VETOR CASO X SEJA ENCONTRADO E -1 CASO CONTRARIO;

*/
int buscar(vector <int> &vetor,int tam,int x){
  if (vetor[tam]==x){
    return tam;
  }
  if(vetor[tam]==1){
    return -1;
  }
  
  return buscar(vetor,tam-1,x);
  
}

int main(){
  int x;
  vector <int> vetor {1,2,3,4,5,6,7,8,9};
  cout << "informe o X" << endl;
  cin >> x;
  int result = buscar(vetor,vetor.size(),x);
  cout << result << endl;


  





























  return 0;
}
