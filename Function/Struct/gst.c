#include <stdio.h>
#include <string.h>

struct Bill{
	int rate,qty,amt,gst,netbill;
};

struct Bill tax;

int main()
{
	struct Bill b1[3];
	
	for(int i=0;i<3;i++)
	{	
	printf("Enter the rate :- ");
	scanf("%d",&b1[i].rate);
	printf("Enter the qty :- ");
	scanf("%d",&b1[i].qty);
	}
	
	printf("\n");
	
	for(int i=0;i<3;i++)
	{	
	printf("Rate :- %d\n",b1[i].rate);
	printf("Qty :- %d\n",b1[i].qty);
	
	b1[i].amt=b1[i].rate*b1[i].qty;
	printf("Bill Amount :- %d\n",b1[i].amt);
	
	tax.gst=b1[i].amt*18/100;
	printf("GST Amount :- %d\n",tax.gst);
	
	b1[i].netbill=b1[i].amt+tax.gst;
	printf("Net Bill Amount :- %d\n\n\n",b1[i].netbill);
	
	}
	
	return 0;
}