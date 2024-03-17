 Bai 1 : Dem so chan , le . Tong chan , tong le 
 Bai 2 : Trung binh cong nguyen to
 Bai 3 : So nho nhat ma xuat hien nhieu nhat 
 Bai 4 : So lon hon x, nho hon x 
 Bai 5 :  In phan tu la so chan o chi so chan 
 Bai 6 : Cap so bang so k 
 Bai 7 : Cap so chenh lech nho nhat
 Bai 8 : Liet ke gia tri khac nhau trong mang theo thu tu xuat hien / thu tu tang dan ( moi gia tri chi lke 1 lan ) 
 Bai 9 : Gia tri xuat hien cua cac phan tu trong mang kem theo tan suat
 Bai 10 : Voi tri lon nhat , vi tri nho nhat
 Bai 11 : So lon nhat va so lon thu hai
 Bai 12 : Mang doi xung
 Bai 13 : Xoa phan tu k khoi mang
 Bai 14 : Tan xuat xuat hien cua so chia het cho 3
 Bai 15 : Nhap vao so nguyen duong n va n so nguyen. Tim so xuat hien nhieu nhat
 Bai 16 : Phan tu xuat hien it nhat 2 lan
 ------------------- Ma tran ---------------------
 Bai 17 : Tinh tong / hieu hai ma tran 
 Bai 18 : Tong / tich duong cheo chinh 
 Bai 19 : So nguyen to tren duong cheo chinh va phu
 Bai 20 : Ma tran chuyen vi
 Bai 21 : Ma tran chuyen vi in theo yeu cau
 Bai 22 : Ma tran chuyen vi in theo yeu cau
 Bai 23 : Ma tran chuyen vi in theo yeu cau
 Bai 27: tim max tren duong cheo chinh 
 
 Bai 24 : So chan xuat hien nhieu nhat
 Bai 25 : So chan co hai chu so xuat hien nhieu nhat 
 Bai 26: Loai phan tu trung lap va in ra thu tu xuat hien / xuat hien chan /le 
 		 or in theo tang dan theo thu tu xuat hien / xuat hien chan /le
 


	// BAI LAM :

-------------------Bai 1 : Dem so chan , le . Tong chan , tong le-------------------- 
5
2
4
7
3
6

OUTPUT:
3
2
12
10
#include <stdio.h>

int main(){
	int n,i; // so luong phan tu cua mang 
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int chan = 0 , le =0; // de dem so luong so chan , so le
	int tongchan =0, tongle=0;// de tinh tong chan , tong le 
	// duyet tu dau => cuoi : kiem tra chan le 
	for(i=0;i<n;i++){
		if(a[i]%2 == 0){
			++chan;
			tongchan +=a[i];  // tongchan 1 : 372 sau do 372 + ( -864) = -492
		}
		else{
			++le;
			tongle +=a[i];
		}
	}
	printf("\nOUTPUT:\n%d\n%d\n%d\n%d", chan, le,tongchan,tongle);
	return 0;
}


---------------Bai 2 : Trung binh cong nguyen to----------------------
Input 
5 
-911 234 151 347 231

Output 
249.000


#include <stdio.h>
#include <math.h>

int nt(int n){
	int i;
	for(i =2;i<= sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return n>1; // do am thi k tinh la snt
}


int main(){
	int n,i; // so luong phan tu cua mang 
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int cnt=0, sum=0; // bien cnt khoi tao = 0 : dem so luong so nt , sum = 0 : tinh tong snt
	for ( i=0;i<n;i++){
		if(nt(a[i])){
			++cnt;
			sum+=a[i];
		}
	}
	printf("\nOUTPUT:\n");
	printf("%.3lf",(double)sum/cnt);
	return 0;
}


--------------------- Bai 3 : So lan xuat hien cua so ma xuat hien nhieu nhat -------------
5
1 2 1 3 5

OUTPUT:
2

#include <stdio.h>

int main(){
	int n,i;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);		
	}
	
	int min = 1e9;
	for (i=0;i<n;i++){
		if ( min > a[i])
		min = a[i];
		// min = fmin(min,a[i]);
	}
	int cnt=0;
	for( i=0;i<n;i++){
		if(min==a[i])
		++cnt;
	}
	printf("\nOUTPUT:\n");
	printf("%d",cnt);
	return 0;
}

-----------Bai 4 : So lon hon x, nho hon x -----------------
5
123 30 127 50 89
50

OUTPUT:
1 3

#include<stdio.h>

int main(){
	int n,i;
	int a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x=0;
	scanf("%d",&x);
	int nho=0,lon=0;
	for(i=0;i<n;i++){
		if(a[i]>x){
			++lon;
		}
		else if(a[i]<x)
			++nho;
	}
	printf("\nOUTPUT:\n");
	printf("%d %d",nho,lon);
	return 0;
}


