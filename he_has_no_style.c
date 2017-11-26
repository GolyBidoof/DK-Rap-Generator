#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
//check the size of the array
#define NOELMS(X) (sizeof(X) / sizeof(X[0]))
//why doesn't c have bools :angery:
typedef int bool;
#define true 1
#define false 0

char* dkArray[] = {"so", "theyre", "finally", "here", "performing", "for", "you",
"if", "you", "know", "the", "words", "you", "can", "join", "in", "too",
"put", "your", "hands", "together", "if", "you", "want", "to", "clap",
"as", "we", "take", "you", "through", "this", "monkey", "rap",

"hes", "the", "leader", "of", "the", "bunch", "you", "know", "him", "well",
"hes", "finally", "back", "to", "kick", "some", "tail",
"his", "coconut", "gun", "can", "fire", "in", "spurts",
"if", "he", "shoots", "ya", "its", "gonna", "hurt",
"hes", "bigger", "faster", "and", "stronger", "too",
"hes", "the", "first", "member", "of", "the", "dk", "crew",

"this", "kongs", "got", "style", "so", "listen", "up", "dudes",
"she", "can", "shrink", "in", "size", "to", "suit", "her", "mood",
"shes", "quick", "and", "nimble", "when", "she", "needs", "to", "be",
"she", "can", "float", "through", "the", "air", "and", "climb", "up", "trees",
"if", "you", "choose", "her", "youll", "not", "choose", "wrong",
"with", "a", "skip", "and", "a", "hop", "shes", "one", "cool", "kong",

"he", "has", "no", "style", "he", "has", "no", "grace",
"this", "kong", "has", "a", "funny", "face",
"he", "can", "handstand", "when", "he", "needs", "to",
"and", "stretch", "his", "arms", "out", "just", "for", "you",
"inflate", "himself", "just", "like", "a", "balloon",
"this", "crazy", "kong", "just", "digs", "this", "tune",

"hes", "back", "again", "and", "about", "time", "too",
"and", "this", "time", "hes", "in", "the", "mood",
"he", "can", "fly", "real", "high", "with", "his", "jetpack", "on",
"with", "his", "pistols", "out", "hes", "one", "tough", "kong",
"hell", "make", "you", "smile", "when", "he", "plays", "his", "tune",
"but", "kremlings", "beware", "cause", "hes", "after", "you",

"finally", "hes", "here", "for", "you",
"its", "the", "last", "member", "of", "the", "dk", "crew",
"this", "kongs", "so", "strong", "it", "isnt", "funny",
"can", "make", "a", "kremling", "cry", "out", "for", "mummy",
"can", "pick", "up", "a", "boulder", "with", "relative", "ease",
"makes", "crushing", "rocks", "seem", "such", "a", "breeze",
"he", "may", "move", "slow", "he", "cant", "jump", "high",
"but", "this", "kongs", "one", "hell", "of", "a", "guy",

"cmon", "cranky", "take", "it", "to", "the", "fridge",

"walnuts", "peanuts", "pineapple", "smells",
"grapes", "melons", "oranges", "and", "coconut", "shells",
"ahh", "yeah"};

//Dynamic size of the array in C ;_;
int sizeOfDKArray = NOELMS(dkArray);

//Skips in the code
bool everySecond = false;
bool skip = false;
bool skipALot = false;

//Basically a number used for accessing wordNumberDependencies[] 
int globalCounter = 0;

//I think I counted the amount of words in every line xD
int wordNumberDependencies[] = {7, 9, 9, 8,
                10, 7, 7, 7, 6, 8,
                8, 9, 9, 10, 8, 10,
                8, 6, 7, 8, 6, 7,
                7, 7, 9, 8, 9, 7,
                5, 8, 7, 8, 8, 7, 8, 8,
                7,
                4, 6, 2
};

//Defining function in advance
void printVerses(int sizeOfVerse);

void printRap() {
	//Picking a random seed
	srand(time(NULL));
	//Legit part of the song
	printVerses(4);
	printVerses(6);
	printVerses(6);
	printVerses(6);
	//Okay stairs start up here
	printVerses(6);
	printf("Huh!\n");
	skip=true;
	printVerses(8);
	//Aaand the final part
	printVerses(1);
	printf("\n");
	printVerses(3);
	globalCounter-=3;
	printf("\n");
	printVerses(3);
}
void printVerses(int sizeOfVerse) {
	for (int i=0; i<sizeOfVerse; i++) {
		for (int j=0; j<wordNumberDependencies[globalCounter]; j++) {
			//Just print j random words
			printf("%s ", dkArray[rand()%(sizeOfDKArray)]);
		}
		//Advance counter of lines and print new line
		globalCounter++;
		printf("\n");
	}
	
	//HUH
	if(!skipALot) printf("Huh!\n\n");

	//DK! Donkey Kong!
	if(!skip) {
		char* word1 = dkArray[rand()%(sizeOfDKArray)];
		char* word2 = dkArray[rand()%(sizeOfDKArray)];
		printf("%c%c! %s %s!\n", toupper(word1[0]), toupper(word2[0]), word1, word2);
		
		//DK! Donkey Kong is here!
		if(everySecond==false) everySecond=true;
		else {
			printf("%c%c! %s %s is here!\n", toupper(word1[0]), toupper(word2[0]), word1, word2);
			everySecond=false;
		}
		
		//And a New Line
		printf("\n");
	//That just determines the flow that if the flag skip is toggled, in the next iteration it skipsALot too xD
	} else skipALot=true;
}

int main() {
	//woop woop
	printRap();
}

