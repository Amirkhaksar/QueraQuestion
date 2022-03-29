#include <stdio.h>

int main()
{
	int chessPieces[6];
	scanf("%d", &chessPieces[0]);
	scanf("%d", &chessPieces[1]);
	scanf("%d", &chessPieces[2]);
	scanf("%d", &chessPieces[3]);
	scanf("%d", &chessPieces[4]);
	scanf("%d", &chessPieces[5]);
    
	printf("%d %d %d %d %d %d",
		1 - chessPieces[0],
		1 - chessPieces[1],
		2 - chessPieces[2],
		2 - chessPieces[3],
		2 - chessPieces[4],
		8 - chessPieces[5]
	);