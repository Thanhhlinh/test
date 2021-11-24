#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    do{
    	printf("nhap vao gia tri cua N:"),scanf("%d",N);
    	if(N<0&&N!=(int)N)
    		printf("vui long nhap lai N:"),scanf("%d",N);
	}while(N>0&&N==(int)N);
	int giaiThuaN,giaiThuaLe,giaiThuaChan,i;
	for(i=1;i<=N;i++)
		giaiThuaN=i*i;
	printf("N!=%d",giaiThuaN);
	for(i=1;i<=N;i++){
		if(i%2==0)
			giaiThuaChan=i*i;
	}
	printf("giai thua chan cua N=%d",giaiThuaChan);
	for(i=1;i<=N;i++){
		if(i%2!=0)
			giaiThuaLe=i*i;
	}  
	printf("giai thua le cua N=%d",giaiThuaLe);
    return 0;
}


