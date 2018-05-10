#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<process.h>
struct choice
{
	char type[25];
	char engine[25];
	char variant[25];
	char seat[25];
	char wheels[25];
	char body[25];
	char suspension[25];
	char colour[25];
	char transmission[25];
	char gtype[25];
	char atype[25];

};
struct bill
{

	long type;
	long engine;
	long variant;
	long seat;
	long wheels;
	long body;
	long suspension;
	long colour;
	long transmission;
	long gtype;
	long atype;
};

class customer
{
	char name[30];
	char num[10];
	char address[100];
	char cci[3];
	char pass[10];
	double amt;
	long acno;
	char bname[25];
	char gtype[25];
	bill b;
	choice ct;
	void payment();

public:
	void output(char n[25],char nu[10])
	{
		clrscr();
		cout<<"\n NAME :"<<n<<"\n NUMBER:"<<nu;
		cout<<"\n TYPE:"<<ct.type<<"\n ENGINE:"<<ct.engine<<"\n VARIANT:"<<ct.variant<<"\n SEAT:"<<ct.seat;
		cout<<"\n WHEELS:"<<ct.wheels<<"\n BODY:"<<ct.body<<"\n COLOUR:"<<ct.colour<<"\n TRANSMISSION:"<<ct.transmission<<"\nGEAR MODE:"<<ct.gtype<<"\nALLOY:"<<ct.atype;
	}
	void input(char n[25],char nu[10]);
};
	void customer::input(char n[25],char nu[10])
	{
		int m;
		strcpy(name,n);
		strcpy(num,nu);
		cout<<"\n PLEASE ENTER THE TYPE OF VEHICLE:";
		cout<<"\n 1 -> SUV"<<"\n 2 -> MUV"<<"\n 3 -> SEDAN"<<"\n 4 -> LUXURY";
		cout<<"\n ENTER YOUR CHOICE:  ";
		cin>>m;
		switch(m)
		{
			case 1: strcpy(ct.type,"SUV");
				b.type=20000;break;
			case 2:	strcpy(ct.type,"MUV");
				b.type=25000;break;
			case 3:	strcpy(ct.type,"SEDAN");
				b.type=30000;break;
			case 4:	strcpy(ct.type,"LUXURY");
				b.type=35000;break;
		}
	 cout<<"\n YOU HAVE SELECTED: "<<ct.type;
	 cout<<"\n\n SELECT THE MATERIAL OF THE BODY ";
	 cout<<"\n 1 -> LIGHT ALUMINIUM"<<"\n 2 -> CARBON"<<"\n 3 -> BULLET PROOF";
	 cout<<"\n ENTER YOUR CHOICE:  ";
	 m=0;
	 cin>>m;
	 switch(m)
	 {
		case 1:	strcpy(ct.body,"LIGHT ALUMINIUM");
			b.body=45000;break;
		case 2:	strcpy(ct.body,"CARBON");
			b.body=50000;break;
		case 3:	strcpy(ct.body,"BULLET PROOF");
			b.body=70000;break;
	 }
	 cout<<"\n YOU HAVE SELECTED: "<<ct.body;
	 cout<<"\n\n SELECT THE VARIANT:";
	 cout<<"\n\t1->PETROL"<<"\n\t2->DIESEL";
	 cout<<"\n ENTER YOUR CHOICE: ";
	 m=0;
	 cin>>m;
	 switch(m)
	 {
		case 1:	strcpy(ct.variant,"PETROL");
			b.variant=25000;break;
		case 2: strcpy(ct.variant,"DIESEL");
			b.variant=40000;break;
	 }
	 cout<<"\n YOU HAVE SELECTED: "<<ct.variant;
	 cout<<"\n\n ENTER THE ENGINE MODEL: ";
	 cout<<"\n 1 -> Twin Turbo Diesel\n 2 -> V4 Engine\n 3 -> V6 Engine\n 4 -> V8 Engine\n 5 -> SSC Ultimate AERO\n 6 -> DHA SPL.Bristol Fighter\n 7 -> Zenvo STI\n 8 -> LOTEC SIRIUS";
	 m=0;
	 cout<<"\n ENTER YOUR CHOICE: ";
	 cin>>m;
	 switch(m)
	 {
		case 1:	strcpy(ct.engine,"TWIN TURBO DIESEL");
			b.engine=120000;break;
		case 2:	strcpy(ct.engine,"V4 ENGINE");
			b.engine=140000;break;
		case 3:	strcpy(ct.engine,"V6 ENGINE");
			b.engine=170000;break;
		case 4: strcpy(ct.engine,"V8 ENGINE");
			b.engine=250000;break;
		case 5:	strcpy(ct.engine," SSC Ultimate AERO");
			b.engine=1000000;break;
		case 6:	strcpy(ct.engine,"DHA SPL.Bristol Fighter");
			b.engine=1400000;break;
		case 7:	strcpy(ct.engine,"Zenvo STI");
			b.engine=1100000;break;
		case 8:	strcpy(ct.engine,"LOTEC SIRIUS");
			b.engine=1050000;break;

	 }
	 cout<<"\n You have selected "<<ct.engine;
	 cout<<"\n\n SELECT THE TRANSMISSION:";
	 cout<<"\n 1 -> AUTO TRANSMISSION "<<"\n 2 -> MANUAL TRANSMISSION"<<"\n 3 -> AUTO AND MANUAL TRANSMISSION"<<"\n 4 -> CLUTCH MASTERS"<<"\n 5 -> AEM"<<"\n 6 -> HPRA";
	 cout<<"\n ENTER YOUR CHOICE:";
	 m=0;
	 cin>>m;
	 switch(m)
	 {
		case 1:	strcpy(ct.transmission,"AUTO TRANSMISSION");
			b.transmission=150000;break;
		case 2:	strcpy(ct.transmission,"MANUAL TRANSMISSION");
			b.transmission=170000;break;
		case 3: strcpy(ct.transmission,"AUTO AND MANUAL TRANSMISSION");
			b.transmission=250000;break;
		case 4:	strcpy(ct.transmission,"CLUTCH MASTERS");
			b.transmission=50000;break;
		case 5:	strcpy(ct.transmission,"AEM");
			b.transmission=75000;break;
		case 6:	strcpy(ct.transmission,"HPRA");
			b.transmission=75000;break;


	 }

	 cout<<"\n PLEASE WAIT.... PROCEEDING...";
	 delay(2000);
	 cout<<"\n\n WELCOME TO TRANSMISSIOn MODE: "<<"\n 1 -> SEPTRONIC \n 2 -> TEPTRONIC";
	 cout<<"\n ENTER YOUR CHOICE:";
	 m=0;
	 cin>>m;
	 switch(m)
	 {
		case 1:	strcpy(ct.gtype,"SEPTRONIC");
			b.gtype=95000;break;
		case 2: strcpy(ct.gtype,"TEPTRONIC");
			b.gtype=105000;break;
	 }
	 cout<<"\n YOU HAVE SELECTED "<<ct.transmission<<" with "<<ct.gtype<<"MODE";
	 cout<<"\n\n ONTO WHEELS SECTION :";
	 cout<<"\n 1 -> APOLLO WHEELS"<<"\n 2 -> MRF WHEELS"<<"\n 3 -> TOYO"<<"\n 4 -> BRIDGESTONE"<<"\n 5-> FALKEN";
	 m=0;
	 cin>>m;
	 switch(m)
	 {
		case 1:	strcpy(ct.wheels,"APOLLO WHEELS");
			b.wheels=200000;break;
		case 2:	strcpy(ct.wheels,"MRF WHEELS");
			b.wheels=250000;break;
		case 3:	strcpy(ct.transmission,"TOYO");
			b.transmission=355000;break;
		case 4:	strcpy(ct.transmission,"BRIDGESTONE");
			b.transmission=600000;break;
		case 5:	strcpy(ct.transmission,"FALKEN");
			b.transmission=250000;break;

	 }
	 cout<<"\n\n SELECT ALLOYS / RIMS FOR WHEELS ";
	 cout<<"\n 1 -> 17 SPOKE ALLOYS"<<"\n 2 -> 14 SPOKE ALLOYS"<<"\n 3 -> ROCKERS"<<"\n 4 -> LOWEN Harl|LDR"<<"\n 5 -> RACING hart";
	 cout<<"\n ENTER YOUR CHOICE: ";
	 m=0;
	 cin>>m;
	 switch(m)
	 {
		case 1:	strcpy(ct.atype,"17 SPOKE ALLOYS");
			b.atype=70000;break;
		case 2: strcpy(ct.atype,"14 SPOKE ALLOYS");
			b.atype=50000;break;
		case 3:	strcpy(ct.transmission,"ROCKERS");
			b.transmission=50000 ;break;
		case 4:	strcpy(ct.transmission,"LOWER HARLLDR");
			b.transmission=100000;break;
		case 5:	strcpy(ct.transmission,"RACING hart");
			b.transmission=75000;break;
	 }
	 cout<<"\n YOU HAVE SELECTED "<<ct.wheels<<" with "<<ct.atype;
	 cout<<"\n\n PLEASE SELECT YOUR SEATS:";
	 cout<<"\n 1 -> LEATHER SEATS"<<"\n2 -> SPORTY SEATS"<<"\n 3 -> REXIN SEATS"<<"\n 4 -> BritaX B-Safe Infant CAR seat "<<"\n 5 -> ChiCCo Key Fit 30 INFANT car SEAT";
	 cout<<"\n ENTER YOUR CHOICE:";
	 m=0;
	 cin>>m;
	 switch(m)
	 {
		case 1:	strcpy(ct.seat,"LEATHER SEATS");
			b.seat=300000;break;
		case 2:	strcpy(ct.seat,"SPORTY SEATS");
			b.seat=350000;break;
		case 3:	strcpy(ct.seat,"REXIN SEATS");
			b.seat=170000;break;
		case 4:	strcpy(ct.transmission,"BritaX B-SAFE Infant car SEAT");
			b.transmission=35000;break;
		case 5:	strcpy(ct.transmission,"ChiCCo KeyFIT 30 Infant car SEAT");
			b.transmission=85000;break;
	 }
	 cout<<"\n YOU HAVE SELECTED "<<ct.seat;
	 delay(2000);
	 cout<<"\n\n FINAL STAGE "<<"\n\n SELECT COLOUR OF THE CAR";
	 cout<<"\n 1 -> TAR BLACK"<<"\n 2 -> POLARIS WHITE"<<"\n 3 -> ELECTRIC RED"<<"\n 4 -> LEMON YELLOW"<<"\n 5 -> SEA BLUE"<<"\n 6 -> COPPER RED"<<"\n 7 -> SILVER SKY"<<"\n 8 -> SLATE MET"<<"\n 9 -> ICEBERG"<<"\n 10 -> COSMIC GREY
	 "<<"\n 11 -> LIQUID PLATINUIM MET ";
	 cout<<"\n ENTER YOUR CHOICE:";
	 m=0;
	 cin>>m;
	 switch(m)
	 {
		case 1: strcpy(ct.colour,"TAR BALCK");
			break;
		case 2: strcpy(ct.colour,"POLARIS WHITE");
			break;
		case 3: strcpy(ct.colour,"ELECTRIC RED");
			break;
		case 4: strcpy(ct.colour,"LEMON YELLOW");
			break;
		case 5: strcpy(ct.colour,"SEA BLUE");
			break;
		case 6:	strcpy(ct.transmission,"COPPER RED");
			break;
		case 7:	strcpy(ct.transmission,"SILVER SKY");
			break;
		case 8:	strcpy(ct.transmission,"SLATE MET");
			break;
		case 9:	strcpy(ct.transmission,"ICE BERG");
			break;
		case 10: strcpy(ct.transmission,"COSMIC GREY");
			 break;
		case 11: strcpy(ct.transmission,"LIQUID PLATINUIM MET");
			 break;

	 }
		b.colour=35000;
	 cout<<"\n YOU HAVE SELECTED "<<ct.colour<<" COLOUR";
	 delay(1000);
	 cout<<"..............................................................";
	 clrscr();
	 cout<<"\n\t\t THANK YOU FOR CHOOSING OUR COMPANY "<<"\n\n\t PROCEEDING FOR PAYMENT ";
	 payment();
	 }
	void customer::payment()
	{
		clrscr();
		cout<<"\n\n\t\t..INTO THE PAYMENT..";
		int n;
		long amount;
		amount=b.type+b.body+b.transmission+b.wheels+b.seat+b.colour+b.engine+b.variant+b.atype+b.gtype;
		cout<<"\n The total cost of customisation = "<<amount;
		cout<<"\n SELECT MODE OF PAYMENT ";
		cout<<"\n 1 -> CREDIT CARD"<<"\n 2 -> DEMAND DRAFT";
		cin>>n;
		switch(n)
		{
			case 1: strcpy(gtype,"CREDIT CARD");
			cout<<"\n\n ENTER THE FOLLWING DETAILS: ";
			cout<<"\n ADDRESS:";
			gets(address);
			cout<<"\n CCI NUMBER:";
			gets(cci);
			cout<<"\t\t\t *NOTE:NECESSARILY 10 CHARACTER*";
			char pass[10];
			cout<<"\n ENTER THE PASSWORD:";
				for(int i=0;i<10;i++)
				{
					pass[i]=getch();
					cout<<"*";
				}
			delay(2000);
			cout<<"\n TRANSACTION COMPLETED...";
			delay(2000);
			cout<<"\n LOADING DATABASE....";
			delay(4000);
			break;
		case 2:
			strcpy(gtype,"DEMAND DRAFT");
			cout<<"\n\n ENTER THE FOLLWOING DETAILS :";
			cout<<"\n BANK NAME:";
			gets(bname);
			cout<<"\n ACCOUNT NO:";
			cin>>acno;
			cout<<"\n\t\t ****THANK YOU FOR SHOPPING WITH US****";
			break;
		case 3: cout<<"\n Default option ";
	 }
}
	void files(char n[25],char nu[20])
	{
		customer c;
		ofstream fout("DATABASE.DAT",ios::binary|ios::app);
		c.input(n,nu);
		fout.write((char*)&c,sizeof(c));
		fout.close();
	}
	void read(char n[25],char nu[20])
	{
		customer c;
		choice ct;
		ifstream fin("DATABASE.DAT",ios::binary);
		while(fin.read((char*)&c,sizeof(c)))
			c.output(n,nu);
		fin.close();
	}
