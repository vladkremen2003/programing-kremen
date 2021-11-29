#include <stdlib.h>
int arr(int n, int x[]){
  int k = 0;
  for(int i = 0; i < 5; i++){
    for(int j = i; j < 5; j++ ){
      if (x[i] < x[j]) {
        k++;
      }
    }
    }
  return k;
}
int main(){
  int m = 5;
  int X[m];
  for(int a = 0; a < m; a++){
    X[a] = rand() % 100;
  }
  int res = arr(m, X);
return 0;
}
