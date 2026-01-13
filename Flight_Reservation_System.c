
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
struct air
{
    int pass;
    char name[30];
    char email[50];
    char des[50];
    char pay[10];
    int seat;
    char t[50];
};
int u=40,l=10;
int ub=81,lb=41;
int us=130,ls=90;
int uco=171,lco=131;
int ura=212,lra=172;
int uk=260,lk=220;
int uraj=340,lraj=300;
int udu=700,ldu=500;
int usi=1000,lsi=800;
int uba=1300,lba=1100,ukol=40,lkol=1;
int getseatno(int seat)
{
    int allocated=0;
    FILE *fp;
    fp=fopen("demotime.txt","r");
    struct air h;
    while(fread(&h,sizeof(struct air),1,fp));
    {
        if(h.seat==seat)
        {
            allocated=1;
        }


    }
    if(allocated==0)
        return seat;
    else
        return getseatno(((rand()%(u-l+1))+l));
    fclose(fp);


}
void book()
{
    int a,u,y,z;
    struct air h;
    char c[15]="Chittagong",b[15]="Barishal",s[15]="Sylhet",co[15]="Cox Bazar",r[15]="Rangpur";
    char k[15]="Khulna",ra[15]="Rajshahi";
    char deb[9]="paid";
    char credit[9]="paid";
    char du[15]="Dubai";
    char sing[15]="Singapore",ba[15]="Bangkok",kol[15]="Kolkata";
    char ctgt[50]="28 September 2022 07:30 AM",barit[50]="28 September 2022 11:00 AM",sylt[50]="28 September 2022 01:00 PM",coxt[50]="28 September 2022 03:00 PM",rant[50]="28 September 2022 05:00 PM";
    char khult[50]="28 September 2022 06:00 PM",rat[50]="28 September 2022 07:00 PM";
    char dut[50]="28 September 2022 08:00 PM",singt[50]="28 September 2022 09:00 PM",bant[50]="28 September 2022 10:00 PM",kolt[50]="28 September 2022 11:00 PM";
    FILE *fp= fopen("demotime.txt","a+");
    printf("\t\t\t\t\tChoose Your Flight type\n");
    printf("\n\t\t\t\t.1 Domestic Flight\n");
    printf("\n\t\t\t\t.2 International Flight\n\t\t\t\t");
    scanf("%d",&u);
    switch (u)
    {

    case 1:
        printf("\n\t\t\t\t.1 %s",c);
        printf("\n\t\t\t\t.2 %s",b);
        printf("\n\t\t\t\t.3 %s",s);
        printf("\n\t\t\t\t.4 %s",co);
        printf("\n\t\t\t\t.5 %s",r);
        printf("\n\t\t\t\t.6 %s",k);
        printf("\n\t\t\t\t.7 %s\n\t\t\t\t",ra);
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            printf("\t\t\t\tDeparture time is %s ",ctgt);
            strcpy(h.t,ctgt);
            h.seat=getseatno(((rand()%(u-l+1))+l));
            strcpy(h.des,c);
            printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            break;
        case 2:
            printf("\t\t\t\tDeparture time is %s ",barit);
            strcpy(h.t,barit);
            h.seat=getseatno(((rand()%(ub-lb+1))+lb));
            printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,b);
            break;
        case 3:
            printf("\t\t\t\tDeparture time is %s ",sylt);
            strcpy(h.t,sylt);
            h.seat=getseatno(((rand()%(us-ls+1))+ls));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,s);
            break;
        case 4:
            printf("\t\t\t\tDeparture time is %s ",coxt);
            strcpy(h.t,coxt);
            h.seat=getseatno(((rand()%(uco-lco+1))+lco));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,co);
            break;
        case 5:
            printf("\t\t\t\tDeparture time is %s ",rant);
            strcpy(h.t,rant);
            h.seat=getseatno(((rand()%(ura-lra+1))+lra));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,r);
            break;
        case 6:
            printf("\t\t\t\tDeparture time is %s ",khult);
            strcpy(h.t,khult);
            h.seat=getseatno(((rand()%(uk-lk+1))+lk));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,k);
        case 7:
            printf("\t\t\t\tDeparture time is %s ",rat);
            strcpy(h.t,rat);
            h.seat=getseatno(((rand()%(uraj-lraj+1))+lraj));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,ra);

        }
        break;
        case 2:

            printf("\n\t\t\t\t.1 %s",du);
            printf("\n\t\t\t\t.2 %s",sing);
            printf("\n\t\t\t\t.3 %s",ba);
            printf("\n\t\t\t\t.4 %s\n\t\t\t\t",kol);
            scanf("%d",&z);
            switch(z)
            {
        case 1:
            printf("\t\t\t\tDeparture time is %s ",dut);
            strcpy(h.t,dut);
            h.seat=getseatno(((rand()%(uraj-lraj+1))+lraj));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,du);
            break;
        case 2:
            printf("\t\t\t\tDeparture time is %s ",singt);
            strcpy(h.t,singt);
            h.seat=getseatno(((rand()%(uraj-lraj+1))+lraj));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,sing);
            break;
        case 3:
            printf("\t\t\t\tDeparture time is %s ",bant);
            strcpy(h.t,bant);
            h.seat=getseatno(((rand()%(uraj-lraj+1))+lraj));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,ba);
            break;
        case 4:
            printf("\t\t\t\tDeparture time is %s ",kolt);
            strcpy(h.t,kolt);
            h.seat=getseatno(((rand()%(uraj-lraj+1))+lraj));
             printf("\n\t\t\t\thow you want to pay??");
            printf("\n\t\t\t\t.1DEBIT\n");
            printf("\n\t\t\t\t.2Credit\n\t\t\t\t");
            scanf("%d",&y);
            if(y==1)
            {
                strcpy(h.pay,deb);
            }
            if(y==2)
            {
                strcpy(h.pay,credit);

            }
            strcpy(h.des,kol);
            break;
            }
            break;

    }
    printf("\t\t\t\tEnter your passport no : ");
    scanf("%d",&h.pass);
    printf("\t\t\t\tEnter your name : ");
    scanf("%s",h.name);
    printf("\t\t\t\tEnter your email : ");
    scanf("%s",h.email);

    printf("\n\t\t\t\t********CONGRATULATIONS!!YOUR SEAT IS BOOKED*********\n\n");

    if(h.seat!=0)
        fwrite(&h,sizeof(struct air ),1,fp);
    fclose(fp);


}
void cancel()
{int i,found=0;
 struct air h;
 FILE *fp;
 FILE *fp1;
 fp= fopen("demotime.txt","r");
 fp1= fopen("delet.txt","w");
 printf("\t\t\t\tEnter passport no to cancel : \n\t\t\t\t");
 scanf("%d",&i);
 while(fread(&h,sizeof(struct air),1,fp))
 {
     if(h.pass==i)
        {

        found=1;

        }
     else

        fwrite(&h,sizeof(struct air),1,fp1);
 }
fclose(fp);
fclose(fp1);
if (found)
    {
    fp1=fopen("delet.txt","r");
    fp=fopen("demotime.txt","w");
    while(fread(&h,sizeof(struct air),1,fp1))
    {
      fwrite(&h,sizeof(struct air),1,fp);


    }
    fclose(fp);
    fclose(fp1);

}
}


