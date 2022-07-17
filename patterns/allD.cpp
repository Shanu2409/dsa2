#include <iostream>
using namespace std;

int main() {
	string arr[20][20] = {"  "};
	
	for(int i = 0; i<20; i++){
		for(int j = 0; j < 20; j++){
			arr[i][j] = " ";
		}
	}
	
	
	arr[0][9] = "*";
	arr[1][8] = arr[1][9] = arr[1][10] = arr[2][7] = arr[2][8] = arr[2][9] = arr[2][10] = arr[2][11] = arr[3][6] = arr[3][7] = arr[3][8] = arr[3][9] = arr[3][10] = arr[3][11] = arr[3][12] =  "*";
	arr[4][8] = arr[4][9] = arr[4][10] = arr[5][8] = arr[5][9] = arr[5][10] = arr[6][8] = arr[6][3] = arr[6][9] = arr[6][10] = arr[6][15] = arr[7][8] = arr[7][15] = arr[7][16] = arr[7][3] = arr[7][2] = arr[7][9] = arr[7][10] = "*" ;
	
	for(int i = 1; i<18; i++){
		if(i == 8 || i == 9 || i == 10){
			continue;
		}
		arr[8][i] = arr[10][i] = "*";
		
	}
	
	for(int i = 0; i<18; i++){
		if(i == 8 || i == 9 || i == 10){
			continue;
		}
		arr[9][i] = "*";
		
	}
	
	arr[9][18] = "*";
	
	
	arr[11][2] = arr[11][3] = arr[11][8] = arr[11][9] = arr[11][10] = arr[11][15] = arr[11][16] = "*";
	
	
	
	for(int i = 0; i<18; i++){
		if(i==3 || i==8 || i==9 || i==10 || i==15){
			arr[12][i] = "*";
		}
		
		if(i==8 || i==9 || i==10){
			arr[12][i] = arr[13][i] = arr[14][i] = "*";
		}
		
		if(i==7 || i==8 || i==9 || i==6 || i==10 || i==11 || i==12){
			arr[15][i]= "*";
		}
		
		if(i==8 || i==9 || i==10 || i==7 || i==11){
			arr[16][i]= "*";
		}
		
		if(i==8 || i==9 || i==10){
			arr[17][i]= "*";
		}
		if(i==9){
			arr[18][i]= "*";
		}
	}
	
	
	
	
	
	
	
	
	for(int i = 0; i<20; i++){
		for(int j = 0; j < 20; j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
