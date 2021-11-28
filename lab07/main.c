int nod(int x, int y){
  int NOD;
  while(x != 0){
    if(x > y){
      x %= y;
    }
      else {
        y %= x;
      }
  }
  if(x == 0){
    NOD = y;
  }
  else{
    NOD = x;
  }
  return NOD;
}

int main(){
  int N, a, b;
  a = 248;
  b = 128;
  N = nod(a, b);
return 0;
}
