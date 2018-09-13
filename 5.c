#include <stdio.h>

int main() {
  int num;
  for(num=20;; num++){
    int j = 2;
    while(num%j == 0){
      j++;
      if(j == 21){
        printf("%d\n", num);
        return num;
      }
    }
  }
}
