// gcc -o reverse_demo_s -s reverse_demo.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char* my_itoa(int val, int base){
	
	static char buf[32] = {0};
	
	int i = 30;
	
	for(; val && i ; --i, val /= base)
	
		buf[i] = "0123456789abcdef"[val % base];
	
	return &buf[i+1];
	
}

int main() {

	printf("Welcome to Super BIRD Software!!!\n");
	printf("You NEED to pay for an access token to open this VALUABLE software~~~\n");

	int ak = 0;
	for(int i = 0; i < 20; i++) {
		if(i % 3 == 0) {
			ak++;
		} else if(i % 3 == 1) {
			ak ^= i;
		} else {
			ak *= i;
			ak--;
			ak /= 3;
		}
	}

	// printf("ak = %d\n", ak);

	char *s;
	s = (char *)malloc(sizeof(char *) * 10);
	s = my_itoa(ak, 16);
	// printf("len: %d\n", (int)strlen(s));
	// printf("s : %s\n", s);

	char *flag;
	flag = (char *)malloc(sizeof(char *) * 20);
	for(int i = 0; i < 20; i++) {
		flag[i] = '\0';
	}
	flag[20-2] = s[0];
	flag[20-3] = s[1];
	flag[20-4] = s[2];
	flag[20-5] = s[3];

	flag[14] = '!';
	flag[13] = 'D';
	flag[12] = 'R';
	flag[11] = 'I';
	flag[10] = 'B';

	flag[4] = '{';
	flag[3] = 'G';
	flag[2] = 'A';
	flag[1] = 'L';
	flag[0] = 'F';

	flag[9] = 'A';
	flag[8] = 'T';
	flag[7] = 'O';
	flag[6] = 'G';
	flag[5] = 'U';

	flag[19] = '}';

	while(1) {
		sleep(15);
		char ss[20];
		printf("Enter Access Key: ");
		scanf("%20s", ss);
		// printf("Flag: %s\n", flag);
		// printf("ss: %s\n", ss);
		if(strncmp(ss, flag, 20) == 0) {
			system("curl parrot.live");
			break;
		} else {
			printf("Nahhh! Wrong Key...\n");
			printf("Please pay in order to get the right key!!!\n");
		}
	}

	printf("That is our secret parrot for that will make your wish come true!!!");

	return 0;
}


