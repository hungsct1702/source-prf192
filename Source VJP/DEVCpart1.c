                   	ve hinh
// 4.ve hinh vuong 
// 5.ve hinh vuong bi rong duoi
// 6.ve hinh vuong rong tren 
// 7.ve hinh vuong rong giua 
// 8.ve hinh tam giac 
// 9.ve tam giac nguoc 1 
// 10.ve tam giac nguoc 2
// 11.ve hinh tam giac nguoc 3 
// 13.tam giac can 1
// 14.tam giac can 2 
// 15.tam giac co so 
// 16.ve hinh binh hanh 
// 17.ve ngoi nha
// 18.hinh thoi 
// 19.tam giac rong 
// 20.trai tim 

               
											 kiem tra 
// 2.Ham kiem tra nam nhuan
// 3.Ham kiem tra so Armstrong
// 30.kiem tra can bac 2 cua 1 so 
// 34. ham kiem tra so nguyen to  
// 36.Ham` kiem tra so chinh phuong
// 37.Kiem tra so co phai thuoc day fibonacci 
//47.Kiem tra 1 so co phai power of 2
//50.Perfect number
//53.Check valid name . OUTPUT:1 neu valid
//56. check perfect number 
//64. Kiem tra exponent  
//66. check mang tang dan 
//67. check mang doi xung  

              
														 array 
// 1.doi vi tri so le lon nhat va nho nhat 
// 21.tinh tong cac thanh phan trong mang 
// 23.tim so nho nhat, lon nhat 
// 24.tim so nho, lon thu 2 
// 22.dem so nguyen am trong mang 
//25.dao nguoc so 
// 29.giam bot so luong trung nhau cua mang
//31.dem so luong tu cua 3 tu dau tien
// 33.binh phuong cac so trong mang 
//40.Xoa cac phan tu la so le trung nhau
// 41. ham dao nguoc chuoi
//42.In ra so chu so(digit) trong string
//42.1 In ra so chan lon nhat trong n so
//44.In ra so chan tai vi tri chan va sort
//45.Neu la so le, binh phuong roi cong vao
//46.In ra tich cua cac so trong chu so n
//48.In ra ky tu viet hoa at position even
//49.In ra cac ky tu la chu 
//51.Dem digit trong string
//52.Viet hoa 1/2 length string
//57. xoa 1 phan tu tai vi tri ma nguoi dung nhap vao 
//58. Chen 1 so bat ky vao array  
//59. swap 2 vi tri trong array
//60. xoa 1 phan tu trong array vi tri nguoi dung nhap
//65. kiem tra n%5==0 in ra so lan xuan hien cua n        
//68.in ra SNT dau` tien
//70. reverse day so
//72. in ra vi tri co tong bang` mot so nao` do
// 78.In ra cac so chan o vi tri le theo thu tu giam dan coi v? tri tri dau la vi tri 1

		
														 tinh toan
//81 tim  n so nguyen to tiep theo 
// 32.tinh toan gio phut giay 
// 35. tinh tong n so   
// 38.Cac cong thuc tinh S,chu vi hinh chu nhat, tam giac, tron.
//43. LCM(boi chung nho nhat),GCD(uoc chung lon nhat)
//54. Average positive number
//55. Area of a circle
//61. In ra gio phut giay
//62. Tong so dau va so cuoi
//66. binary->octal
//69. tinh':  (-1)^n+1 * x^n
//71. square odd number
//72. Dien tich, chu vi hcn
//72. Dien tich, chu vi hinh tam giac 
//72. Dien tich, chu vi hinh tron
//73. Factorial of n
// 74.Tinh tong phan so F2(n) = 1 + 2 + 3 + ... + n
// 75.Tinh F1(n) + F2(n) = m
// 76.Nhap so nguyen n
// 77.Tinh n^m
// 80. tinh avg cac so le trong mang 




                      	sap xep
//26.sap xep phan tu theo thu tu tang dan 
// 27.sap xep thu tu theo thu tu giam dan 
//39.Sap xep giam dan float
// 79.sap xep mang b theo thu tu giam dan


 solve: 
// 1.doi vi tri so le lon nhat va nho nhat 
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
int n;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements of the array:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int min_odd = -1, max_odd = -1;
for (int i = 0; i < n; i++) {
if (arr[i] % 2 != 0) {
if (min_odd == -1 || arr[i] < arr[min_odd]) {
min_odd = i;
}
if (max_odd == -1 || arr[i] > arr[max_odd]) {
max_odd = i;
}
}
}
if (min_odd != -1 && max_odd != -1) {
swap(&arr[min_odd], &arr[max_odd]);
}
printf("The modified array is:\n");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
-------------------------------------------------------------------------
// so le nho nhat va so le lon nhat

#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min_odd_index = -1, max_odd_index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (min_odd_index == -1 || a[i] < a[min_odd_index]) {
                min_odd_index = i;
            }
            if (max_odd_index == -1 || a[i] > a[max_odd_index]) {
                max_odd_index = i;
            }
        }
    }

    if (min_odd_index != -1 && max_odd_index != -1) {
        int temp = a[min_odd_index];
        a[min_odd_index] = a[max_odd_index];
        a[max_odd_index] = temp;

        printf("Mang sau khi doi vi tri cua so le nho nhat va so le lon nhat dau tien la:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("Khong co so le trong mang.\n");
    }

    return 0;
}
// 2.Ham kiem tra nam nhuan
#include <stdio.h>           

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a leap year.", year);
    else
        printf("%d is not a leap year.", year);

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------

