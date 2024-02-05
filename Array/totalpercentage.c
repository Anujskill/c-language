#include <stdio.h>
int main()
{
		int i,total[5],eng[5],hindi[5],guj[5],per[5];
		char grade[5];
		
		for(i=1;i<6;i++)
		{
			printf("Enter the marks of eng :- ");
			scanf("%d",&eng[i]);
			printf("Enter the marks of hindi :- ");
			scanf("%d",&hindi[i]);
			printf("Enter the marks of guj :- ");
			scanf("%d",&guj[i]);
			
			total[i]=eng[i]+hindi[i]+guj[i];
			per[i]=(total[i]*100)/300;
		}
		
		printf("\neng\thindi\tguj\ttotal\tper\tgrade\n");
		
		for(int i=1;i<6;i++)
		{
			printf("\n%d\t%d\t%d\t%d\t%d\t%d",eng[i],hindi[i],guj[i],total[i],per[i],grade[i]);
			
			if(per[i]<=35)
			{
				printf("Fail");
			}
			else if(per[i]>=90)
			{
				printf("Grade A");
			}
			else if(80<=per[i]<90)
			{
				printf("Grade B");
			}
			else if(per[i]>=70 && per[i]<80)
			{
				printf("Grade C");
			}
			else if(60<=per[i]<70)
			{
				printf("Grade D");
			}
			else
			{
				printf("Grade E");
			}
		}

	
	return 0;
	
}