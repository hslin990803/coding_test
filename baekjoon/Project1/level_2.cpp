// #1130
//#include <stdio.h>
//int main() {
//	int a, b;
//
//	scanf("%d %d", &a, &b);
//
//	if (a > b) {
//		printf(">");
//	}
//	else if (a < b) {
//		printf("<");
//	}
//	else if (a == b) {
//		printf("==");	
//	}
//
//	return 0;
//}

// #9498
//#include <stdio.h>
//int main() {
//	int a;
//
//	scanf("%d", &a);
//
//	if (a <= 100 && a >= 90) {
//		printf("A");
//	}
//	else if (a <= 89 && a >= 80) {
//		printf("B");
//	}
//	else if (a <= 79 && a >= 70) {
//		printf("C");
//	}
//	else if (a <= 69 && a >= 60) {
//		printf("D");
//	}
//	else {
//		printf("F");
//	}
//
//	return 0;
//}

// #2753
//#include <stdio.h>
//int main() {
//	int a;
//
//	scanf("%d", &a);
//
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 4 == 0 && a % 400 == 0)) {
//		printf("1");
//	}
//	else {
//		printf("0");
//	}
//
//	return 0;
//}

// #14681
//#include <stdio.h>
//int main() {
//	int x, y;
//
//	scanf("%d", &x);
//	scanf("%d", &y);
//
//	if (x > 0 && y > 0) {
//		printf("1");
//	}
//	else if (x > 0 && y < 0) {
//		printf("4");
//	} 
//	else if (x < 0 && y > 0) {
//		printf("2");
//	}
//	else if (x < 0 && y < 0) {
//		printf("3");
//	}
//
//	return 0;
//}