// 3.Ham kiem tra so Armstrong
#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
   int originalNumber, remainder, result = 0, n = 0, power;
   originalNumber = number;

   
   while (originalNumber != 0) {
      originalNumber /= 10;
      ++n;
   }

   originalNumber = number;

   
   while (originalNumber != 0) {
      remainder = originalNumber % 10;
      power = round(pow(remainder, n));
      result += power;
      originalNumber /= 10;
   }

   if (result == number)
      return 1;
   else
      return 0;
}

int main() {
   int number;
   scanf("%d", &number);

   if (isArmstrong(number))
      printf("%d la so Armstrong.", number);
   else
      printf("%d khong phai la so Armstrong.", number);

   return 0;
}



--------------------------------------------------------------------------------------------------------------------------------------


// 4.ve hinh vuong 
void veHinhVuong1 (int n){
int i,j;
for (i= 0;i<n;i++) {
 	for ( j=0;j<n;j++){
 		printf ("* ");
	 }
	 printf ("\n"); 
}


// 5.ve hinh vuong bi rong duoi
void veHinhVuong2 (int n){
int i,j;
for (i= 0;i<n;i++) {
	if (i==0) {
		for ( j=0;j<n;j++){
 		printf ("* ");
	}
}

	else {
		printf ("*");
		for (j=0;j<n-2;j++){
			printf (" ");
			
		}
		printf ("*");
	}
		printf ("\n");
}}


// 6.ve hinh vuong rong tren 
void veHinhVuong3 (int n){
int i,j;
for (i= 0;i<n;i++) {
	if (i==0) {
		for ( j=0;j<n;j++){
 		printf ("* ");
	}
}

	else {
		printf ("*");
		for (j=0;j<n-2;j++){
			printf (" ");
			
		}
		printf ("*");
	}
		printf ("\n");
}

// 7.ve hinh vuong rong giua 
void veHinhVuong4 (int n){
int i,j;
for (i= 0;i<n;i++) {
	if (i==n-1 || i==0 ) {
		for ( j=0;j<n;j++){
 		printf ("*");
	}
}

	else {
		printf ("*");
		for (j=0;j<n-2;j++){
			printf (" ");
			
		}
		printf ("*");
	}
		printf ("\n");
}


// 8.ve hinh tam giac 
void veTamGiac1 (int n){
	int i,j;
	for (i=0;i<=n;i++) {
		for (j=0;j<i;j++){
			printf ("* ");
		}
		printf ("\n");
	}
}

// 9.ve tam giac nguoc 1 
void veTamGiac1 (int n){
	int i,j;
	for (i=0;i<=n;i++) {
		for (j=0;j<n-i;j++){
			printf ("* ");
		}
		printf ("\n");
	}
}


// 10.ve tam giac nguoc 2
void veTamGiac2 (int n){
int i,j;
for (i=0;i<size;i++){
		for (j=0;j<i;j++){
			printf (" ");
		}
		for (j=i;j<size;j++){
			printf ("*");
		}
		printf ("\n");
	}


// 11.ve hinh tam giac nguoc 3 
void veTamGiac2 (int n){
int i,j;
	for (i=0;i<n;i++){
		for (j=0;j<n-i-1;j++){
			printf (" ");
		}
		for (j=0;j<i+1;j++){
			printf ("*");
		}
		printf ("\n");
	}
	
	
// 13.tam giac can 1
int i, space, rows, k = 0;
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }


// 14.tam giac can 2 
int rows, i, j, space;
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
 



// 15.tam giac co so 
   int rows, i, j, number = 1;
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }

// 16.ve hinh binh hanh 
int i, j, n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n - i + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
        
        
// 17.ve ngoi nha
 int i, j, space, rows = 8, star = 0;

    
    for (i = 0; i < rows; i++)
    {
        if (i < 5)
        {
            
            for (space = 1; space < 5 - i; space++)
            {
                printf(" ");
            }
           
            while (star != (2 * i + 1))
            {
                printf("*");
                star++;
                ;
            }
            star = 0;
            /* move to next row */
            printf("\n");
        }
        else
        {
        
            for (j = 0; j < 9; j++)
            {
                if ((int)(j / 3) == 1)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
    
    

// 18.hinh thoi 
  for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
    
// 19.tam giac rong 
int i, j, n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == n || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
// 20.trai tim 
 int i, j, rows;
    for (i = rows / 2; i <= rows; i += 2)
    {
        for (j = 1; j < rows - i; j += 2)
        {
            printf("   ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        for (j = 1; j <= rows - i; j++)
        {
            printf("   ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for (i = rows; i >= 1; i--)
    {
        for (j = i; j < rows; j++)
        {
            printf("   ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }





// 21.tinh tong cac thanh phan trong mang 
	int i,size,sum=0;
	int Arr[size];
	for (i=0;i<size;i++){
		scanf ("%d",&Arr[i]);
}
for (i=0;i<size;i++) {
	sum = sum + Arr[i];
}
printf ("%d",sum);



// 22.dem so nguyen am trong mang  
	int i,size,count=0,n=0; 
scanf("%d", &size);
	int Arr[size];
	for (i=0;i<size;i++){
		scanf ("%d",&Arr[i]);
}
for (i=0;i<size;i++) {
	if (Arr[i]>0) {
		count++;
	}
	else 
	n++;
}
printf("%d %d", count, n);


// 23.tim so nho nhat, lon nhat 
int main () {
	int size;
		scanf("%d",&size);
	int i,Arr[size];
	for(i=0;i<size;i++)
	scanf("%d",&Arr[i]);
	int max = Arr[0];
for (i=0;i<size;i++) {
    if (Arr[i] < max) {
    	max = Arr[i];
	}
}
printf ("%d",max);
return 0;

// 24.tim so nho, lon thu 2 
int max = Arr[0];
for (i=0;i<size;i++) {
    if (Arr[i] > max) {
    	max = Arr[i];
	}
}
for (i=0;i<size;i++) {
    if (Arr[i] > second && Arr[i] != max) {
    	second = Arr[i];
	}
}


//25.dao nguoc so 

  int i,j;

    long n;
    do
        scanf("%d",&n); 
    while (n<0);

    long rev=0;
    while (n!=0){
        rev=rev*10+n%10;
        n/=10;
    }
    n=rev;
    printf("%d",n);
    
//26.sap xep phan tu theo thu tu tang dan 
	int i,j,size,temp=0;
	scanf ("%d",&size); 
	int Arr[size];
	for (i=0;i<size;i++){
		scanf ("%d",&Arr[i]);
}
for (i=0;i<size;i++) {
	for (j=i+1;j<size;j++) {
		if (Arr[j] < Arr[i]){
			temp=Arr[j];
			Arr[j]=Arr[i];
			Arr[i]=temp;
		}
		
	}

}for (i=0;i<size;i++) {

printf ("%d \t", Arr[i]);
}


// 27.sap xep thu tu theo thu tu giam dan 
	int i,j,size,temp=0;
	scanf ("%d",&size); 
	int Arr[size];
	for (i=0;i<size;i++){
		scanf ("%d",&Arr[i]);
}
for (i=0;i<size;i++) {
	for (j=i+1;j<size;j++) {
		if (Arr[j] > Arr[i]){
			temp=Arr[j];
			Arr[j]=Arr[i];
			Arr[i]=temp;
		}
		
	}

}for (i=0;i<size;i++) {

printf ("%d \t", Arr[i]);
}


// 29.giam bot so luong trung nhau cua mang 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
  	int arr[1000], b[1000] = {0}, c[1000] = {0}; //Khoi tao 3 mang so nguyen
  	int i;
  	scanf("%d", &n); //Nhap so phan tu cua mang arr
  	for(i = 0; i < n;i++)
  	{
  		scanf("%d", &arr[i]);	// Nhap n phan tu mang so nguyen arr
  }
  for(i = 0; i < n;i++)
  {
  	if(arr[i] > 0) //Mang so nguyen b[] ghi lai so lan xuat hien cua
  		b[arr[i]]++;  //cac phan tu lon hon 0 trong day arr
  	if(arr[i] < 0) //Mang so nguyen c[] ghi lai so lan xuat hien cua
  		c[-arr[i]]++; //cac phan tu nho hon 0 trong day arr
  }
  int max = 0;
  for(i = 0; i <n ;i++)
  {
  	if(arr[i] > 0)
  	{
  		if(b[arr[i]] > max)
  			max = b[arr[i]];
  	}
  	else
  	{
  		if(c[-arr[i]] > max)
  			max = c[-arr[i]];
  	}
  }// Vong lap tra ra so lan xuat hien nhieu nhat cua mot phan tu trong arr
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i = 0; i <1000 ;i++)
  {
  	if(b[i] == max)
  	{
  		printf("%d ", i);
  	}
  	if(c[i] == max)
  		printf("%d ", -i);
  } //In ra phan tu co lan xuat hien nhieu nhat trong day

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
\
-------------------------------------------------------------------------------------------------------------------------------------------
    
    
    
// 30.kiem tra can bac 2 cua 1 so 
 int a, tmp, flag = 0;
    scanf("%d", &a);
    tmp = a;
    while (a % 2 == 0)
    {
        a /= 2;
        flag++;
    }
    
    printf("OUTPUT:\n");
   
    if (a == 1)
    {
        printf("%d", flag);
    }
    else
    {
        printf("%d is not a power of 2", tmp);
    }
    
    
    
//31.dem so luong tu cua 3 tu dau tien
    char s[100];
    int i, count = 0, tmp = 0;
    gets(s);
    printf("OUTPUT:\n");

    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ' && tmp < 3)
        {
            while (s[i] != ' ')
            {
                count++;
                ++i;
                ;
            }
            tmp++;
        }
    }
    printf("%d", count);
    
    
    
    


// 32.tinh toan gio phut giay 
#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int h,m,s;
	h=a/3600;
	printf("\n%d",h);
	m=(a-(h*3600))/60;
	printf("\n%d",m);
	s=a-h*3600-m*60;
	printf("\n%d",s);
	return 0;
}


// 33.binh phuong cac so trong mang 
	int size;
		scanf("%d",&size);
	int i,Arr[size];
	for(i=0;i<size;i++)
	scanf("%d",&Arr[i]);
	for(i=0;i<size;i++)
		if(Arr[i]%2==1&& Arr[i]>0) {
			printf("%d ",Arr[i]*Arr[i]);
	} 
	
	
// 34. ham kiem tra so nguyen to  
int Prime(int n){
	int i; 
	if (n<2) return 0;
	for (i=2;i<=sqrt(n);i++)
	if (n%i==0) return 0;
return 1; }

// 35. tinh tong n so                                                                 
int SumInRange(int n) {
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    int sum;
    scanf("%d", &n);
    sum = SumInRange(n);
    printf("%d", sum);
    return 0;
}
	
// 36.Ham` kiem tra so chinh phuong
int SCP(int n){
	if (sqrt(n)==(int)sqrt(n)) return 1;
	else return 0;	
}

// 37.Kiem tra so co phai thuoc day fibonacci  
int fb(int n){
    int fn1=1,fn2=1,fn=1;
	if (n==0 || n==1) return 1;
    while (fn<n){
    if(n==fn) return 1;
    fn=fn1+fn2;
    fn1=fn2;
    fn2=fn;
   } 
   return 0;
	
}

// 38.Cac cong thuc tinh S,chu vi hinh chu nhat, tam giac, tron.
double getPerimCircle(double r)
double getAreaCircle(double r)
double getPerimRecangle(double A,double B)
double getAreaRecangle(double A,double B)
double getPerimTriangle(double a,double B,double C)
double getAreaTriangle(double A,double B,double C)
if (r>0) return getPerimCircle==2*r*3.14;
if (r>0) return getAreaCircle==r*r*3.14;
if (A>0&&B>0) return getPerimRectangle==(A+B)*2;
if (A>0&&B>0) return getAreaRectangle==(A*B);
if (A>0&&B>0&&C>0&&A+B>C&&B+C>A&&A+C>B) return getPerimTriangle==(A+B+C);
{
if (A>0&&B>0&&C>0&&A+B>C&&B+C>A&&A+C>B) { double P=getPerimTriangle(A,B,C)/2;
                                         return sqrt(P*(P-A)*P(P-B)*P*(P-C)); }
                                         else { printf("\nTHis is not a triangle,pls check length of A,B,C edge");
                                         return 0;
										 }
									}


//           Sap xep theo kieu insertion
void Insertion(int A[], int n){
	int i,j;
		for(i=1;i<n;i++) {
		int value=A[i];
		j=i-1;
		while (j>=0 && value<A[j]){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=value;
	}
} 


 
//                                                                  Sap xep theo bubble 
void bubble(int A[], int n, int switchOper)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++)
		{
			if((A[j]-A[j+1])*switchOper>0)
			{
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
}


//39.Sap xep giam dan float
#include <stdio.h>
#include<stdlib.h>
void bubble(float A[], int n, int switchOper)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++)
		{
			if((A[j]-A[j+1])*switchOper>0)
			{
			float temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
}

int main (){
	float Arr[4];
	int i;
	for(i=0;i<4;i++)
	scanf("%f",&Arr[i]);
	bubble(Arr,4,-1);
	for(i=0;i<4;i++)
	printf("%.2f ",Arr[i]);
	return 0;
}


//                                                             Sap xep theo kieu selection
void selection(int A[],int size,int opt){
	int i,j;
		for(i=0;i<size;i++) {
			int min_pos=i;
			for(j=i+1;j<size;j++)
		if((A[min_pos]-A[j])*opt>0) 
			min_pos=j;
		if(i!=min_pos){
			int temp=A[i];
				A[i]=A[min_pos];
				A[min_pos]=temp;
		}		
	}
}


 
//40.Xoa cac phan tu la so le trung nhau
void DelEle(int Arr[],int size,int Pos){
	int i;
	for(i=Pos;i<size-1;i++)
	Arr[i]=Arr[i+1];
	size--;
}
int main(){
	int i,j,size;
	do {
		scanf("%d", &size);
	}while ( size>=10);
	int Arr[size];
	for(i=0;i<size;i++) 
		scanf("%d", &Arr[i]);
	for(i=0;i<size;i++)
		for(j=i+1;j<size;j++)
			if(Arr[i]==Arr[j] && Arr[j]%2!=0)
			{
				DelEle(Arr,size,j);
				size--;
				j--; // descrease size and iterator 
			}
	printf("\nOUTPUT:\n");
	for(i=0;i<size;i++)
	printf("%d\n",Arr[i]);
	return 0;
}



/**
                                    * ham tinh do dai cua chuoi
 */
int string_length(char s[]) {
   int i=0;
 
   while(s[i]!='\0')
      i++;
 
   return i;    
}
 
/**
// 41. ham dao nguoc chuoi
 */
void string_reverse(char str[]) {
   int i, j, len;
   char ch;
 
   j = len = string_length(str) - 1;
   i = 0;
 
   while(i < j) {
      ch = str[j];
      str[j] = str[i];
      str[i] = ch;
      i++;
      j--;
   }
}


//42.In ra so chu so(digit) trong string
#include <stdio.h>
#include<string.h>
int main (){
	char str[100];
	printf("Please enter a string:");
	gets(str); 
	int i,count=0;
	int len;
	len=strlen(str);
	for(i=0;i<len;i++)
		{ 	
		 	if(str[i]>48 && str[i]<57)
		 	count++;
		}
	printf("%d",count);
	
	
	return 0;
}


//42.1 In ra so chan lon nhat trong n so
#include <stdio.h>
#include<string.h>
int main (){
//	int size;
//	scanf("%d",&size);
	int i,Arr[5];
		for(i=0;i<5;i++)
		scanf("%d",&Arr[i]);
		int Max_even=-1;
		for(i=0;i<5;i++)
			if(Arr[i]>Max_even && Arr[i]%2==0)
			 	Max_even=Arr[i];
		//printf("OUTPUT:\n")
		printf("\nOUTPUT:\n%d",Max_even);
	return 0;
}



//43. LCM(boi chung nho nhat),GCD(uoc chung lon nhat)
#include<stdio.h>
int GCD(int a, int b){
	while (a!=b)
		if(a>b) a=a-b;
		else b=b-a;
		return b;
}
int LCM(int a, int b){
	int lcm=a * b /GCD(a,b);
	return lcm;
}
int main(){
	int a,b;
	printf("Please enter two positive integer to find GCD,LCM: ");
	scanf("%d%d", &a,&b);
	
	GCD(a,b);
	printf("OUTPUT:\n");
	printf("%d\t%d", GCD(a,b),LCM(a,b));
	return 0;
}


//44.In ra so chan tai vi tri chan va sort
#include <stdio.h>
void printsx(int A[], int* n)
{
	int *adds[*n];
	int i,j;
	int* temp;
	for(i=0;i<*n;i++)
	{
		adds[i]=&A[i];
	}
	for(j=0;j<*n-1;j++)
	{
		if(adds[j]>adds[j+1])
		{
			temp=adds[j];
			adds[j]=adds[j+1];
			adds[j+1]=temp;
		}
	}
	for (i = 0; i < *n; i++)
	{
		if(*adds[i]%2==0 && i%2==0 && i!=0)
		printf("%d\t", *adds[i]);
	}

}
int main(){
	int i,size;
		scanf("%d",&size);
	int Arr[size];
		Arr[0]=size;
		for(i=1;i<size;i++)
		scanf("%d",&Arr[i]);
	printsx(Arr,&size);
	
	return 0;
}





//45.Neu la so le, binh phuong roi cong vao
#include <stdio.h>
int main(){
	int size;
	int sum=0;
	do {
		scanf("%d",&size);
	}while(size>10);
	int i,Arr[size];
	for(i=0;i<size;i++)
	scanf("%d",&Arr[i]); 
	for(i=0;i<size;i++)
		if(Arr[i]%2!=0)
			 sum=sum+(Arr[i]*Arr[i]);
	printf("%d",sum);
	return 0;
}



//46.In ra tich cua cac so trong chu so n
#include <stdio.h>
int main(){
	int n,a,pro=1;
	scanf("%d",&a);
	do {
		n=a%10;
		pro*=n;
		a=a/10;
	}while (a>0);
	printf("%d",pro);
	return 0;
}





//47.Kiem tra 1 so co phai power of 2
#include<stdio.h>
int main(){
	int remainder,a,n=0,a1;
	
	scanf("%d", &a);
	a1=a;
	printf("\nOUTPUT:\n");
    while (a !=0 ){
     remainder=a%2;	
	 if(remainder!=0) break;
	 a/=2;
	 n++;
	}
	if(a>1) printf("%d is not power of 2",a1);
	else printf("%d", n);
	return (0);
}




//48.In ra ky tu viet hoa at position even
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s",&str);
	int i,len=strlen(str); 
	for(i=0;i<len;i++)
		if(i%2!=0) str[i]-=32;
	printf("%s",str);
	return (0);
}



//49.In ra cac ky tu la chu  
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%[^\n]",&str);
	int i,len;
	len=strlen(str);
	printf("\nOUTPUT:\n"); 
	for(i=0;i<len;i++) 
	    {
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
			printf("%c",str[i]);
		} 	
	return (0);
}



//50.Perfect number
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<n;i++) {
		if(n%i==0) sum+=i;	
	} if (sum==n) 
	printf("perfect");
	else printf("NOT");
	return (0);
}



//51.Dem digit trong string
#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
		scanf("%s",&str);
	int i;
	int len=strlen(str);
	int count=0;
		for(i=0;i<len;i++){
			if(isdigit(str[i])) count++;
		} printf("%d",count);
	return (0);
}




//52.Viet hoa 1/2 length string
#include <stdio.h>
#include<string.h>
int main(){
	char str[200];
		printf("Enter a string: "); 
		scanf("%[^\n]",&str);
	int i,n=strlen(str)/2;
		{ for(i=0;i<n;i++);
		if(str[i]>='A'&&str[i]<='Z') str[i]+=32;			
		 for(i=n;i<strlen(str);i++)
		 if(str[i]>='a' && str[i]<='z')
		 str[i]-=32;
		}		
			 puts(str);
	return 0;
}




//53.Check valid name . OUTPUT:1 neu valid 
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	fgets(str, sizeof(str), stdin);
	int i;
	// check extra space
	for(i = 0 ; i < strlen(str); i++){
		if(str[i] == ' ' && str[i+1] == ' ') {
		printf("0");
		return 0;
		}
	}
	// check alpha
	int count  = 0;
	// dem nhung thang nao ma khong phai alpha , nhung ki tu dac biet 
	for(i = 0; i < strlen(str) ; i++){
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] == ' ' ) {
		}
		else{
			count++;
		}
	}
	if(count-1!=0) printf("0");
	else printf("1");
}





//54. Average positive number
#include<stdio.h>
#include<string.h>
double averageNumber(int Arr[], int size){
	int i,count=0;
	int sum=0;
	for(i=0;i<size;i++)
	if(Arr[i]>=0) {
		sum+=Arr[i];
		count++;
	}
	if(count==0) return 0;
	else return  sum*1.0 /count ; 
}
int main(){
	int size;
		scanf("%d",&size);
	int i,Arr[size];
		for(i=0;i<size;i++) {
		scanf("%d",&Arr[i]);
		}
	
	printf("%.2lf",averageNumber(Arr,size));
}






//55. Area of a circle
#include<stdio.h>
#define PI 3.14159
int main(){
	double a;
	printf("Enter radius to calculate the area of a circle:");
	scanf("%lf",&a);
	double area=0;
	if (a>0) area=PI*a*a;
	printf("%lf",area);
	return 0;
}





//56. check perfect number 
#include<stdio.h>
#include<math.h>
int SCP(int n){
	if (sqrt(n)==(int)sqrt(n)) return 1;
	else return 0;	
}
int main(){
	int a;
	scanf("%d",&a);
	if(SCP(a)) printf("Pefect number");
	else printf("Not");
	return 0;
}





//57. xoa 1 phan tu tai vi tri ma nguoi dung nhap vao  
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int i,size;
    srand(time(NULL));
	printf("Enter the size of the array: "); scanf("%d", &size);
	int A[size];
	for(i=0;i<size;i++)
	{  
	    A[i]=rand()%51-rand()%30;
	} 
	for(i=0;i<size;i++)
	printf("%d\t", A[i]);
	
	int pos;
	printf("\nEnter the position to remove an element: "); scanf("%d", &pos);
	if(pos>=0 && pos<size) {
		int value=A[pos];
		for(i=pos;i<size;i++)
		A[i]=A[i+1];
		size--;
				printf("\nThe array after removing element %d at position %d:\n",value,pos);
		      for(i=0;i<size;i++) printf("%d\t", A[i]);
		
	} else {
		printf("\nCannot remove the element at %d, plz check range !", pos);
		printf("\nThe origin array:\n");
		for(i=0;i<size;i++) printf("%d\t", A[i]);
	}
	return 0;
}



//58. Chen 1 so bat ky vao array  
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int i,size;
    srand(time(NULL));
	printf("Enter the size of the array: "); scanf("%d", &size);
	int A[size];
	for(i=0;i<size;i++)
	{  
	    A[i]=rand()%51-rand()%30;
	} 
	for(i=0;i<size;i++)
	printf("%d\t", A[i]);
	
	
	int pos;
	printf("\nEnter the position to insert an element: "); scanf("%d", &pos);
	if(pos>=0 && pos<=size) {
		
		for(i=size;i>=pos;i--)
		  A[i]=A[i-1];
		  int n;
		  printf("Enter new element: "); scanf("%d", &n);
		  A[pos]=n;
		
				printf("\nThe array after insert element %d at position %d:\n",n,pos);
				size++;
		      for(i=0;i<size;i++) printf("%d\t", A[i]);
		  
		
	} else {
		printf("\nCannot insert the element at %d, plz check range !", pos);
		printf("\nThe origin array:\n");
		for(i=0;i<size;i++) printf("%d\t", A[i]);
	}
	return 0;
}






//59. swap 2 vi tri trong array
#include <stdio.h>
#include<stdlib.h>
int main(){
	int i,size;
   
	printf("Enter the size of the array: "); scanf("%d", &size);
	int A[size];
	for(i=0;i<size;i++)
	scanf("%d",&A[i]);
	
	int pos1,pos2;
	printf("\nEnter the two positions to swap : "); scanf("%d%d", &pos1, &pos2);
	 
	if (pos1>=0 && pos2>=0 && pos1<size && pos2<size && pos1 != pos2) {
			{
			A[pos1]=A[pos1]+A[pos2];
			A[pos2]=A[pos1]-A[pos2];
			A[pos1]=A[pos1]-A[pos2];		  
	}	

			  printf("\nThe array after swapping :\n",pos1,pos2);
		      for(i=0;i<size;i++) printf("%d\t", A[i]);
	} else {
		printf("\nCannot swap the element at position %d and %d, plz check range !", pos1, pos2);
		printf("\nThe origin array:\n");
		for(i=0;i<size;i++) printf("%d\t", A[i]);
	}
	return 0;
}



//60. xoa 1 phan tu trong array vi tri nguoi dung nhap
#include <stdio.h>
#include<stdlib.h>
int main(){
	int i,size;
    
	printf("Enter the size of the array: "); scanf("%d", &size);
	int A[size];
	for(i=0;i<size;i++)
	{  
	    scanf("%d",&A[i]);
	} 
	for(i=0;i<size;i++)
	printf("%d\t", A[i]);
	
	int pos;
	printf("\nEnter the position to remove an element: "); scanf("%d", &pos);
	if(pos>=0 && pos<size) {
		int value=A[pos];
		for(i=pos;i<size;i++)
		A[i]=A[i+1];
		size--;
				printf("\nThe array after removing element %d at position %d:\n",value,pos);
		      for(i=0;i<size;i++) printf("%d\t", A[i]);
		
	} else {
		printf("\nCannot remove the element at %d, plz check range !", pos);
		printf("\nThe origin array:\n");
		for(i=0;i<size;i++) printf("%d\t", A[i]);
	}
	return 0;
}





//61. In ra gio phut giay
#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int h,m,s;
	h=a/3600;
	printf("\n%d",h);
	m=(a-(h*3600))/60;
	printf("\n%d",m);
	s=a-h*3600-m*60;
	printf("\n%d",s);
	return 0;
}


//62. Tong so dau va so cuoi
#include <stdio.h>

int sum, a[100], x, count1 = 0, i;
int main()
{
    scanf("%d", &x);
    while (x != 0)
    {
        int n = x % 10;
        x = x / 10;
        a[count1++] = n;
    }
    sum = a[0] + a[count1 - 1];
    printf("%d", sum);
    return 0;
}

//64. Kiem tra exponent  
#include <stdio.h>
#include <math.h>

int main() {
    int num, base;
    double exponent;

    printf("Nh?p s? nguy�n: ");
    scanf("%d", &num);

    for (base = 2; base <= num; base++) {
        exponent = log(num) / log(base);
        if (exponent == (int) exponent) {
            printf("%d l� l?y th?a c?a %d^%d\n", num, base, (int) exponent);
            return 0;
        }
    }

    printf("%d kh�ng ph?i l� l?y th?a c?a b?t k? s? n�o\n", num);
    return 0;
}


//65. kiem tra n%5==0 in ra so lan xuan hien cua n 
#include<stdio.h>
#define max 100
int main()
{
	int i,n;
	scanf("%d",&n);
	int Arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&Arr[i]);
	}
	int count[max] = {0};
	printf("\nOUTPUT:\n");
	for ( i = 0; i < n; i++) 
	{
		count[Arr[i]]++;
	}
	for ( i = 0; i < max; i++) 
	{
		if (count[i] > 0) 
		{
			printf("%d-%d\n", i, count[i]);
		}
	}		
	return 0;
}