void aboutus()
{
	clrscr();
	cout<<"\n We are a car-customizing company. We design and customize car according to the needs of the customer";
	cout<<"\n From hand-stitched leather to hand-crafted interiors we offer the best of luxury and ambience in a car "
	cout<<"\n We were named the best car dealers of the year 2013";
	cout<<"\n The motive of our company is to offer feasible designs and ideas to people who love cars"
}

void tnc()
{
  clrscr();
  cout<<"\n -> DHA will not sell or rent your Personally Identifiable Information to anyone.";
  cout<<"\n -> DHA will store Personally Identifiable Information on our databases ";
  cout<<"\n -> DHA has the consent to share the information to government if required for security purposes";
  cout<<"\n -> DHA may edit this policy from time to time. If we make any substantial changes ,we will notify you by posting a prominent announcement on our pages. ";
}

void contactus()
{
 cout<<"\n\t Head Office : ";
 cout<<"\n DHA pvt LMT India Limited,";
 cout<<"\n 1, Nelson Mandela Road,";
 cout<<"\n Vasant Kunj,";
 cout<<"\n New Delhi - 110070";
 cout<<"\n contact :011-46781000";


 cout<<"\n\n\n\t REGIONAL OFFICES: ";
 cout<<"\n Kolkata";
 cout<<"\n L&T Chamber, 4th floor,";
 cout<<"\n 16th Camac Street,";
 cout<<"\n Kolkata - 700 017";
 cout<<"\n 033-2283-5252, 53, 54, 62";

 cout<<"\n\n Bangalore";
 cout<<"\n 202, 2nd Floor, Embassy Classic";
 cout<<"\n Vittal Mallya Road,";
 cout<<"\n Bangalore - 560001";
 cout<<"\n 080-4112 0017 / 18, 22127384/85 ";

 cout<<"\n\n Mumbai";
 cout<<"\n 602, Madhava Building, Bandra Kurla Complex,";
 cout<<"\n Bandra (East),";
 cout<<"\n Mumbai - 400051";
 cout<<"\n 022-26590478";

}

