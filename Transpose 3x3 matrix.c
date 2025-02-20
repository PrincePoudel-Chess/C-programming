//WAP which receives 3x3 matrix and transpose it.

#include<stdio.h>


int main(){
	int i,j,mat[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("matrix[%d][%d]:",i,j);
			scanf("%d",&mat[i][j]);
		}
		
	}
	transpose(mat);
	getch();
	return 0;
	

	
		
	
	
	
	
	
}


int transpose(int mat[3][3]){
//	Transpose
	int trans[3][3];
	int i,j,temp;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			trans[i][j]= mat[j][i];
			
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	
	
	
}
