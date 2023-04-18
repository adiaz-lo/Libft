/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2023 17:05:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dr. Fritz Mehner (mn), mehner@fh-swf.de
 *        Company:  FH Südwestfalen, Iserlohn
 *
 * =====================================================================================
 */
int token_counter(char const *s, char c);

int main(int argc, char *argv[]){
	printf("NPalabras %d\n", token_counter(argv[1], ' '));
}
