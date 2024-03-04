//
//#include <stdio.h>
//void main() {
//	int value1 = 5, value2 = 15;
//	int* p1, * p2;
//	p1 = &value1;
//	p2 = &value2;
//	*p1 = 10;
//	*p2 = *p1;
//	p1 = p2;
//	*p1 = 20;
//	printf("value1 == %d and value2 == %d", value1, value2);
//
//}

//
//#include<stdio.h> 
//#define SIZE 7
//
//void main() {
//
//    int arr[] = { 1,2,3,4,5,6,7 };
//    //int array[SIZE];
//    int i = 0;
//
//    int* ptr;
//    ptr = &arr[6]; // ptr=arr;
//
//
//    for (i = 0; i < SIZE; i++) {
//        printf("%d  ", *ptr--);
//        
//    }
//
//}
//
//#include <time.h>
//#include <stdlib.h>
//#include <stdio.h> 
//
//#define SIZE 7
//
//void main() {
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//    int i = 0;
//
//    int* ptr;
//    ptr = &arr[0];
//
//    srand(time(NULL)); 
//
//
//
//    for (i = 0; i < SIZE; i++) {
//        printf("%d ", *(ptr + rand() % SIZE)); 
//    }
//}

//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 20
//
//void main()
//{
//
//	// declare 2 arrays size 20
//	char str1[SIZE] = "\0", str2[SIZE] = "\0";
//
//
//	int i;
//
//	//str1[0] = '\0';
//	//str2[0] = '\0';
//
//
//	// input 5 times in a loop a string
//	for (i = 1; i <= 5; i++) {
//
//		puts("Enter a string: ");
//
//		gets_s(str1);
//
//		// keep longest string
//		if (strlen(str1) > strlen(str2))
//			strcpy_s(str2, str1);
//
//	}
//
//	// display longets string
//	puts(str2);
//
//}
//
//#include<stdio.h>
//#include <string.h>
//
//
//
//int polindrum(int num[]) {
//
//	int i;
//	int j = sizeof(num) / sizeof(num[0]);
//	for (i = 0; i < j; i++) {
//		if (num[i] != num[j - i - 1]) {
//			return 0;
//		}
//		
//
//	}
//
//	return 1;
//}
#include <stdio.h>


int fibo(int num) {

    if (num < 0) {
        return false;
    }
    int c;
    int a = 0;
    int b = 1;

    while (b < num)
    {
        int c = a + b;
        b = c;
        a = b;
    }
    return num == b;
}

int main()
{

    fibo(7);
    if (fibo(7) == 1) {
        printf("good fibo");
    }
    else
    {
        printf("not fibo");

    }
    return 0;

}