---------Bai 5 : In phan tu la so chan o chi so chan---------- 
Input 
5
-971 107 458 222 200
Output 
458 200
#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nOUTPUT:\n");
	int check = 0; // kiem tra xem co so nao thoa man khong
	for (i=0;i<n;i++){
		if(i%2 == 0 && a[i]%2 ==0){
		printf("%d ",a[i]);
		check =1; // da tim thay roi
		}
	}
	if (check == 0)
		printf("NONE");
	return 0;
}
 

----------Bai 6 : Cap so bang so k------------------
5
1 2 3 1 2
3

OUTPUT:
4
#include <stdio.h>

int main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k,j;
	scanf("%d",&k);
	int cnt=0;
	// xet thang a[i] cap voi nhung phan tu a[j] => j bat dau i+1 va ket thuc la n-1 ( vi khong xet so cuoi cung vi sau no khong con so nao khac de so sanh)
	for(i = 0; i < n - 1; i++){
		for(j = i + 1;j < n; j++){
			if(a[i]+a[j]==k){
				++cnt;
			}
		}
	}
	printf("\nOUTPUT:\n");
	printf("%d",cnt);
	return 0;
}


// bonus : in them ra nhung cap so = k
5
1 5 3 5 4
4

OUTPUT:
1 3
#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int k, j;
    scanf("%d", &k);
    printf("\nOUTPUT:\n");

    // xet thang a[i] cap voi nhung phan tu a[j] => j bat dau i+1 va ket thuc la n-1 ( vi khong xet so cuoi cung vi sau no khong con so nao khac de so sanh)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                printf("%d %d\n", a[i], a[j]); // Add a line break after each pair
            }
        }
    }

    return 0;
}

--------------------Bai 7 : Do chenh lech nho nhat giua 2 phan tu trong mang --------------------

8
69 96 93 27 84 32 78 56

OUTPUT:
3

#include <stdio.h>
#include <math.h>

int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	int j;
	int min = 1e9;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(abs(a[i]-a[j])<min){
			min = abs(a[i]-a[j]);
			}
		}
	}
	printf("\nOUTPUT:\n");
	printf("%d",min);
	return 0;
}

------------Bai 8 : Liet ke gia tri khac nhau trong mang theo thu tu xuat hien ( moi gia tri chi lke 1 lan ) -------------
Input 
9
2 1 3 1 1 2 5 4 5
Output 
2 1 3 5 4

#include <stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nOUTPUT:\n");
	for(i=0;i<n;i++){
		int j;
		int check =1;
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
			check=0; break;
			}
		}
		if(check)  printf("%d ",a[i]);		
	}
	return 0;
}

Theo thu tu tang dan 
7
8 5 8 5 9 6 9
5 6 8 9
	
#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Number of elements must be positive.\n");
        return 1;  
    }

    int a[n];

    for ( i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for ( i = 0; i < n; i++) {
        int isUnique = 1;
        for ( j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", a[i]);
        }
    }

    printf("\n");

    return 0;
}


--------------Bai 9 : Gia tri xuat hien cua cac phan tu trong mang kem theo tan suat ------
8
57 58 29 28
Sample Output 
57 1
58 1
29 1
28 1

#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nOUTPUT:\n");
	for(i=0;i<n;i++){
	int check=1;
	int j;
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				check =0; break;
			}
		}
		if(check){
			int cnt=1;
			for(j=i+1;j<n;j++){
				if(a[i]==a[j])
					++cnt;
			}
		printf("%d %d\n", a[i], cnt);	
		}
	}	
	return 0;
}


------------- Bai 10: Gia tri nho nhat va lon nhat trong mang 
( nhieu gia tri : in ra gtri nho nhat cuoi cung va lon nhat dau tien)

Input 
7
1  4  2  3  4  5  6
Output 
0 6

// Cach 1:
#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=1e9; int max=-1e9, min_pos, max_pos;
	// no mac dinh in ra vi tri nho nhat xuat hien lan dau 
	// de bai : in ra vi tri nho nhat cuoi cung thi a[i]<=min
	// no se xet den vi tri cuoi cung va cap nhat
	for (i = 0; i < n; i++) {
        if (a[i] <= min) {
            min = a[i];
            min_pos = i;
        }
        if (a[i] > max) { 
            max = a[i];
            max_pos = i;
        }
    }
    printf("%d %d", min_pos, max_pos);
    return 0;
}

// Cach 2:
#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=1e9; int max=-1e9;
	for (i = 0; i < n; i++) {
        if (a[i] <= min) {
            min = a[i];
        }
        if (a[i] > max) { 
            max = a[i];
        }
    }
    // In ra phan tu nho nhat cuoi cung
    for(i=n-1;i>=0;i--){
    	if(a[i] == min){
		printf("%d ",i); break;
		}
	}
	// In ra phan tu lon nhat dau tien
	for(i=0;i<n;i++){
		if(a[i] == max){
		printf("%d",i); break;
		}
	}
