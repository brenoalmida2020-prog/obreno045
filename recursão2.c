#include <stdio.h>

long fat(long n) {
  if(n == 0) {
    return 1;
  }else{
    return n * fat(n - 1);
  }
}
void imprimirfatoriais(int vetor[10], int index, int tamanho){
  if(index == tamanho) {
    return;
  }
    printf("vetor[%d] = %d -> fatorial %1d\n",index,vetor[index],fat(vetor[index]));
      imprimirfatoriais(vetor, index + 1,tamanho);
}
int main() {
  int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

      imprimirfatoriais(vetor,0,10);

 return 0;
}
