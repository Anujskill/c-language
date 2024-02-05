#include <stdio.h>

int main()
{
	int rate,qty;
	
	scanf("%d\t%d",&rate,&qty);
	
	int amt=rate*qty;
	int dis=amt*5/100;
	int billamt=amt-dis;
	int gst=billamt*18/100;
	int netbill=billamt+gst;
	
	printf("Rate\tQty\tAmt\tDis\tBillamt\tGst\tNetbill\n");
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t",rate,qty,amt,dis,billamt,gst,netbill);

	return 0;
	
}