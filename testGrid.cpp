#include <iostream>
using namespace std;

int main(){
	//initalize the grid
	int grid[100][100];
	int x,y;
	for (x = 0; x<100;x++){
		for (y = 0; y<100;y++){
			grid[x][y]=0;	
		}
	}
	int i,j;
	for(i = 0;i<100;i++){
		for(j = 0; j<100;j++){
			cout << grid[i][j] <<  " ";	
		}
		cout << endl;
	}

return 0;
}
