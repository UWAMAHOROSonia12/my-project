#include<stdio.h>
int main(){
	int marks[2][2]={{23,78},{89,90}};
int i,j;
//marks[0][0]=23;
//marks[0][1]=78;
//marks[1][0]=89;
//marks[1][1]=90;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
	}
}
	
	return 0;
}
