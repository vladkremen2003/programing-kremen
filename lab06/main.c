int main(){
const int N = 2;
int A[2][2] = {
	{1, 2},
	{3, 4}
};
int B[N][N];
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			B[i][j] = 0;
			for(int c = 0; c < N; c++){
				B[i][j] = B[i][j] + (A[i][c] * A[c][j]);
}
}
}

return 0;
}
