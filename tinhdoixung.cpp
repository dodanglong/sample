#include <stdio.h>
#include <conio.h>
#define M 100
#define N 100
int main ()
{
	int A[M][N];
	int n,m,i,j;
	//kiem tra so dong so cot
	do
	{
		printf("\nNhap so dong ma tran A:");
		scanf("%d",&m);
		printf("\nNhap so cot ma tran A:");
		scanf("%d",&n);
	}
	while (m>=M||n>=N);
	//nhap va in ma tran A
	printf("\nNhap phan tu ma tran A:");
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	{
		printf("A[%d][%d]",i,j);
		scanf("%d",&A[i][j]);
	}
	printf("\nMa tran A la:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",A[i][j]);
		printf("\n");
	}
	//kiem tra tinh doi xung
	int k=0;3
	for (i=0;i<m;i++)
	for (j=0;j<m;j++)
	{
		if (A[i][j]!=A[j][i])
		k=1;
	}
	if (k==0) 
	printf ("\nMa tran A la ma tran doi xung");
	else 
	printf("\nMa tran A la ma tran khong doi xung");
	return 0;
}
