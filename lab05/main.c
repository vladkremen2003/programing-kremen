int main(){
int number1, number2, NOD;
number1 = 2048;
number2 = 798;
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
return 0;
}
