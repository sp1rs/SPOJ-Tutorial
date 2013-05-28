#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	int i=0;
	for(i=0;i<t;i++){
		int x;
		scanf("%d",&x);
		int j;
		int sum=0;
		if(x==1){
			printf("0\n");
		}else{
			int r=floor(sqrt(x));	
			sum+=1;
			if(r*r==x){
				sum+=r;
				r-=1;
			}
//			printf("%d",x);
			if(x%2==0){
				for(j=2;j<=r;j++){
					if(x%j==0){
						sum+=j+x/j;	
					}
				}
			}else{
				for(j=3;j<=r;j+=2){
					if(x%j==0){
						sum+=j+x/j;
					}
				}
			}	
			
		printf("%d\n",sum);
		}
	}
}
