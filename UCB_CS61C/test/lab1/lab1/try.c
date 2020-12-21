#include <stdio.h>
void add_one(int **x) {
	*x = *x + 1;
}
void test1() {
	int a[2] = { 13, 67 };
	int i = 0;
	int *p = a;
	add_one(&p);
	printf("%d\n", *p);
	for (i = 0; i < 2; i++) {
		printf("%d\n", a[i]);
	}
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(a));
	double b = 0.228;
	printf("%d\n", sizeof(b));
	int size_of_a = sizeof(a) / sizeof(a[0]);
	printf("³¤¶Èa: %d\n", size_of_a);
}
void test2() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int *p = &a[0];
	int *q = &a[10];
	int sum = 0;
	while (p != q) {
		sum += *p;
		p += 1;
	}
	printf("%d\n", sum);
}
void test3() {
	int i, j;
	int *ipr = malloc(4 * sizeof(int));
	*(ipr + 2) = 4;
	printf("%i\n", &ipr[0]);
	printf("%i\n", &ipr[1]);
	free(ipr);
}
int *test4(int p) {
	p = p + 1;
	return p;
	
}
void increment(char* string, int n) {
	char *curr = string;
	for (int i = 0; i < n; i++) {
		*curr = *curr + 1;
		curr++;
	}
}
int main() {
	char s[] = "jsklfjoiasjof";
	printf("%s\n", s);
	increment(s, 6);
	printf("%s\n", s);
	return 0;
}