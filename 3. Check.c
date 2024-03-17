
/* 
Q1 Kiem tra SNT ( prime number)
Q2 Kiem tra so chinh phuong  
Q3 In ra k so chinh phuong dau tien 
Q4 In ra k so nguyen to dau tien 
Q5 Check nam nhuan (leap year)
Q6 Check amstrong
Q7 check perfect number
Q8 check power of 2  
Q9 Check square number (so binh phuong) 
Q10	Check luy thua
Q11	Kiem tra in ra so lan xuan hien cua cua phan tu trong mang tu nhap
Q12	check mang tang dan
Q13	check mang doi xung  
Q14	check xem so co thuoc day Fibonacci hay ko
Q15	check so thuan nghich 


 */


	
// Q1 Kiem tra SNT
5
2 3 6 7 19
OUTPUT: 
2 3 7 19
4


#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    int i;
    for ( i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n,i;
    scanf("%d", &n);
    int a[n];
    
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int cnt = 0; // Initialize the count of prime numbers to zero

    for ( i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            printf("%d ", a[i]);
            cnt++;
        }
    }
    
    printf("\nTotal prime numbers: %d\n", cnt);
    
    return 0;
}

  

//-----------------------------------------------------------------------------	
	
// Q2  Kiem tra so chinh phuong  
	
6
1
4
7
9
16
25
OUTPUT:
1 4 9 16 25

#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int squareRoot = (int)sqrt(num);
    return squareRoot * squareRoot == num;
}

