//#include<stdio.h>
//#include<string.h>
//
//
//void main() {
//
//
//	char a[20]="\0";
//	char b[20]="\0";
//	int i;
//
//
//	for (i = 1; i <=5; i++) {
//		gets_s(a, 20);
//	
//
//
//		if (strlen(a) > strlen(b)) 
//			strcpy_s(b, 10, a);
//
//    }
//	
//	puts(b);
//
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int numOfChars;
//
//    // Getting the number of characters from the user
//    printf("Enter the number of characters: ");
//    scanf_s("%d", &numOfChars);
//
//    // Allocating dynamic memory for the string
//    char* inputString = (char*)malloc((numOfChars + 1) * sizeof(char));
//
//    // Checking if memory allocation was successful
//    if (inputString == NULL) {
//        printf("Memory allocation failed. Exiting...\n");
//        return 1; // Exit with an error code
//    }
//
//    // Getting the string from the user
//    printf("Enter a string of %d characters: ", numOfChars);
//    scanf_s("%s", inputString);
//
//    // Displaying the entered string
//    printf("Entered string: %s\n", inputString);
//
//    // Freeing the dynamically allocated memory
//    free(inputString);
//
//    return 0; // Exit successfully
//}


//exercise 27
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int numbers[10] = { 10,8,2,9,4,9,4,8,3,4 };
//
//    // Receive 10 integers from the user
//    /*printf("Please enter 10 integers:\n");
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &numbers[i]);
//    }*/
//
//    // Sort the numbers in ascending order
//    for (int i = 0; i < 10; i++) {
//        //for (int j = i + 1; j < 10; j++) {
//        if (abs(numbers[i] - numbers[i + 1]) < abs(numbers[0] - numbers[1])) {
//            // Preserve the two adjacent numbers with the smallest difference
//            numbers[0] = numbers[i];
//            numbers[1] = numbers[i + 1];
//        }
//
//    }
//
//    // Print the two adjacent numbers with the smallest difference
//    printf("The two adjacent numbers with the smallest difference are: %d and %d\n", numbers[0], numbers[1]);
//
//    return 0;
//}


//#include<stdio.h>

//void main() {

//    int x = 7;
//
//    int* ptr; // declare pointer
//
//    ptr = &x; // insert address of x to ptr
//
//
//    printf("x= %d \n", x); // x=7
//    printf("*ptr= %d \n", ++*ptr); // *ptr=7
//    printf("*ptr= %d \n", *ptr); // *ptr=7
//
//    printf("x address= %x \n", &x); // x address= ffa
//    printf("inside ptr= %x \n", ptr); // inside ptr= ffa
//
//    printf("ptr address= %x \n", &ptr); // ptr address= ff111
//
//}
//
//#include<stdio.h>
//
//int reverse(int arr[]) {
//
//
//    int i;
//    int* ptr;
//    ptr = &arr[6];
//    
//
//
//    for (i = 0; i <= 6; i++) {
//        printf("%d ",*ptr--);
//
//
//    }
//    return 0;
//}
//
//int main() {
//
//
//    int arr[] = { 1,2,3,4,5,6,7 };
//
//
//    reverse(arr);
//
//    
//}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str1[20] = "C programming";
//	char str2[20];
//
//	// copying str1 to str2
//	strcpy(str2, str1);
//
//	puts(str2); // C programming
//
//	return 0;
//}























