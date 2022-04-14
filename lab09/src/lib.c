/**
* @file lib.c
* @brief файл с демонстрацією роботи для знаходження НСД
*
* @author Kremen V.
* @date 20-2-2021
* @version 156.9
*/
#include "lib.h"
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