//66. binary->octal  
#include <stdio.h>
#include <math.h>

int binaryToOctal(long long binaryNumber);

int main() {
    long long binaryNumber;
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    printf("Octal number = %d", binaryToOctal(binaryNumber));
    return 0;
}

int binaryToOctal(long long binaryNumber) {
    int octalNumber = 0, decimalNumber = 0, i = 0;
    while (binaryNumber != 0) {
        decimalNumber += (binaryNumber % 10) * pow(2, i);
        ++i;
        binaryNumber /= 10;
    }
    i = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}



//66. check mang tang dan 
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define maxn 1000

int check(int a[], int n)
{
	int i;
	for (i = 0; i < n - 1; ++i)
	{
		if (a[i] > a[i + 1]) return 0;
	}
	return 1;
}

int main()
{
	int n, i, j, a[maxn];
	scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
	if (check(a, n) == 0) printf("-1");
	else printf("Mang tang dan");
	return 0;
}




//67. check mang doi xung 
#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define MAXN 1000

int main()
{
    int n, i, a[MAXN], check;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) scanf("%d", a + i);
    for (i = 0; i <= n / 2; ++i)
    {
        if (a[i] != a[n - i - 1])
        {
            check = 0;
            break;
        }
        else check = 1;
    }
    if (check == 1) printf("1");
    else printf("0");
    return 0;
}



