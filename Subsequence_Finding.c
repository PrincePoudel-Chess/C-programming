#include<stdio.h>
#include<string.h>
//To determine whether a subsequence exists within a larger string FOR Example (ve Rona) exists on "I love Ronaldo"
int main(){
	int i,j,count=0;
	char string[50];
	char subsequence[50];
	
//	String
	printf("\nEnter the string:");
	scanf(" %[^\n]s", string);
	
	int l1 = strlen(string);
	
	
//	Subsequence
	printf("\nEnter the subsequence:");
	scanf(" %[^\n]s",subsequence);
				
	int l2= strlen(subsequence);
	
	if(l2>l1){
		printf("\nNot Found.");
		return 0;}
	
	int subindex =0;
	
	
	for(i =0;i<l1;i++){
		if(string[i]==subsequence[subindex]){
			subindex++;
			if (subindex ==l2){
				count++;
				break;
			}
					
		}
		
		
		
		
	}
	if(count>0){
		printf("\nFound.");
	}
	else{
		printf("\nNot-Found.");
	}
	
		
		
	}
