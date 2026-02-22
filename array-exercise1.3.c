#include<stdio.h>
#include<conio.h>
#define r 3
#define c 4

int z[r][c] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
int main()
{
	int a, b, d = 999;
	for(a=0;a<r;++a){
		for(b=0;b<d;++b){
		if(z[a][b]<c){
			d=z[a][b];
          printf("%d",d);  
        }
        }
        }



return 0;
}