return 0;
}

-------------Bai 11: So lon thu nhat va so lon thu hai
Sample Input 1: 
5
2   3   4   1   5
Sample Output 1: 
5 4

#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max1=-1e9,max2=-1e9;
	for(i=0;i<n;i++){	
		
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		else if(a[i]> max2){
			max2=a[i];
		}
	}
	printf("%d %d",max1,max2);
	return 0;
}


// In ra so lon nhat va so nho thu hai ( khong trung )
5
2   1   3   4   4
Output : 
4 3
 
#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max1=-1e9,max2=-1e9;
	for(i=0;i<n;i++){	
		
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		else if(a[i]> max2 && a[i]<max1){
			max2=a[i];
		}
	}
	printf("%d %d",max1,max2);
	return 0;
}

------------------Bai 12: Mang doi xung-------------------------- 
#include <stdio.h>

int check(int a[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        if (a[left] != a[right]) {
            return 0;
        }
        left++;
        right--; 
    }
    return 1; 
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (check(a, n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

//C2:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  //Kiem tra tinh doi xung day (symmetric)
  int n, check = 1;
  scanf("%d", &n);
  int* array = (int*)malloc(sizeof(int)* n);
  int i;
  for( i = 0; i < n; i++)
  {
  	scanf("%d", &array[i]);
  }
  for( i = 0; i < n/2; i++)
  {
	  if(array[i] != array[n-i-1])
	  {
		check = 0;
	  	break;
	  }
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(check == 1) printf("YES");
  else printf("NO");
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
*/


------------------Bai 13 Xoa phan tu k khoi mang---------------
5
1 3 5 6 7
2

OUTPUT:
1
5
6
7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,j,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int p;
	scanf("%d",&p);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i=p-1;i<n;i++){  // tinh tu phan tu thu 1
  		a[i]=a[i+1];
	}
	--n;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


----------Tinh tu index=0
#include <stdio.h>
#include <stdlib.h>

int main() {
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n,i, k;
    scanf("%d", &n);

    if (n <= 0) {
        return 1;
    }

    int a[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    if (k < 0 || k >= n) {
        return 1;
    }

    // Remove the element at index k
    for ( i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--; // Decrease the size of the array

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    for ( i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE

    return 0;
}

---------------Bai 14 : Tan xuat xuat hien cua so chia het cho 3--------------- 
nhap n 10
6 9 3 6 12 9 3 3 6 12

OUTPUT:
6 3
9 2
3 3
12 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,a[100],b[100],c[100],i,j,count=0,check;
	printf("nhap n ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if (a[i]%3==0){
			if (count==0){
					b[count]=a[i];
					c[count]=1;
					count++;
			}
			else{
				check=1;
				for (j=0;j<count;j++){
					if (b[j]==a[i]){
						c[j]++;
						check=0;
					}
				}
				if (check==1){
					b[count]=a[i];
					c[count]=1;
					count++;
				}
			}
		}
	}	
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (j=0;j<count;j++){
		printf("%d %d\n",b[j],c[j]);
	}	
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}




-------------Bai 15 : Nhap vao so nguyen duong n va n so nguyen. Tim so xuat hien nhieu nhat

10
5 3 2 3 -2 -5 -3 5 5 2

OUTPUT:
5

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
}


------------------------------Bai 16 : Dem so lan phan tu xuat hien it nhat 2 lan---------------------------- 
5
1 4 1 4 5
Output : 
2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Nhap vao so nguyen duong n va n so nguyen. Tim so phan tu duoc lap trong mang
#include <math.h>
#include <ctype.h>


int main() {
  	int n;
  	int arr[1000], b[1000] = {0}, c[1000] = {0};// Khoi tao 3 mang so nguyen
  	int i;
  	scanf("%d", &n);//So phan tu cua mnag
  	for(i = 0; i < n;i++)
  	{
  		scanf("%d", &arr[i]);//Nhap cac phan tu cua mang	
	}
	for(i = 0; i < n;i++)
	{
		if(arr[i] > 0)
			b[arr[i]]++;//Tra ve so cac phan tu lon hon 0 trong arr
		if(arr[i] < 0)
			c[-arr[i]]++;//Tra ve so phan tu nho hon 0 trong arr
	}
	int sum  = 0;
	int m=0,k=0;
	//Vong lap tra ve so cac phan tu duoc lap trong mang
	for(i = 0; i < 1000;i++)
	{
		if(b[i] > 1){
			sum++;
//			printf("%d ",i);
		}
		if(c[i] > 1){
			sum++;
//			printf("%d ",-i);
		}
	}
	printf("\n%d",sum);
}

------------------------------Bai 17 : Tong hieu cua 2 ma tran ---------------------------- 

2 2
1 2
3 4
2 1
4 3

OUTPUT:
3 3
7 7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int a[n][m],b[n][m];
	for (i=0;i<n;i++){
		for(j=0;j<m;j++) scanf("%d",&a[i][j]);
	}
	for (i=0;i<n;i++){
		for(j=0;j<m;j++) scanf("%d",&b[i][j]);
	}	
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int c[n][m];
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j] + b[i][j];
		}
	}
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

