#include<stdio.h>
void addpolynomial(int c[],int d[],int g){
	for(int i=0;i<g;i++){
		int t= c[i]+d[i];
		if(i==0){
			printf("%d+",t);
		}
		else{
			if(i==g-1){
				printf("%dX^%d",t,i);
			}else{
		        printf("%dX^%d+",t,i);
		    }
		}
		t=0;
	}
}
int main(){
	int r,c,i,j;
	printf("enter rows and column:");
	scanf("%d %d ",&r,&c);
	 int max = (r > c) ? r : c;
    int a[max], b[max];
    for (i = 0; i < max; i++) {
        a[i] = 0;
        b[i] = 0;
    }
	for(i=0;i<r;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<c;j++){
		scanf("%d",&b[j]);
	}
    addpolynomial(a,b,max);
	return 0;
}