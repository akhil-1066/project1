#include<stdio.h>
#include<stdlib.h>
void mdata()
{
	system("cls");
	FILE *f;
	char c,fr[11],to[11];
	int t_am=0,t_p=0;
	int i,i1,d,m,y,h,mn,s,fm,pr,am,year,month,route,rno;
	printf("\t***ENTER FOLLOWING DETAILS***\n");
	printf(".............................................\n");
	printf("1.KNR-HNK \t2.SDPT-HNK \t3.HZB-GDK\n");
	printf(".............................................\n");
	rt:
		printf("ROUTE NO : ");
		scanf("%d",&route);
	if(route<1 || route>3)
	 goto rt;
	printf("YEAR : ");
	scanf("%d",&year);
	mnt:
		printf("MONTH : ");
		scanf("%d",&month);
	if(month<1 || month>12)
	 goto mnt;
	f=fopen("ticket.csv","r");
	printf("\n");
	if(route==1)
	 printf("ROUTE : KNR-HNK\n");
	else if(route==2)
	 printf("ROUTE : SDPT-HNK\n");
	else
	 printf("ROUTE : HZB-GDK\n");
	printf("............................................................\n");
	printf("\tT.NO\tDATE\t\tTICKETS\tAMOUNT\n");
	printf("............................................................\n");
	while((c=getc(f))!='\n')
	continue;
	while((c=getc(f))!='\n')
	continue;
	while(1)
	{
		i1=i;
		fscanf(f,"%d,%d%d%d,%d%d%d,%d,%d,%d,%s\n",&i,&d,&m,&y,&h,&mn,&s,&pr,&am,&rno,fr);
		if(i1==i)
		break;
		if(y==year && m==month && route==rno)
		{
			t_am+=am;
			t_p+=pr;
			printf("\t%d\t%d-%d-%d\t%d\t %d\n",i,d,m,y,pr,am);
		}
	}
	printf("------------------------------------------------------------\n");
	printf("  ........................................\n");
	printf("\tPASSENGERS\tTOTAL AMOUNT\n");
	printf("  ........................................\n");
	printf("\t%d\t\t %d\n",t_p,t_am);
	printf("  ........................................\n");
	fclose(f);
	printf("****************************************************************************************************\n");
}
