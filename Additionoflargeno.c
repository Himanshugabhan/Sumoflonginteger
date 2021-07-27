#include<stdio.h>
void main(){
	char *str1,*str2;
	int *r,res,cy=0,i,l,l1,l2,count=0;
	str1=(char*)malloc(sizeof(char));
	str2=(char*)malloc(sizeof(char));
	gets(str1);
	gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	strrev(str1);
	strrev(str2);
	if(l1>=l2){l=l1;
	r=(int*)malloc(sizeof(int)*l);
	for(i=l2;i<l1;i++){
		str2[i]='0';
	}
	}
	else{l=l2;
	r=(int*)malloc(sizeof(int)*l);
	for(i=l1;i<l2;i++){
		str1[i]='0';
	}
       }
	for(i=0;i<l;i++){
		res=(str1[i]-48)+(str2[i]-48)+cy;
		r[i]=res%10;
		cy=res/10;
	}
	while(cy!=0){
		r[i++]=cy%10;
		cy=cy/10;
	}
	count=i;
	for(i=count-1;i>=0;i--){
		printf("%d",r[i]);
	//	printf("%d\n\n",i);
	}
}//(int*)malloc(sizeof(int))
