/*
3.1 : Sap xep chan giam / tang dan : So chan
3.2 : Sap xep le giam / tang dan  : So le 
3.3 : Sap xep giam dan ( tu be -> lon ) 
3.4 : Sap xep mang le & sap xep mang chan tang dan
3.5 : Doi cho So lon nhat voi so chan nho nhat
3.6 : Vi tri cap so = k ( tim 1 cap dau tien ) 
3.7 : Tong binh phuong cua so le
		3.7.1	+ Binh phuong nhung so chan 
3.8 : In ra mang chan , le tren 2 dong tach biet
3.8.1 In ra mang chan , le tren 2 dong tach biet  (chan ascend, le descend) 
 --> sort tang dan ca day sau loop tu n-1 ve 0 thi duoc mang le descend  
3.9  : Sap xep tang dan ( loai bo phan tu bi trung ) va Sap xep giam dan ( loai bo phan tu bi trung )  
3.10 : Xoa phan tu lap nhieu nhat khoi mang 
3.11 : Mang tang dan / giam dan
3.12 : So chan xuat hien nhieu nhat
3.13 : So chan co hai chu so xuat hien nhieu nhat 
3.14 : Loai phan tu trung lap va in ra thu tu xuat hien / xuat hien chan /le 
 		 or in theo tang dan theo thu tu xuat hien / xuat hien chan /le  
3.15 : 

*/
// ham sort 
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
//qsort
int compareFunction(const void *a, const void *b) {
    return (*(int*) a - *(int*)b);
    // mac dinh la tang dan
    // giam dan thi them dau tru dang sau return 
}
  qsort(array, n, sizeof(int), compareFunction);  // can use with char 

  
-----------------3.1 Mang chan tang/giam dan -----------------

3
2
8
6
7

OUTPUT:
2
6
8

#include <stdio.h>
#include<stdlib.h>
include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[5];
	int i,j;
	//int cnt=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	int t;
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i]%2==0 && a[i]>a[j]){   //a[i] < a[j] : giam dan  \\ a[i] > a[j] : tang dan
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<5;i++){
	//C1:
		if(a[i]%2==0)
		if(i!=4){
			printf("%d\n",a[i]);
		}
		else printf("%d",a[i]);
	
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


--------- 3.2. Mang le tang / giam dan --------------

7
5 -4 -5 9 15 8 10

OUTPUT:
-5
5
9
15

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int tm;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		if(a[i] %2 !=0 && a[i]<a[j]){  // a[i]>a[j] : tang dan || a[i] < a[j] : giam dan
		tm=a[i];
		a[i]=a[j];
		a[j]=tm;
		}
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<n;i++){
		if(a[i] %2 !=0)
		if(i!=n-1){
			printf("%d\n",a[i]);
		}
		else printf("%d",a[i]);
	}
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


------------------3.3 Mang giam dan -------------------------
1
3
4
2

OUTPUT:
4.00 3.00 2.00 1.00

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a[4];
	int i,j,tmp;
	for(i=0;i<4;i++){
		scanf("%f",&a[i]);
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i=0;i<3;i++){
		for(j=i+1;j<4;j++){
			if(a[i]<a[j]){
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			}
		}
	}
	for(i=0;i<4;i++){
		printf("%.2f ",a[i]);
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


------------3.4 : sap xep tang dan mang le roi den mang chan -------------

6
4 9 8 2 7 3

OUTPUT:
3 7 9 2 4 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			}
		}
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int cnt=0;
  for(i=0;i<n;i++){
  	if(a[i] %2 != 0){
  		printf("%d ",a[i]);
  	}
  	else cnt++;
}
	for(i=0;i<n;i++){
  	if(a[i] %2 == 0){
  		printf("%d\n",a[i]);
  		if(cnt>1){
  			printf(" ");
  			cnt--;
		}
  	}
  } 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

