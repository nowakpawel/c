#include <stdio.h>
#include <float.h>
#include <limits.h>

int main() {
	//char
	signed char charmin = SCHAR_MIN;
	signed char charmax = SCHAR_MAX; 
	unsigned char ucharmax = UCHAR_MAX;  

	//short int
	signed short int sshortmin = SHRT_MIN;
	signed short int sshortmax = SHRT_MAX; 
	unsigned short int ushortmax = USHRT_MAX;
	
	//int
	int sintmin = INT_MIN;
	int sintmax = INT_MAX; 
	unsigned int uintmax = UINT_MAX;
	
	//long int
	signed long int slintmin = LONG_MIN;
	signed long int slintmax = LONG_MAX; 
	unsigned long int ulintmax = ULONG_MAX;
	
	//long long int
	signed long long int sllintmin = LLONG_MIN;
	signed long long int sllintmax = LLONG_MAX; 
	unsigned long long int ullintmax = ULLONG_MAX;
	
	//float
//	signed short int sshortmin = SHRT_MIN;
//	signed short int sshortmax = SHRT_MAX; 
//	unsigned short int ushortmax = USHRT_MAX;
//
//	//double
//	signed short int sshortmin = SHRT_MIN;
//	signed short int sshortmax = SHRT_MAX; 
//	unsigned short int ushortmax = USHRT_MAX;
//
//	//long double
//	signed short int sshortmin = SHRT_MIN;
//	signed short int sshortmax = SHRT_MAX; 
//	unsigned short int ushortmax = USHRT_MAX;


	//print char
	printf("The min value of signed char  is %d.\n", charmin);
	printf("The max value of signed char is %d.\n", charmax);
	printf("The max value of unsigned char is %u.\n\n", ucharmax);

	//print short
	printf("The min value of signed short is %d.\n", sshortmin);
	printf("The max value of signed short is %d.\n", sshortmax);
	printf("The max value of unsigned int is %u.\n\n", ushortmax);

	//print int	
	printf("The min value of signed int is %d.\n", sintmin);
	printf("The max value of signed int is %d.\n", sintmax);
	printf("The max value of unsigned int is %u.\n\n", uintmax);

	//print long int	
	printf("The min value of signed long int is %ld.\n", slintmin);
	printf("The max value of signed long int is %ld.\n", slintmax);
	printf("The max value of unsigned long int is %lu.\n\n", ulintmax);

	//print long int	
	printf("The min value of signed long long int is %ld.\n", sllintmin);
	printf("The max value of signed long longint is %ld.\n", sllintmax);
	printf("The max value of unsigned long long int is %llu.\n\n", ullintmax);


	printf("\n=== sizeof ===\n");
	printf("sizeof(char) = %d\n", sizeof(char));
       	printf("sizeof(short int) = %d\n", sizeof(short));
       	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(long int) = %d\n", sizeof(long int));
	printf("sizeof(long ling int) = %d\n", sizeof(long long int));

	return 0;
}
