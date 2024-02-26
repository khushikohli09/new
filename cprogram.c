#include<stdio.h>
int main(){
	int a,b,choice;
	printf("enter two integer:");
	scanf("%d %d",&a,&b);
	printf("Enter choice: 1.(+) 2.(-) 3.(*) 4.(%)");
	scanf("%d",&choice);
	switch(choice){
		case 1: printf("Result: %d",a+b);
			break;
		case 2:printf("Result: %d",a-b);
		        break;
		case 3: printf("Result : %d",a*b);
			break;
		case 4: if(b!=0){
				printf("Result:%.2f",(float)a/b);
			}
			else{
				printf("Error! Division is not possible.");
			}
			break;
		default:
			printf("Error! Invalid Choice");
			break;
	}
	return 0;
}
