/*
 * spiral.c
 *
 *  Created on: 26-May-2016
 *      Author: tanvi
 */
# include <stdio.h>

void revspiral(int n,int mat[n][n]);
int main(){
	printf("Give the matrix order(odd):");
	int n; // n is the order
	scanf("%d", &n);
	int mat [n][n];
	int x =0; int y=0;
	for(x =0; x< n; x++){
		for(y=0; y< n; y++){
			printf("element %d,%d",x,y);
			scanf("%d",&mat[x][y]);
		}
	}
	printf("Printing matrix: ");
	for(x =0; x< n; x++){
		for(y=0; y< n; y++){

			printf("%d,",mat[x][y]);

		}
	}
	printf("\nMatrix initiated.\n");
	revspiral(n,mat);

	return 0;
}

void revspiral( int n,int mat[n][n]){ // n is the order
	int mid = (n -1)/2;
		int i=mid; int j = mid; // i = row, j = column
		printf("Printing mid point, %d\n",mat[i][j]);
		int size = 1;
		while(size< n ){		// here, n is the order of matrix
			if(i!=0 && j!=0){
				int a=0; --i;
				printf("Print up, %d\n",mat[i][j]);

				for(a=0; a<size;a++){
					++j;
					printf("Print right, %d\n",mat[i][j]);
				}

				for(a=0; a<size+1;a++){
					++i;
					printf("Print down,%d\n",mat[i][j]);
				}

				for(a=0; a<size+1;a++){
					--j;
					printf("Print left, %d\n",mat[i][j]);
				}

				for(a=0; a<size+1;a++){
					--i;
					printf("Print up, %d\n",mat[i][j]);
				}

				printf("loop over");
				size=size+2;
			}
		}
		printf("Matrix over.");

}

