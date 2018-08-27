#include <cstdio>
#include <string.h>

bool c;
int t;
char n[1001];
int main() {
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%s", n, 1001);
		for (int i = 0; i < strlen(n) / 2; i++) {
			if (n[i] == n[strlen(n) - i - 1]) c = true;
			else c = false;
		}
		if (c) printf("Do-it");
		else printf("Do-it-Not");
	}
	return 0;
}
/*
#include <iostream>
#include <string.h>
using namespace std;

bool c;
int t;
char n[1001];
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < strlen(n) / 2; i++) {
			if (n[i] == n[strlen(n) - i - 1]) c = true;
			else c = false;
		}
		if (c) cout << "Do-it" << endl;
		else cout << "Do-it-Not" << endl;
	}
	return 0;
}
*/