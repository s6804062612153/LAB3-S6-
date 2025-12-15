#include <stdio.h>
int main() {
	int score,need;
	scanf("%d",&score);
	if(score>=0){
		if(score<=100){
			if (score>=68){
				if (score>=75){
					if(score>=85){
						printf("A");
					}
					else
						printf("B");
				}
				else
					printf("C ");
					need=(75-score);
					printf("%d",need);
			}
			else
				if(score>=63){
					printf("D");
				}
				else
					printf("F");
		}
		else
		printf("Error");
	}
	else
		printf("Error");
}
	
