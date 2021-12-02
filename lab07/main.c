#include <stdlib.h>
int arr(int n, int x[]);
int nod(int number1, int number2);
int lab06(int array[], int p);
void pri_arr (int ncol, int nlines, int ao[]) {
  int io, jo;
  for(io = 0; io < nlines; io++)
    for (jo = 0; jo < ncol; jo++)
    ao[12] = ao[io * ncol + jo];
}
int main(){
  int m = 7;
  int X[m];
  for(int a = 0; a < m; a++){
    X[a] = rand() % 100;
  }
  int res = arr(m, X);

  int NUM1 = 2048;
  int NUM2 = 788;
  int res2 = nod(NUM1,NUM2);

  int K = 7;
  int fir[] = {1, 2, 5, 6, 8, 9, 0};
  int arr[7] = {0};
  for(int v = 0; v < K; v++){
   arr[v] = lab06(fir, K);
  }
  int ao[3][4] = {{1, 2, 3, 4},
         {11, 12, 13, 14},
         {21, 22, 23, 24}};
  pri_arr(4, 3, &ao[0][0]);
return 0;
}
int arr(int n, int x[]){
  int k = 0;
  for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
      if (x[i] < x[j]) {
        k++;
      }
    }
    }
  return k;
}
int nod(int number1, int number2){
int NOD;
while(number1 != 0){
	if(number1 > number2){
		number1 %= number2;
	}
	else{
		number2 %= number1;
	}
}

if(number1 == 0){
	NOD = number2;
}
else{
	NOD = number1;
}
return NOD;
}
int lab06(int array[],int p){
  int B = 0;
  for(int a = 0; a < p; a++){
    for(int b = 0; b < p; b++){
      if(array[a] < array[b]){
         B = array[b];
      }
    }
  }
  return B;
}