void  welcome()
{
	int flag;
	char name[40];
	char num[40];
	int ch;
	cout<<"\n\t\t\t   WELCOME TO DHA PVT.LMT ";
	cout<<"\n\t\t    CAR CUSTOMIZATION CENTER\n\n";
	do
	{
		cout<<"\n ENTER YOUR NAME:";
			gets(name);
		cout<<"\n ENTER YOUR CONTACT NUMBER:";
			gets(num);
		cout<<"\n\t\t PLEASE CHECK YOUR DETAILS ONCE MORE";
		cout<<"\n NAME:"<<name<<"\n\n CONTACT:"<<num;
		cout<<"ENTER YOUR CHOICE:";
		cout<<"\n\n 1.FOR CHANGING YOUR DETAILS";
		cout<<"\n   2.TO PROCEED";
		cin>>flag;
		clrscr();
	}while(flag==1);
	clrscr();
	cout<<"\n LOADING .......... ";
	delay(1000);
	cout<<"\n\n   PLEASE WAIT..........";
	delay(2000);
	cout<<"\t\t\n\n    LOADING YOUR PROFILE ...";
	delay(1000);
	cout<<"\t\n\n           CHECKING FOR STOCK..........";
	delay(1000);
	cout<<"\t\t\n\n    ROLLING TIRES....";
	delay(1000);
	cout<<"\t\n\n STARTING ENGINES.......";
	delay(500);
	cout<<"\n\n\n PROCEEDING ";
	delay(1000);
	clrscr();
	cout<<"\n\t\tWELCOME Mr."<<name;
	do
	{
	cout<<"\n\n 1.CUSTOMIZATION\n\n 2.TERMS & CONDITIONS\n\n 3.CONTACT US\n\n 4.ABOUT US\n\n 5.EXIT";
		cin>>ch;
			if(ch==1)
			{
				cout<<"\n\t\t\t WELCOME TO CUSTOMIZATION ";
				files(name,num);
				read(name,num);
			}
			else if(ch==2)
			{
				clrscr();
				cout<<"\n\t\t\t TERMS AND CONDITIONS *";
				tnc();
			}
			else if(ch==3)
			{
				clrscr();
				cout<<"\n\t\t\t CONTACT US ";
				contactus();
			}
			else if(ch==4)
			{
				clrscr();
				cout<<"\n\t\t\t ABOUT US ";
				aboutus();
			}
			else
				cout<<"THANK YOU FOR YOUR TIME";
	}while(ch!=5);
}
void main()
{
	clrscr();
	cout<<"  *************************************************************************"<<endl;
	cout<<"  ******DDDDDDDDDD*********HHHH      HHHH****************AAAAAAAAAAAAAAAAAA**"<<endl;
	cout<<"  ******DDDDDDDDDDD********HHHH      HHHH**************AAAAAAAAAAAAAAAAAAAAA**"<<endl;
	cout<<"  ******DDDD     DDD*******HHHH      HHHH***********AAAAAAAAAAAAAAAAAAAAAAAA**"<<endl;
	cout<<"  ******DDDD      DDD******HHHH      HHHH**********AAAA      AAAAA            "<<endl;
	cout<<"  ******DDDD       DDD*****HHHH      HHHH********AAAA        AAAAA            "<<endl;
	cout<<"  ******DDDD        DDD****HHHH      HHHH******AAAA          AAAAA            "<<endl;
	cout<<"  ******DDDD         DDD***HHHH      HHHH****AAAA            AAAAA            "<<endl;
	cout<<"  ******DDDD          DDD**HHHH      HHHH**AAAA              AAAAA            "<<endl;
	cout<<"  ******DDDD           DDD*HHHH      HHHH*AAAA               AAAAA            "<<endl;
	cout<<"  ******DDDD            DDDHHHHHHHHHHHHHHAAAA                AAAAA            "<<endl;
	cout<<"  ******DDDD            DDDHHHHHHHHHHHHHHAAAA                AAAAA            "<<endl;
	cout<<"  ******DDDD           DDD*HHHH      HHHH*AAAA               AAAAA            "<<endl;
	cout<<"  ******DDDD          DDD**HHHH      HHHH**AAAA              AAAAA            "<<endl;
	cout<<"  ******DDDD         DDD***HHHH      HHHH****AAAA            AAAAA            "<<endl;
	cout<<"  ******DDDD        DDD****HHHH      HHHH******AAAA          AAAAA            "<<endl;
	cout<<"  ******DDDD       DDD*****HHHH      HHHH********AAAA        AAAAA            "<<endl;
	cout<<"  ******DDDD      DDD******HHHH      HHHH**********AAAA      AAAAA            "<<endl;
	cout<<"  ******DDDD     DDD*******HHHH      HHHH************AAAAAAAAAAAAAAAAAAAAAAA**"<<endl;
	cout<<"  ******DDDDDDDDDDD********HHHH      HHHH**************AAAAAAAAAAAAAAAAAAAAA**"<<endl;
	cout<<"  ******DDDDDDDDD**********HHHH      HHHH*****************AAAAAAAAAAAAAAAAAA**"<<endl;
	cout<<"  ****************************************************************************"<<endl;
	cout<<"  ****************************************************************************"<<endl;
	cout<<"\n\n\t\t\t LOADING...";
	delay(3000);
	clrscr();
	welcome();
	getch();
}
