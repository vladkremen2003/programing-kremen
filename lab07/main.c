#include <stdlib.h>
int arr(int n, int x[]);
int main(){
  int m = 3;
  int X[m];
  for(int a = 0; a < m; a++){
    X[a] = rand() % 100;
  }
  int res = arr(m, X);
return 0;
}
int arr(int n, int x[]){
  int k = 0;
  for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++ ){
      if (x[i] < x[j]) {
        k++;
      }
    }
    }
  return k;
}
