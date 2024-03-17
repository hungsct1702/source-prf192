
-------------------------------------------------------------------------------
//dau: " = \"    ' = \'

/*if (strstr(string, substring) != NULL) {
    // Substring found in the string
    // Do something...
} else {
    // Substring not found in the string
    // Do something else...
}
*/  // kiem tra substring co trong string hay ko

int		%d, %i
char		%c
float		%f
double		%lf
short int	%hd
unsigned int	%u
long int	%ld, %li
long long int	%lld, %lli
unsigned long int %lu
unsigned long long int	%llu
signed char		%c
unsigned char	%c
long double		%Lf

in sau dau phay : printf ( %.so_muon_in_dacta , dientich �); vd : printf("%.2f", dientich);
Ep bien : 
				C1 : float / double thuong = a/b 
				 300,00/200 = 1,500
				C2 : = 1.0* a/b ( nen su dung de toi uu )
				
------------------------------ Toan tu so sanh ---------------------------------------
				
== : so sanh bang 
= : g�n 
! = : so s�nh kh�c 
>: lon hon 
< : nho hon 
>= : lon hon hoac bang 
<= : nho hon hoac bang

------------------------------ Toan tu logic -----------------------------------------
&& : and 
|| : or 
! : not


------------------------------ Phep toan ---------------------------------------------

sqrt (x) : Tinh can bac 2
pow ( x,y ) : t�nh x^y
abs (x) : t�nh gi� tri tuyet doi cua x


------------------------------ STRING-------------------------------------------------

Nhap gia tri: 
			Nhap khong co dau cach
					+ scanf("%s",c); 
			Nhap co dau cach : 
					+ gets(...); 
 			  		+ fgets(xau_muon_nhap,so_luong_ki_tu_toi_da,luong_vao);
						hoac scanf("%[^\n]%*c", string);

 			  
Mot so ham thuong dung : 
isdigit(char c) : Kiem tra chu so	
islower(char c) : Kiem tra chu in thuong
isupper(char c) : Kiem tra chu in hoa
isalpha(char c) : Kiem tra chu cai 
int tolower(char c) : Chuyen thanh chu in thuong
int toupper(char c) : Chuyen thanh chu in hoa

char* strlwr(char[]); 					 : Chuyen ve in thuong
char* strupr(char[]); 					 : Chuyen ve dang in hoa
char* strcat(char dich[], char nguon[]); : noi xau nguon vao dich
char* strcpy(char dich[], char nguon[]); : copy xau nguon vao dich
Char *strncpy(char *dich, char *nguon, int n) : copy k� tu dau cua xau nguon sang  dich 
char* strrev(char c[]); 			     : Lat nguoc xau
char* strstr(char c[], char d[]);        : Tra ve con tro tai vi tri dau tien 
strtok 									 : Tach ki tu trong xau

int strcmp(char a[], char b[]); 
	+ a < b => -1
 	+ a > b => 1
 	+ a = b => 0
 	
---------------------------------------CONG THUC TOAN HOC ---------------------------------------	

H�nh tron :
			Dien_tich = pi * ban_kinh * ban_kinh
			Chu_vi = 2 * p * r

Hinh Chu Nhat : 
			Dien_tich = a * b
			Chu_vi = 2 * (a + b)

Tam giac: 
			s = (a + b + c) / 2
			Dien_tich = sqrt(s * (s - a) * (s - b) * (s - c))
			
			Chu_vi = a + b + c
			
			
-------------------------------------- TU VUNG -----------------------------------------------
even : chan
odd : le
ascending : tang dan 
descending : giam dan
prime : so nguyen to 
leap year : nam nhuan 
a is power of 2 : 2^a
perfect number : so hoan hao : tong uoc = so do : 6 = 1 + 2 + 3
