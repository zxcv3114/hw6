#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct _card
{
	const char *face;
	const char *suit;
}card;
void fillDeck(card*const wdeck, const char *wface[], const char * wsuit[]);
void shuffle(card * const wdeck);
void deal(const card * const wdeck);
int main()
{
	card deck[52];
	const char *face[] = { "ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };
	const char *suit[] = { "Hearts","Diamonds","Clubs","Spades" };
	srand(time(0));
	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);

	system("pause");
}
void fillDeck(card*const wdeck, const char *wface[], const char * wsuit[])
{
	int i;
	for (i = 0; i <= 51; i++)
	{
		wdeck[i].face = wface[i % 13];
		wdeck[i].suit = wsuit[i % 4];
	}
}
void shuffle(card * const wdeck)
{
	int i, j;
	card temp;
	for (i = 0; i <= 51; i++)
	{
		j = rand() % 52;
		temp = wdeck[i];
		wdeck[i] = wdeck[j];
		wdeck[j] = temp;

	}
}
void deal(const card * const wdeck)
{
	int i;
	for (i = 0;i <= 51;i++)
	{
		printf("%5s of %-8s%s", wdeck[i].face, wdeck[i].suit, (i + 1) % 4 ? " " : "\n");
	}
}