------------------------------Bai 18 : Tong/ Tich cua duong cheo chinh trong ma tran ---------------------------- 


3
1 2 3
4 5 6
7 8 9

OUTPUT:
15 // tong duong cheo chinh 
45 // tich duong cheo chinh

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j,m;
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
		 scanf("%d",&a[i][j]);
		}
	}
	int nt(int n){
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0)
				return 0;
		}
		return n>1;
	}	
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    int sum  = 0; 		//tongduong_cheo_chinh
    int tich = 1; 		//tichduong_cheo_chinh
    for (i = 0; i < n; i++) {
        sum += a[i][i]; // duong cheo chinh
    }

    printf("%d\n",sum);

    for (i = 0; i < n; i++) {
        tich *= a[i][i]; // duong cheo chinh
    }
    printf("%d", tich);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

------------------------------Bai 19 : So nguyen to tren duong cheo chinh va phu  ---------------------------- 


3
1 2 3
4 5 6
7 8 9
Output : 
3 ( snt 2, 5 , 7)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
		 scanf("%d",&a[i][j]);
		}
	}
	int nt(int n){
		int i;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0)
				return 0;
		}
		return n>1;
	}	
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int cnt = 0;

    for (i = 0; i < n; i++) {
        if (nt(a[i][i])) ++cnt; // duong cheo chinh
        if (nt(a[i][n - i - 1])) ++cnt; // duong cheo phu
    }
	if(nt(a[n/2][n/2])) --cnt; // la phan tu dung giua duong cheo chinh va phu
	printf("%d",cnt);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


------------------------Bai 20 : Ma tran chuyen vi-------------------- 
3
1 2 3
4 5 6
7 8 9

OUTPUT:
1 4 7
2 5 8
3 6 9
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
		 scanf("%d",&a[i][j]);
		}
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i=0;i<n;i++){   // i la chi so cot 
		for(j=0;j<n;j++){  // j la chi so hang
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

------------------------Bai 21 : Ma tran chuyen vi in theo yeu cau -------------------- 
3
1 2 3
4 5 6
7 8 9

OUTPUT:
9 8 7
6 5 4
3 2 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
		 scanf("%d",&a[i][j]);
		}
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i=n-1;i>=0;i--){  // i la chi so hang
		for(j=n-1;j>=0;j--){  // j la chi so cot
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

------------------------Bai 22 : Ma tran chuyen vi in theo yeu cau -------------------- 

3
1 2 3
4 5 6
7 8 9

OUTPUT:
9 6 3
8 5 2
7 4 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
		 scanf("%d",&a[i][j]);
		}
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i=n-1;i>=0;i--){  // i la chi so hang
		for(j=n-1;j>=0;j--){  // j la chi so cot
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


------------------------Bai 23 : Ma tran chuyen vi in theo yeu cau -------------------- 

3
1 2 3
4 5 6
7 8 9

OUTPUT:
3 6 9
2 5 8
1 4 7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
		 scanf("%d",&a[i][j]);
		}
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i=n-1;i>=0;i--){  // i la chi so hang
		for(j=0;j<n;j++){  // j la chi so cot
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

----------------------Bai 24 : So chan xuat hien nhieu nhat -----------------------
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
            if (evenCount[i] == maxEvenCount && i % 2 == 0) {
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
----------------------Bai 25 : So chan co hai chu so xuat hien nhieu nhat -----------------------

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


-------------------- Bai 26: Loai phan tu trung lap va in ra thu tu xuat hien--------------
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
//  Bai 27: tim max tren duong cheo chinh 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    int i,j,n;
     
    scanf("%d", &n);
    int matrix[n][n];

    for (i =0; i < n; i++)
    {
      for(j=0; j< n; j++)
      {
        scanf("%d", &matrix[i][j]);
      }
    }
    // duong cheo chinh thi i = j
    int max = matrix[0][0];
    for (i =0; i < n; i++)
    {
      for(j=0; j< n; j++)
      {
        if(max < matrix[i][j] && i == j)
        {
          max = matrix[i][j];
        }
      }
    }
    printf("%d", max);

    return 0;
}



