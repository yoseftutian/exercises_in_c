//#include<stdio.h>
//
//
//#define ROWS 3
//#define COLS 4
//
//
//
//void main() {
//
//    int arr1[ROWS][COLS];
//    int i, j;
//
//    int arr2[3][3] = { {1,2,3},
//                                {4,5,6},
//                                {7,8,9} };
//
//    for (i = 0; i < ROWS; i++)
//        for (j = 0; j < COLS; j++)
//
//            arr1[i][j] = 0;
//
//
//
//    for (i = 0; i < ROWS; i++) {
//        for (j = 0; j < COLS; j++) {
//            printf("%d  ", arr1[i][j]);
//        }
//
//        printf("\n");
//
//    }
//
//    printf("\n\n");
//
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++) {
//            printf("%d  ", arr2[i][j]);
//        }
//
//        printf("\n");
//
//    }
//
//    printf("\n\n");
//
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++) {
//            printf("%d  ", arr2[j][i]);
//        }
//
//        printf("\n");
//
//    }
//
//}
//
//

//
//#include<stdio.h>
//#include<stdlib.h>  // כדי להשתמש בפונקציה rand()
//
//#define ROWS 5
//#define COLS 5
//
//void displayValues(int arr[ROWS][COLS]) {
//    int i, j;
//
//    for (i = 0; i < ROWS; i++) {
//        for (j = 0; j < COLS; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n\n");
//}
//
//void displayDiagonal(int arr[ROWS][COLS]) {
//    // הצגת האלכסון הראשי
//    printf("Main diagonal: ");
//    for (int i = 0; i < ROWS; i++) {
//        printf("%d ", arr[i][i]);
//    }
//    printf("\n");
//
//    // הצגת האלכסון המשני
//    printf("Secondary diagonal: ");
//    for (int i = 0; i < ROWS; i++) {
//        printf("%d ", arr[i][ROWS - 1 - i]);
//    }
//    printf("\n");
//
//
//}
//
//
//int main() {
//    int arr[ROWS][COLS];
//
//    // אתחול מערך בערכים אקראיים
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            arr[i][j] = rand() % 100;  // השתמשתי ב-100 לדוגמה, תוכל לשנות את זה על פי הצורך
//        }
//    }
//
//    // הצגת הערכים במערך
//    printf("Original Array:\n");
//    displayValues(arr);
//
//    // הצגת האלכסונים
//    displayDiagonal(arr);
//
//    return 0;
//}

//#include<stdio.h>
//
//int findDifference(int num) {
//    int currentDigit, max = 0, min = 9;
//
//    while (num != 0) {
//        currentDigit = num % 10;
//
//        if (currentDigit > max)
//            max = currentDigit;
//
//        if (currentDigit < min)
//            min = currentDigit;
//
//        num = num / 10;
//    }
//
//    return max - min;
//}
//
//void main() {
//    int number;
//
//    printf("Enter a number:");
//    scanf_s("%d", &number);
//
//    int result = findDifference(number);
//    printf("Difference = %d\n", result);
//
//}
//
//#include<stdio.h>
//
//void displayCommonDividers(int smaller, int bigger){
//
//
// 
//   	// loop from 1 to smaller
//   	for (int i = 1; i <= smaller; i++){
// 
//         	// check if both divide in i -> display if true
//        if (smaller % i == 0 && bigger % i == 0) 
//            printf("%d  ", i);
//        
//    }
//
//}
//
//
//void main() {
//
//    // declare vars
//    int num1, num2, i;
//
//
//    // input both numbers
//    printf("Enter 2 numbers: ");
//    scanf_s("%d, %d", &num1, &num2);
//
//
//    displayCommonDividers(num1, num2);
//}

//#include<stdio.h>
//
//void displyPolindrom(int arr[]) {
//    int SIZE = sizeof(arr)  / sizeof(arr[0]);
//        int flag = 0;
//        int start = 0; 
//        int end = SIZE -1;
//        while (start < end) {
//            if (arr[start] != arr[end]) {
//                flag = 1;
//                break;  // Exit the loop if a non-palindromic element is found
//            }
//            start++;
//            end--;
//        }
//
//        if (flag == 1) {
//            printf("Not palindrome\n");
//        }
//        else {
//            printf("Palindrome\n");
//        }
//}
//
//
//void main() {
//
//    int arr[5];
//    printf("Enter an 5 numbers to arr: ");
//    for (int i = 0; i < 5; i++)
//    {
//        scanf_s("%d", &arr[i] );
//
//    }
//
//    displyPolindrom(arr);
//
//}
//
//#include<stdio.h>
//#define ROWS 3
//#define COLS 3
//
//void main() {
//
//    int arr[ROWS][COLS];
//
//    int* ptr;
//    ptr = &arr;
//
//
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            arr[i][j] = i * COLS + j + 1;
//                printf("%d  ", *ptr++);
//
//
//        }
//
//    }
//
//}
