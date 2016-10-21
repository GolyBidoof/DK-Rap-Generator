#include <stdio.h> 
#include <Windows.h>
void main() {
	for (;;) {
		int j = rand() % 201;
		char *arrayDK[] = { "So", "theyre", "finally", "here",
			"performing", "for", "you", "if", "you", "know",
			"the", "words", "you", "can", "join", "in",
			"too", "put", "your", "hands", "together", "if",
			"you", "want", "to", "clap", "as", "we", "take",
			"you", "through", "this", "monkey", "rap",
			"huh!!", "DK!", "Donkey", "Kong!!", "hes", "the",
			"leader", "of", "the", "bunch", "you", "know",
			"him", "well", "hes", "finally", "back", "to",
			"kick", "some", "tail", "his", "Coconut", "Gun",
			"can", "fire", "in", "spurts", "if", "he",
			"shoots", "ya", "its", "gonna", "hurt", "hes",
			"bigger", "faster", "and", "stronger", "too",
			"hes", "the", "first", "member", "of", "the",
			"DK", "crew", "Huh!","DK!", "Donkey", "Kong!",
			"DK!", "Donkey", "Kong", "is", "here!", "this",
			"Kongs", "got", "style", "so", "listen", "up",
			"dudes", "she", "can", "shrink", "in", "size",
			"to", "suit", "her", "mood", "shes", "quick",
			"and", "nimble", "when", "she", "needs", "to",
			"be", "she", "can", "float", "through", "the", 
			"air", "and", "climb", "up", "trees", "if", "you",
			"choose", "her", "youll", "not", "choose",
			"wrong", "with", "a", "skip", "and", "a", "hop",
			"shes", "one", "cool", "Kong", "Huh!", "DK!",
			"Donkey", "Kong!", "he", "has", "no", "style",
			"he", "has", "no", "grace", "this", "Kong",
			"has", "a", "funny", "face", "he", "can",
			"handstand", "when", "he", "needs", "to", "and",
			"stretch", "his", "arms", "out", "just", "for",
			"you", "inflate", "himself", "just", "like", "a",
			"balloon", "this", "crazy", "Kong", "just",
			"digs", "this", "tune", "Huh!", "DK!", "Donkey",
			"Kong!", "DK!", "Donkey", "Kong", "is", "here!" };
		printf("%s ", arrayDK[j]);
		Sleep(800);
	}
}
