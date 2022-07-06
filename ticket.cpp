#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mdata.c"
#include"ddata.c"
void sdpt(int km);
void knr(int km);
void hzb(int km);
void ticket();
void read();
void ex();
int tno=100,total=0,i,n,f,e,km=2,km1,km2,tkm,rno,*p,*q,s;
char fr[13],to[13];
main()
{
	printf("1.DAY WISE DATA\t\t2.MONTH WISE DATA\t\t3.TICKET\n");
	printf("SELECT : ");
	scanf("%d",&s);
	switch(s)
	{
		case 1:
			ddata();
			break;
		case 2:
			mdata();
			break;
		case 3:
			read();
			break;
		case 0:
			ex();
		default:
			main();
	}
	main();
}
void read()
{
	system("cls");
	p=&tno;
	q=&total;
	printf("\t***SELECT YOUR ROUTE***\n");
	printf("1.KNR-HNK\n");
	printf("2.SDPT-HNK\n");
	printf("3.HZB-GDK\n");
	scanf("%d",&s);
	if(s==0)
	{
		printf("***EXIT***");
		exit(0);
	}
	switch(s)
	{
		case 1:
			do
			{
				knr(km);
				scanf("%d",&s);
			}
			while(s!=0 && s!=9);
			break;
		case 2:
			do
			{
				sdpt(km);
				scanf("%d",&s);
			}
			while(s!=0 && s!=9);
			break;
		case 3:
			do
			{
				hzb(km);
				scanf("%d",&s);
			}
			while(s!=0 && s!=9);
			break;
		case 9:
			main();
			break;
		default: read();
	}
	if(s!=0)
 	 read();
 	 else
		ex();
}
void knr(int km)
{
	printf("  ***SELECT STOPS*** :\n");
	printf("1.KARIMNAGAR\t");
	printf("2.KESHAPATNAM\n");
	printf("3.HUZURABAD\t");
	printf("4.ELKATHURTHY\n");
	printf("5.HANAMKONDA\n");
	printf("FROM : ");
	scanf("%d",&f);
	switch(f)
		{
			case 1:
				strcpy(fr,"KARIMNAGAR");
				km1=0;
				break;
			case 2:
				strcpy(fr,"KESHAPATNAM");
				km1=25;
				break;
			case 3:
				strcpy(fr,"HUZURABAD");
				km1=40;
				break;
			case 4:
				strcpy(fr,"ELKATHUTHY");
				km1=55;
				break;
			case 5:
				strcpy(fr,"HANAMKONDA");
				km1=70;
				break;
			case 9:
				read();
				break;
			case 0:
				ex();
				break;
			default : knr(km);
		}
	printf("TO : ");
	scanf("%d",&e);
	switch(e)
		{
			case 1:
				strcpy(to,"KARIMNAGAR");
				km2=0;
				break;
			case 2:
				strcpy(to,"KESHAPATNAM");
				km2=25;
				break;
			case 3:
				strcpy(to,"HUZURABAD");
				km2=40;
				break;
			case 4:
				strcpy(to,"ELKATHURTHY");
				km2=55;
				break;
			case 5:
				strcpy(to,"HANAMKONDA");
				km2=70;
				break;
			case 9:
				read();
				break;
			case 0:
				ex();
				break;
			default : knr(km);
		}
	if(f!=e)
	{
		rno=1;
		ticket();
	}
	else
	{
		printf("YOU ENTERED SAME STOPS..\n");
		knr(km);
	}
	printf("-----------------------------------------------------\n");
}
void sdpt(int km)
{
	printf("  ***SELECT STOPS*** \n");
	printf("1.SIDDIPET\t");
	printf("2.HUSNABAD\n");
	printf("3.MULKANOOR\t");
	printf("4.ELKATHURTHY\n");
	printf("5.HASANPARTHY\t");
	printf("6.HANAMKONDA\n");
	printf("FROM : ");
	scanf("%d",&f);
	switch(f)
		{
			case 1:
				strcpy(fr,"SIDDIPET");
				km1=0;
				break;
			case 2:
				strcpy(fr,"HUSNABAD");
				km1=40;
				break;
			case 3:
				strcpy(fr,"MULKANOOR");
				km1=60;
				break;
			case 4:
				strcpy(fr,"ELKATHURTHY");
				km1=68;
				break;
			case 5:
				strcpy(fr,"HASANPARTHY");
				km1=76;
				break;
			case 6:
				strcpy(fr,"HANAMKONDA");
				km1=84;
				break;
			case 9:
				read();
				break;
			case 0:
				ex();
				break;
			default : sdpt(km);
		}
	printf("TO : ");
	scanf("%d",&e);
	switch(e)
		{
			case 1:
				strcpy(to,"SIDDIPET");
				km2=0;
				break;
			case 2:
				strcpy(to,"HUSNABAD");
				km2=40;
				break;
			case 3:
				strcpy(to,"MULKANOOR");
				km2=60;
				break;
			case 4:
				strcpy(to,"ELKATHURTHY");
				km2=68;
				break;
			case 5:
				strcpy(to,"HASANPARTHY");
				km2=76;
				break;
			case 6:
				strcpy(to,"HANAMKONDA");
				km2=84;
				break;
			case 9:
				read();
				break;
			case 0:
				ex();
				break;
			default: sdpt(km);
		}
	if(f!=e)
	{
		rno=2;
		ticket();
	}
	else
	{
		printf("YOU ENTERED SAME STOPS..\n");
		sdpt(km);
	}
	printf("-----------------------------------------------------\n");
}
void hzb(int km)
{
	printf("  ***SELECT STOPS*** \n");
	printf("1.HUZURABAD\t");
	printf("2.KESHAPATNAM\n");
	printf("3.KARIMNAGAR\t");
	printf("4.SULTHANBAD\n");
	printf("5.PEDDAPELLI\t");
	printf("6.GODHAVARIKHANKI\n");
	printf("FROM : ");
	scanf("%d",&f);
	switch(f)
		{
			case 1:
				strcpy(fr,"HUZURABAD");
				km1=0;
				break;
			case 2:
				strcpy(fr,"KESHAPATNAM");
				km1=15;
				break;
			case 3:
				strcpy(fr,"KARIMNAGAR");
				km1=40;
				break;
			case 4:
				strcpy(fr,"SULTHANBAD");
				km1=65;
				break;
			case 5:
				strcpy(fr,"PEDDAPELLI");
				km1=80;
				break;
			case 6:
				strcpy(fr,"GODHAVARIKHANI");
				km1=100;
				break;
			case 9:
				read();
				break;
			case 0:
				ex();
				break;
			default : hzb(km);
		}
	printf("TO : ");
	scanf("%d",&e);
	switch(e)
		{
			case 1:
				strcpy(to,"HUZURABAD");
				km2=0;
				break;
			case 2:
				strcpy(to,"KESHAPATNAM");
				km2=15;
				break;
			case 3:
				strcpy(to,"KARIMNAGAR");
				km2=40;
				break;
			case 4:
				strcpy(to,"SULTHANBAD");
				km2=65;
				break;
			case 5 :
				strcpy(to,"PEDDAPELLI");
				km2=80;
				break;
			case 6:
				strcpy(to,"GODHAVARIKHANI");
				km2=100;
				break;
			case 9:
				read();
				break;
			case 0:
				ex();
			default: hzb(km);
		}
	if(f!=e)
	{
		rno=3;
		ticket();
	}
	else
	{
		printf("YOU ENTERED SAME STOPS..\n");
		hzb(km);
	}
	printf("-----------------------------------------------------\n");
}
void ticket()
{
	FILE *f,*fp;
	time_t t= time(NULL);
	struct tm tm= *localtime(&t);
	int i,d,m,y,h,mn,s,nt,am;
	char fm[11];
	f=fopen("ticket.csv","r");
	while((getc(f))!='\n')
	continue;
	while((getc(f))!='\n')
	continue;
	do
	{
		*p=i;
		fscanf(f,"%d,%d%d%d,%d%d%d,%d,%d,%s\n",&i,&d,&m,&y,&h,&mn,&s,&nt,&am,fm);
		if(i==*p)
		break;
	}while(1);
	fclose(f);
	ticket:
		printf("Enter NO. of Tickets:");
		scanf("%d",&n);
	if(n<=0 || n>5)
		goto ticket;
	tkm=km2-km1;
	if((km2-km1)<0)
		tkm=-tkm;
	printf("-----------------------------------------------------\n");
	printf("TELANGANA STATE ROAD TRANSPORTATION CORPORATION\n");
	printf("\t****************************\n");
	printf("\tDON'T TRAVEL WITHOUT TICKET!\n");
	printf("\t****************************\n");
	printf("\t\t***EXPRESS***\n");
	printf("\tDEPOT - KARIMNAGAR\n");
	printf("\tTICKET NO : %d\n",++*p);
	printf("\tISSUE DATE AND TIME\n");
	printf("\t%s",ctime(&t));
	printf("\t");
	for(i=0;fr[i]>=65 && fr[i]<=90;i++)
	 printf("%c",fr[i]);
	printf("  -  ");
	for(i=0;to[i]>=65 && to[i]<=90;i++)
 	printf("%c",to[i]);
	printf("   TICKETS : %d\n\n",n);
	printf("\tFARE   :  RS %d.00\n",n*km*tkm);
	*q+=n*km*tkm;
	printf("\t............................................\n");
	printf("\tDNO : 386041");
	printf("\t COND-N0 : 320304\n");
	printf("\tTS27Y681");
	printf("\t KNR-502103\n");
	printf("\t............................................\n");
	f=fopen("ticket.csv","a");
	fprintf(f,"%d,%d %d %d,%d %d %d,%d,%d,%d,%s,%s\n",*p,tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,tm.tm_hour,tm.tm_min,tm.tm_sec,n,n*km*tkm,rno,fr,to);
	fclose(f);
}
void ex()
{
	printf("-----------------------\n");
	printf("COLLECTED TOTAL AMOUNT:%d\n",*q);
	printf("\t***EXIT***\n");
	printf("-------------------\n");
	exit(0);
}
