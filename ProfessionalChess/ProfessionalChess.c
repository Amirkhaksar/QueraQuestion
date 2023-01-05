#include <stdio.h>

int main()
{
	int chessPieces[6];
	scanf("%d %d %d %d %d %d",
	      &chessPieces[0], 
	      &chessPieces[1],
	      &chessPieces[2],
	      &chessPieces[3],
	      &chessPieces[4],
	      &chessPieces[5]); 
	printf("%d %d %d %d %d %d",
	       1 - chessPieces[0],
	       1 - chessPieces[1],
	       2 - chessPieces[2],
	       2 - chessPieces[3],
	       2 - chessPieces[4],
	       8 - chessPieces[5]);
}