--------------3.5- swap so lon nhat va so chan nho nhat------------- 
7
5 2 8 0 9 6 20

OUTPUT:
5 2 8 20 9 6 0

-------------------max even swap min----------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, j, n;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int min = -1 , max_even = -1 ;

  
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      if (max_even == -1 || a[i] > a[max_even]) {
        max_even = i;
      }
    }
    if (min == -1 || a[i] < a[min]) {
      min = i;
    }
  }

  
  if (max_even != -1 && min != -1) {
    int tmp = a[max_even];
    a[max_even] = a[min];
    a[min] = tmp;
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 0; i < n; i++) {
    printf("%d", a[i]);
    if (i < n - 1) {
      printf(" ");
    }
  }
   //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}

------------------------min even swap max -------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i, n;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int min_even = -1, max = -1;

  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      if (min_even == -1 || a[i] < a[min_even]) {
        min_even = i;
      }
    }
    if (max == -1 || a[i] > a[max]) {
      max = i;
    }
  }

  if (max != -1 && min_even != -1) {
    int tmp = a[max];
    a[max] = a[min_even];
    a[min_even] = tmp;
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 0; i < n; i++) {
    printf("%d", a[i]);
    if (i < n - 1) {
      printf(" ");
    }
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}


-------------3.6 - Tim cap so dau tien bang gia tri k-------------
6 
6 8 4 -5 7 9
15
OUTPUT : 
0 
5 
1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k,j;
	scanf("%d",&k);
	int sum=0;
	int cnt=0;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i=0;i<n-1;i++){
  		for(j=i+1;j<n;j++){
  			if(a[i]+a[j]==k){
  			++cnt;
			printf ("%d\n%d\n",i,j);
			printf("%d",cnt);
			}
		  }
	break; // tim duoc 1 cap thi dung
	} 
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}



----------------3.7 - Tong binh phuong cua so le--------------- 

5
1 2 3 4 5

OUTPUT:
35

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,j,n;
	int binhphuong=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i] %2 != 0){
			binhphuong+=a[i]*a[i];
		}
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d",binhphuong);
  	
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

	--------------3.7.1	Binh phuong nhung so chan------------------ 
		
INPUT
5
3
5
4
2
7
OUTPUT
16
4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,j,n;
	int binhphuong=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	
  	for(i=0;i<n;i++){
		if(a[i] %2 == 0){
			binhphuong =a[i]*a[i];
		printf("%d\n",binhphuong);
		}	
	}
	
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
		
		
		
		
		
		
		
-----------3.8 In ra mang chan le , tren 2 dong ---------

6
4 9 8 2 7 3

