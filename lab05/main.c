int main(){
int a,b,NOD;
a = 2048;
b = 798;
do{
if (a >= b){
                a %= b;
                }
        else{
		 b %= a;
}
}
while(a != 0);

if(a == 0){
	NOD = b;
}
else{
	NOD = a;
}
return 0;
}