//68.in ra SNT dau` tien
int checkprime(int n)
{
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) return 0;
    return 1;
}

int main()
{
	int n, i, j, a[n];
	scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        if (checkprime(a[i]) == 1)
        {
            printf("%d", a[i]);
            break;
        }
    if (i == n) printf("-1");
	return 0;
}


//69. tinh':  (-1)^n+1 * x^n
#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0, i, n,x;
	scanf("%d",&n);
	fflush(stdin);
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		sum+= ((pow(-1,i+1))*(pow(x,i)));
	}
	printf("\nOUTPUT:\n%d",sum);
	return 0;
}




//70. reverse day so
#include<stdio.h>
int main(){
    int i,j;

    long n;
    do
        scanf("%d",&n); 
    while (n<0);

    long rev=0;
    while (n!=0){
        rev=rev*10+n%10;
        n/=10;
    }
    n=rev;
    printf("%d",n);
}


//71. square odd number
#include<stdio.h>
int main(){
	int size;
		scanf("%d",&size);
	int i,Arr[size];
	for(i=0;i<size;i++)
	scanf("%d",&Arr[i]);
	for(i=0;i<size;i++)
		if(Arr[i]%2==1&& Arr[i]>0) {
			printf("%d ",Arr[i]*Arr[i]);
		} 
		printf("\n");
	return 0;
}

