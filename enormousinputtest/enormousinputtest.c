#include<stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i;
	int x;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x%k==0)
			sum++;
	}
	printf("%d\n",sum);
	return 0;
}
