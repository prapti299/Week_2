#include<stdio.h>
int main(){
	int n,m,i,j,c=0,s=0;
	printf("enter row and column:");
	scanf("%d %d", &n,&m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	if(n==m){
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if((i==j&&a[i][j]==1))
			c++;
		}
		if(i!=j&&a[i][j]==0){
			s++;
		}
	}
	if(c==m&&s==(m+m)){
		printf("identity matrix");
	}
	else{
		printf("not identity matrix");
	}
}
	else{
		printf("not identity matrix");
	}
}