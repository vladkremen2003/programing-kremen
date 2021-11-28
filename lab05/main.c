int main(){
int a, b, c, d, NOD;
a = 560;
b = 420;
for(a |= 0; a %= b; b %= a)
c = 2048;
d = 798;
do{
if (c >= d){
                c %= d;
                }
        else{
		 c %= d;
}
}
while(c != 0);

if(c == 0){
	NOD = d;
}
else{
	NOD = c;
}
return 0;
}

