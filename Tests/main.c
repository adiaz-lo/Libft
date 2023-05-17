#include <stdio.h>

int count_words(char const *s, char c);

int main(int argc, char *argv[]){
	char	frase[] = "Alberto Díaz Lobezno";
	char	**vuelta;

	vuelta = ft_split(frase, ' ');
	printf("Split: %s\n", vuelta); 
	//printf("Token Number: %d\n", count_words(argv[1], ' '));
}