void in_airp() {}

void check()
{

    struct air h;
    FILE *fp;
    fp=fopen("demotime.txt","r");
    printf("\n***************************************************************************************************************\n");
    printf("%-13s%-15s%-30s%-15s%-10s%-10s%s\n","passport","Name","Email","Destination","Status","seat no","Departure Time");
    printf("\n****************************************************************************************************************\n");

    while(fread(&h,sizeof(struct air),1,fp))
        printf("%-13d%-15s%-30s%-15s%-10sa%-10d%s\n",h.pass,h.name,h.email,h.des,h.pay,h.seat,h.t);

    fclose(fp);

}
void search()
{
    struct air h;
    int p,flag=0;
    FILE  *fp;
    fp=fopen("demotime.txt","r");
    printf("\t\t\t\tEnter pass no to search \n\t\t\t\t");
    scanf("%d",&p);
    while(fread(&h,sizeof(struct air),1,fp)>0&&flag==0)
    {
        if(h.pass==p)
        {
            flag=1;
            printf("\n***********************************************************************************************\n");
            printf("%-13s%-15s%-30s%-15s%-10s%-10s%s\n","passport","Name","Email","Destination","Status","seat no","Departure Time");
            printf("\n************************************************************************************************\n");
            printf("%-13d%-15s%-30s%-15s%-10sa%-10d%s\n",h.pass,h.name,h.email,h.des,h.pay,h.seat,h.t);
        }
    }
    if(flag==0)
    {
        printf("\t\t\t\tNot Found");
    }
    fclose(fp);
}
int main()
{
    int ch;
    do
    {
        printf("\n\n\n\t\t\t\t********** WELCOME TO US-BANGLA AIRLINES ********\n\n\n");
        printf("\n\t\t\t\t.1 Book flight");
        printf("\n\t\t\t\t.2 cancel flight");
        printf("\n\t\t\t\t.3 Display");
        printf("\n\t\t\t\t.4 search ticket");
        printf("\n\t\t\t\t.0 exit\n");

        printf("\t\t\t\tEnter your choice : \n\t\t\t\t\t");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            book();
            break;
        case 2:
            cancel();
            break;
        case 3:
            check();
            break;
        case 4:
            search();
            break;

        }
    }
    while(ch!=0);
}
