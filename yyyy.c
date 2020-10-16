#include <stdio.h>



int main(){
int x[2][2];
int i,j;


for(i=1;i<=2;i++){
	for(j=1;j<=2;j++){
		x[i-1][j-1] = j*i;
		
	}

}


printf("%d",x[2][2]);

return 0;
}
