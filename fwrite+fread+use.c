#include<stdio.h>

int main(){
	int b[10],i;
	int a[10] = {2,4,1,5,6,7,9,2,5,0};
	FILE *file = fopen("Alphabets.bin","wb");
	fwrite(a,sizeof(a),1,file);
	fclose(file);
	file = fopen("Alphabets.bin","rb");
	fread(b,sizeof(a),1,file);
	fclose(file);
	for(i=0;i<10;i++){
		printf("\n%2d",b[i]);
	}
	
	
	
	
}