int main() {
    int n,i;
    scanf("%d", &n);
    
    int a[n];

    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for ( i = 0; i < n; i++) {
        if (isPerfectSquare(a[i])) {
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}


//-----------------------------------------------------------------------------	
	
// Q3 In ra k so chinh phuong dau tien
  
5
0 1 4 9 16

#include <stdio.h>
#include <math.h>

int isPerfectSquare(int n) {
    int x = (int)sqrt(n);
    return (x * x == n);
}

int main() {
    int k;
    do {
        scanf("%d", &k);
    } while (k < 1);

    int num = 0;
    int count = 0;

    
    while (count < k) {
        if (isPerfectSquare(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}
 


//-----------------------------------------------------------------------------	
		
// Q4 In ra k so nguyen to dau tien  
	7
2 3 5 7 11 13 17

#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    int i;
    for ( i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int k;
    do {
        scanf("%d", &k);
    } while (k < 1);

    int num = 2; 
    int count = 0;
    while (count < k) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}



//-----------------------------------------------------------------------------	

// Q5 check nam nhuan leap year 
2024
2024 la nam nhuan 

#include <stdio.h>
#include <math.h>
int main(){

int year;
 	
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d la nam nhuan", year);
    } else {
        printf("%d khong la nam nhuan", year);
    }
}


//-----------------------------------------------------------------------------	
	
//	Q6 Check amstrong  

153
Yes, 153 la so Armstrong.

#include <stdio.h>
#include <math.h>

int main() {
    int cnt = 0;
    int n;
    
    do {
        scanf("%d", &n);
    } while (n < 1);
    
    int t = n;
    
    while (t != 0) {
        cnt++;
        t /= 10;
    }

    int temp = n;
    int sum = 0;

    while (temp != 0) {
        sum += pow(temp % 10, cnt);
        temp /= 10;
    }

     if (n == sum) {
        printf("Yes, %d la so Armstrong.\n", n);
    } else {
        printf("No, %d khong phai la so Armstrong.\n", n);
    }

    return 0;
}

   
//-----------------------------------------------------------------------------	
	
	
//	Q7  check perfect number
28
28 la so hoan hao.

#include <stdio.h>

int main() {
    int num,i;
    int sum_of_divisors = 0;

    scanf("%d", &num);

    for ( i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (sum_of_divisors == num) {
        printf("%d la so hoan hao.\n", num);
    } else {
        printf("%d khong phai la so hoan hao\n", num);
    }

    return 0;
}


//-----------------------------------------------------------------------------	

//	Q8 check power of 2  
16
OUTPUT:
16 la luy thua cua 2 voi so mu la 4.

#include <stdio.h>

int main() {
    int a, n = 0, a1, remainder;
    scanf("%d", &a);
    a1 = a;
    
    printf("\nOUTPUT:\n");

    while (a != 0) {
        remainder = a % 2;
        if (remainder != 0) {
            break;
        }
        a /= 2;
        n++;
    }

    if (a > 1) {
        printf("%d khong phai la luy thua cua 2.\n", a1);
    } else {
        printf("%d la luy thua cua 2 voi so mu la %d.\n", a1, n);
    }

    return 0;
}


    

//-----------------------------------------------------------------------------	
	
//	Q9 Check square number (so binh phuong) 


3
3 khong la so binh phuong.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    double sqrtResult = sqrt(num);

    if (sqrtResult == (int)sqrtResult) {
        printf("%d la so binh phuong.\n", num);
    } else {
        printf("%d khong la so binh phuong.\n", num);
    }

    return 0;
}



//-----------------------------------------------------------------------------	
			
// Q10 Check luy thua
27
27 la luy thua cua 3^3
#include <stdio.h>
#include <math.h>

int main() {
    int num, base;
    double exponent;

    scanf("%d", &num);

    for (base = 2; base <= num; base++) {
        exponent = log(num) / log(base);
        if (exponent == (int)exponent) {
            printf("%d la luy thua cua %d^%d\n", num, base, (int)exponent);
            return 0;
        }
    }

    printf("%d khong la luy thua cua bat ky so nguyen co so nao.\n", num);

    return 0;
}


//-----------------------------------------------------------------------------	
		
// Q11 Kiem tra in ra so lan xuan hien cua cua phan tu trong mang tu nhap
	 int n;
    scanf("%d", &n);

    int arr[n];
    int count[n];  

    
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n; i++) {
        if (count[i] == -1) {
            continue;  
        }

        int occurrences = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                occurrences++;
                count[j] = -1;  
            }
        }

        count[i] = occurrences;
    }

    
   
    for (int i = 0; i < n; i++) {
        if (count[i] != -1) {
            printf("%d xh  %d lan\n", arr[i], count[i]);
        }
    }

//-----------------------------------------------------------------------------	
		
// Q12 check mang tang dan
 int n;
    
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isIncreasing = 1; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isIncreasing = 0; 
            break;
        }
    }

    if (isIncreasing) {
        printf("La mang tang dan.\n");
    } else {
        printf("Khong tang dan.\n");
    }




//-----------------------------------------------------------------------------	
		
-----------------Q13 check mang doi xung -----------------------------
 
#include <stdio.h>
#include <stdlib.h>
int main(){

int n,i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1; 

    for ( i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("La Mang Doi Xung.\n");
    } else {
        printf("Khong la mang doi xung.\n");
    }
}



//-----------------------------------------------------------------------------	
		
	
// Q14 check xem so co thuoc day Fibonacci hay ko
	int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    int a = 0, b = 1;
    while (b < num) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    if (b == num) {
        printf("%d thuoc Fibonacci.\n", num);
    } else {
        printf("%d không thuoc Fibonacci.\n", num);
    }



/
//-----------------------------------------------------------------------------	
		
	
//  Q15 check so thuan nghich 
	int num;
    scanf("%d", &num);

    char numStr[20]; 
    sprintf(numStr, "%d", num);

    int isPalindrome = 1; 

    int len = strlen(numStr);
    for (int i = 0; i < len / 2; i++) {
        if (numStr[i] != numStr[len - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("%d là so thuan nghich.\n", num);
    } else {
        printf("%d không là so thuan nghich.\n", num);
    }
 
//-----------------------------------------------------------------------------	
			
	return 0;
}
