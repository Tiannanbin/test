#include <stdio.h>
int main()
{
	int a,b,c,i;
	int compare=0;
	printf("����������������");
	scanf("%d %d %d",&a,&b,&c);
	for(i=0;i<=2;i++)
	{
		if(a<b){
			compare=a;
			a=b;
			b=compare;
		}
		if(b<c){
			compare=b;
			b=c;
			c=compare;
		}
		if(a<c){
			compare=a;
			a=c;
			c=compare;
	}
}
	printf("���������Ĵ�С˳��Ϊ%d>%d>%d",a,b,c);
	
	return 0;
	}

