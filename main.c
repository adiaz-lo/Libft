#include <stdio.h>

int count_words(char const *s, char c);

int main(int argc, char *argv[]){
	printf("Token Number: %d\n", count_words(argv[1], ' '));
}
