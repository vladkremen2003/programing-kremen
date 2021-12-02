int main(){
const int kol = 2;
int mas1[2][2] = {
	{1, 2},
	{3, 4}
};
int mas2[kol][kol];
	for(int st = 0; st < kol; st++){
		for(int str = 0; str < kol; str++){
			mas2[st][str] = 0;
			for(int c = 0; c < kol; c++){
				mas2[st][str] = mas2[st][str] + (mas1[st][c] * mas1[c][str]);
}
}
}

return 0;
}
