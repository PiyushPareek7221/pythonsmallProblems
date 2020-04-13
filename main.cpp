#include <iostream>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int l,i,j,l1,l2,l3;
	char name[50],arr1[50]="",arr2[50]="",c,arr3[50]="",arr4[50]="";
	scanf("%s",name);
	l=strlen(name);
    if(l%2!=0){
    	printf("%c ",name[(l)/2]);
	for(i=l/2,j=0;j<l/2+1;i++,j++){
		arr1[j]=name[i];
 }
	for(i=0,j=0;j<l/2;i++,j++){
		arr2[j]=name[i];
	}
//	printf(" %s %s ",arr1,arr2);
	l1=strlen(arr1);
//	printf("%d\n",l1);
	arr3[0]=arr1[0];
	for(i=1;i<l1;i++){
		arr3[i]=arr1[i];
		printf("%s ",arr3);
	}
	
	
	l2=strlen(arr1);
	l3=strlen(arr2);
	for(i=0;i<l2;i++)
	arr4[i]=arr1[i];
//	printf("\n%s",arr4);
    for(i=l2,j=0;i<l2+l3;i++,j++){
    	arr4[i]=arr2[j];
    	printf("%s ",arr4);
	}		
			
}
	return 0;
}
