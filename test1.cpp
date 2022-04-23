#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 100
// nhap mang
void nhap(int a[][50],int &n,int &m)
{ 
    
   
     
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        a[i][j] = rand()%10;        	
           
        }
       
    }
   
   
}
// ham random
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
// xuat mang
void xuat(int a[][50],int &n,int &m)
{
	
    
 printf("ma tran la:\n");
 	srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
       
        	
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

//tong cot
void TongCot(int a[][50],int n,int m)
{ 
   int max = 0;
 for(int i=0;i<m;i++)   
  {
   int s=0; 
        for(int j=0;j<n;j++)   
  {                
		 s=s+a[j][i];  
		        if(s>max){
      				max=s;      	            
      	printf("  %d\n",a[j][i]); 
	  }    
			}
				                                    
      }
       
      
      
     
   
}

//tong hang
int TongHang(int a[][50],int n,int m)
{
 
 for(int i=0;i<n;i++)   
  {
   int s=0;
     for(int j=0;j<m;j++)
      {
      s=s+a[i][j];
      printf("%d ", a[i][j]);
      }
     printf(" = %d\n",s); 
   }
}
// tong cheo
void tongcheo(int a[][50],int n,int m)
{
	int s=0;
  for(int i=0;i<n;i++)   
  {
   		s=s+a[i][i];      	
      		printf(" %d ",a[i][i]);       		          
        
 }
 
  printf(" = %d",s);
}
 
int main()
{
	int a[50][50];
 int i,j,m,n;
 nhap(a,n,m);
 xuat(a,n,m);
 printf("\n cot \n");
 TongCot(a,n,m);
 printf("\n Hang \n");
 TongHang(a,n,m);
 printf("\n duong cheo \n");
 tongcheo(a,n,m); 
 
 return 0;
}
