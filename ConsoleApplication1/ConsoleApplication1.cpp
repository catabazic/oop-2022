#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string.h>
#include <stdio.h>

//2.
/*
int convert(char s[300]) {
	int num = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[1] > '0' && s[1 < '9']) {
			num = num * 10 + (int(s[i])-48);
		}
	}
	std::cout << num<<" ";
	return num;
}

int main()
{
	int s = 0;
	char valoare[300];
	FILE* pFile;
	pFile = fopen("text.txt", "r");
	if (pFile == NULL) {
		return 0;
	}
	while (fgets(valoare ,300 , pFile)) {
		int n = convert(valoare);
		s = s + n;
	}
	std::cout << s;

	fclose(pFile);
	return 0;
}
*/


//3.

/*
char* imparte(char m[200]) {
	char *p,*c, sep[] = " ",t[100];
	int a, b;
	int cmp;
	p = strtok(m, sep);
	while (p) {
		//a = strlen(p);
		printf(" % s \n", p);		
		c = strtok(NULL, sep);
		printf(" % s \n", c);
		if(c) {
			cmp=strcmp(p, c);
			if (cmp > 0) {
				strcpy(t, p);
				strcpy(t, " ");
				strcpy(t, c);
				strcpy(t, " ");
			}
			else if (cmp < 0) {
				strcpy(t, c);
				strcpy(t, " ");
				strcpy(t, p);
				strcpy(t, " ");
			}
			else {
				if (c[1] > p[1]) {
					strcpy(t, p);
					strcpy(t, " ");
					strcpy(t, c);
					strcpy(t, " ");
				}
				else {
					strcpy(t, c);
					strcpy(t, " ");
					strcpy(t, p);
					strcpy(t, " ");
				}

			}

		}
		p = c;
	}
	std::cout << t;
	return t;
}


int main() {
	char s[100] = "I went to the library yesterday";
	char m[200], sep[]=" ";
	//scanf("%s", m);
	imparte(s);

	return 0;
}
*/



//4.
/*
bool isPrime(int n)
{
	if (n == 1)
		return false;
	for (int tr = 2; tr < n / 2; tr++)
		if ((n % tr) == 0)
			return false;
	return true;
}

int main()

{
	int n;
	std::cout << "Enter a number:";
	std::cin >>n;
	if (isPrime(n))
		std::cout << n << " is prime !";
	else
		std::cout << n << " is NOT prime !";
	return 0;

}
*/