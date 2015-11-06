#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int r = 0;
	for(int i = 0; i < 24000000; i++){
		int add = 0;
		for(int j = 0; j < 25; j++){
			add *= rand();
		}
		r += add;
	}
	printf("%i", r/2);
}