OUTPUT:
4 8 2
9 7 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	for(i=0;i<n;i++){
		if(a[i] %2 == 0){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		if(a[i] %2 != 0){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


--------------------------------------------------------------------------------------

-------3.9 : Sap xep tang dan ( loai bo phan tu bi trung ) va Sap xep giam dan ( loai bo phan tu bi trung )--------
8
3 2 5 2 4 6 5 8

OUTPUT:
2 4 6 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
    scanf("%d", &n);

    int a[n];
    int unique_a[n]; 
    int uniqueCount = 0;
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
	for (i = 0; i < n - 1; i++) {
        for (j = i+1 ; j < n; j++) {
            if (a[i] > a[j]) {
                int t= a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
 	for (i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1] && a[i] % 2 == 0) {
            unique_a[uniqueCount] = a[i];
            uniqueCount++;
        }
    }
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	 for ( i = 0; i < uniqueCount; i++) {
        printf("%d ", unique_a[i]);
    }
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}



-------------------3.10- Xoa phan tu lap nhieu nhat khoi mang--------------------------------------
5
1 4 8 4 6
1 8 6

#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d", &n);

    int a[n];
    int uniqueArr[n];
    int counts[n];

    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        counts[i] = 0;
    }

    int maxCount = 0;

    for ( i = 0; i < n; i++) {
        int count = 0;
        for ( j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        counts[i] = count;
        if (count > maxCount) {
            maxCount = count;
        }
    }

    int uniqueCount = 0;

    for ( i = 0; i < n; i++) {
        if (counts[i] < maxCount) {
            uniqueArr[uniqueCount++] = a[i];
        }
    }

    for ( i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueArr[i]);
    }
    printf("\n");

    return 0;
}



----------------------------3.11 Mang tang/giam dan --------------

1
3
2
4
6
8
10

OUTPUT:
1 2 3 4 6 8 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[7];
	int i,j;
	//int cnt=0;
	for(i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	int t;
	for(i=0;i<6;i++){
		for(j=i+1;j<7;j++){
			if(a[i]>a[j]){   //a[i] < a[j] : giam dan  \\ a[i] < a[j] : tang dan
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<7;i++){
	//C1:
		if(i!=6){
			printf("%d ",a[i]);
		}
		else printf("%d",a[i]);
	
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


----------------------3.12: So chan xuat hien nhieu nhat -----------------------
#include <stdio.h>

int main() {
    int numbers[7];
    int evenCount[101] = {0}; // Array to count the occurrences of even numbers (0 to 100)
    int maxEvenCount = 0;
	int i;
    // Prompt the user to enter 7 integers
    for ( i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            evenCount[numbers[i]]++;
            if (evenCount[numbers[i]] > maxEvenCount) {
                maxEvenCount = evenCount[numbers[i]];
            }
        }
    }

    if (maxEvenCount > 0) {
        printf("The even numbers that appear the most frequently are: ");
        for ( i = 0; i <= 100; i++) {
            if (evenCont[i] == maxEvenCount && i % 2 == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        // No even number found
        printf("Pew!!!\n");
    }

    return 0;
}
----------------------3.13 : So chan co hai chu so xuat hien nhieu nhat -----------------------

#include <stdio.h>

int main() {
    int numbers[7];
    int twoDigitCount[100] = {0}; 
    int maxTwoDigitCount = 0;
	int i;

    for ( i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] >= 10 && numbers[i] <= 99) {
            twoDigitCount[numbers[i]]++;
            if (twoDigitCount[numbers[i]] > maxTwoDigitCount) {
                maxTwoDigitCount = twoDigitCount[numbers[i]];
            }
        }
    }

    if (maxTwoDigitCount > 0) {
        for ( i = 10; i <= 99; i++) {
            if (twoDigitCount[i] == maxTwoDigitCount) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        printf("No two-digit number.\n");
    }

    return 0;
}


-------------------- 3.14 : Loai phan tu trung lap va in ra thu tu xuat hien--------------
5
7
1
3
3
2 
Output : 
7 
1
3
2
#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d", &n);

    if (n <= 0) {
        return 1;  // Exit with an error code
    }

    int a[10];
    int oddSeen[101] = {0};  // Array to keep track of seen odd numbers
    int resultArray[10];  // To store the resultant list
    int resultCount = 0;

    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if ( oddSeen[a[i]] == 0) {  // chan , le them dieu kien a[i] % 2 != 0 && oddSeen[a[i]] == 0 
            oddSeen[a[i]] = 1;
            resultArray[resultCount] = a[i];
            resultCount++;
        }
    }
    
    Sap xep 
       // Sort the resultant list in ascending order (bubble sort)
//    for (int i = 0; i < resultCount - 1; i++) {
//        for (int j = 0; j < resultCount - i - 1; j++) {
//            if (resultArray[j] > resultArray[j + 1]) {
//                // Swap elements
//                int temp = resultArray[j];
//                resultArray[j] = resultArray[j + 1];
//                resultArray[j + 1] = temp;
//            }
//        }
//    } 

    // Print the resultant list of numbers
    for ( i = 0; i < resultCount; i++) {
        printf("%d\n", resultArray[i]);
    }

    return 0;
}




