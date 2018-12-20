#include<stdio.h>
#include<stdlib.h>

typedef struct CARD {
	char *face;
	char *suit;
}card;
int main()
{
	card acard;
	card *cardPtr;
	cardPtr = &acard;
	acard.face = "Ace";
	acard.suit = "Spades";
	cardPtr = &acard;
	printf("%s %s %s\n%s %s %s\n%s %s %s\n", acard.face, "of", acard.suit, cardPtr->face, "of", cardPtr->suit, (*cardPtr).face, "of", (*cardPtr).suit);
	system("pause");
}