#include <stdio.h>

long fat(long n) {
    if(n == 0) {
        return 1;
    }else{
        return n * fat(n - 1);
    }
}
int main () 
  int num;

      printf("digite um numero");
      scanf("%1d",&num);

      printf("fatorial de %1d eh : %d",num,fat(num));

}
