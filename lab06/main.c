int main(){
int A[2][2] = {
	{1, 2},
	{3, 4}
};
int B[2][2];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			B[i][j] = 0;
			for(int c = 0; c < 2; c++){
				B[i][j] = B[i][j] + (A[i][c] * A[c][j]);
}
}
}

return 0;
}