//72. in ra vi tri co tong bang` mot so nao` do
#include<stdio.h>
int main (){
	int size;
	scanf("%d",&size);
	int i,j,Arr[size];
	for(i=0;i<size;i++)
		scanf("%d",&Arr[i]);	
	for(i=0;i<size;i++)
		for(j=size-1;j>=0;j--)
			 {
			 if(Arr[i]+Arr[j]==5)
				printf("Sum = 5 at position %d and %d\n",i,j);
			 }
	return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------
Di?n t�ch v� chu vi h�nh ch? nh?t:
Di?n t�ch h�nh ch? nh?t = chi?u d�i x chi?u r?ng

Chu vi h�nh ch? nh?t = 2 x (chi?u d�i + chi?u r?ng)
//72. Dien tich, chu vi hcn
#include <stdio.h>

int main() {
   float chieu_dai = 5.0;
   float chieu_rong = 3.0;
   float dien_tich, chu_vi;

   dien_tich = chieu_dai * chieu_rong;
   chu_vi = 2 * (chieu_dai + chieu_rong);

   printf("Chieu dai = %f\n", chieu_dai);
   printf("Chieu rong = %f\n", chieu_rong);
   printf("Dien tich = %f\n", dien_tich);
   printf("Chu vi = %f\n", chu_vi);

   return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------------
Di?n t�ch v� chu vi tam gi�c:
Di?n t�ch tam gi�c = (d�y x chi?u cao) / 2

Chu vi tam gi�c = c?nh a + c?nh b + c?nh c
//72. Dien tich, chu vi hinh tam giac 
#include <stdio.h>

int main() {
   float day = 5.0;
   float chieu_cao = 3.0;
   float canh_a = 4.0;
   float canh_b = 3.0;
   float canh_c = 5.0;
   float dien_tich, chu_vi;

   dien_tich = (day * chieu_cao) / 2;
   chu_vi = canh_a + canh_b + canh_c;

   printf("Day = %f\n", day);
   printf("Chieu cao = %f\n", chieu_cao);
   printf("Canh a = %f\n", canh_a);
   printf("Canh b = %f\n", canh_b);
   printf("Canh c = %f\n", canh_c);
   printf("Dien tich = %f\n", dien_tich);
   printf("Chu vi = %f\n", chu_vi);

   return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------
Di?n t�ch v� chu vi h�nh tr�n:
Di?n t�ch h�nh tr�n = pi x b�n k�nh x b�n k�nh

Chu vi h�nh tr�n = 2 x pi x b�n k�nh
//72. Dien tich, chu vi hinh tron
#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
   float ban_kinh = 3.0;
   float dien_tich, chu_vi;

   dien_tich = PI * ban_kinh * ban_kinh;
   chu_vi = 2 * PI * ban_kinh;

   printf("Ban kinh = %f\n", ban_kinh);
   printf("Dien tich = %f\n", dien_tich);
   printf("Chu vi = %f\n", chu_vi);

   return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------------

//73. Factorial of n
/ Tinh F1(n) = n!
void FactorNumber(int n){
    int F1 = 1, i;
    for (i = 1; i <= n; i++){
        F1 *= i;
    }
    printf("F1(%d) = %d\n", n, F1);
}

// 74.Tinh tong phan so F2(n) = 1 + 2 + 3 + ... + n
void SumFraction(int n){
    int F2 = 0, i;
    for (i = 1; i <= n; i++){
        F2 += i;
    }
    printf("F2(%d) = %d\n", n, F2);
}

// 75.Tinh F1(n) + F2(n) = m
void SumF1F2(int n, int m){
    int tempF1, i;
    for (i = 1; i <= n; i++){
        tempF1 = 1;
        int j;
        for (j = 1; j <= i; j++){
            tempF1 *= j;
        }
        if(tempF1 + (int)(i * (i + 1) / 2.0) == m){
            printf("n = %d\n", i);
            break;
        }
    }
}

// 76.Nhap so nguyen n
int Input(){
    int n;
    printf("Enter an int num:");
    scanf("%d", &n);
    return n;
}

// 77.Tinh n^m
void Tinhsomu(int n, int m){
    int nm = 1, i;
    for (i = 1; i <= m; i++){
        nm *= n;
    }
    printf("%d^%d = %d\n", n, m, nm);
}

int main(){
    int n = Input();
    FactorNumber(n);
    SumFraction(n);
    int m;
    printf("Enter an int m:");
    scanf("%d", &m);
    SumF1F2(n, m);
    Tinhsomu(n, m);
    return 0;
}

// 78.In ra cac so chan o vi tri le theo thu tu giam dan coi v? tri tri dau la vi tri 1
int main() {
    int n, a[20], b[10], k = 0;
    int i, j;
    printf("Nhap so phan tu cua mang (5 <= n <= 20): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
        if (i % 2 != 0 && a[i] % 2 == 0) { // kiem tra vi tri le va gia tri chan
            b[k] = a[i];
            k++;
        }
    }

    // 79.sap xep mang b theo thu tu giam dan
    for (i = 0; i < k-1; i++) {
        for (j = i+1; j < k; j++) {
            if (b[i] < b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    // in ket qua
    printf("Cac so chan o vi tri le theo thu tu giam dan: ");
    for (i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
// 80. tinh avg cac so le trong mang
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, i; 
    scanf("%d", &n);
    int array[n];
    int sum =0; 
    int count = 0; 
    for(i = 0; i < n; i++)  scanf("%d", &array[i]);
    for(i = 0; i < n; i++)
    {
        if(array[i] %2 != 0)
        {
            sum += array[i]; 
            count ++; 
        }
    }
    float avg = 1.0  *sum / count; 
    printf ("%.3f", avg);

    return 0;
}

//81 tim  n so nguyen to tiep theo 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int isPrime(int n){
    if (n<2) return 0;
    int i,l=(int) sqrt(n);
    for (i=2;i<=l;i++)
        if (n%i==0) return 0;
    return 1;
}
int main() {
    int i;
    int n;
    int count = 0;
    do{
        scanf("%d", &n);
    } while (n <=0 || n >=100);

    while(1)
    {
        n++;
        if (isPrime(n))
        {
            count ++;
            printf("%d\n", n);
        }
        if (count == 4) break;
    }
    
    return 0;
}