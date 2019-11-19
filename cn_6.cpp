#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string>
using namespace std;

int out_ip(int a[])
{
    int flag=1;
    for(int i=3;i>=0;i--)
    {
        if(i==3)
        cout<<a[i];
        else
        cout<<"."<<a[i];
	}

	for(int i=0;i<4;i++)
		if(a[i]>255)
		{
			flag=-1;
			cout<<endl<<"The given ip address is invalid"<<endl;
			break;
		}
    return flag;	
}

void convert(char ip[],int a[])
{
    int h=3, g;
    for(int i=0;i<=15;i++)
    {
        g=0;
        if(isdigit(ip[i]))
        {
            g=(int)ip[i]-'0';
            a[h]=a[h]*10+g;
        }
        else
        {
	        h--;
        }   
	}
}

void binary(int n,int r[],int k)
{    
	int h;
	h=n;
	while(n>0)
	{
		r[k]=n%2;
		n=n/2;
		k++;
	}
}

void out(int k[])
{
    for(int i=3;i>=0;i--)
    {
        if(i==3)
        cout<<k[i];
        else
        cout<<"."<<k[i];
    }
    cout<<endl;
}

int main()
{
    int *a,*r,*net,*bro,ch,l,n,cl,k=1;
    char ch1,ip[15];
        
    a=new int[4];
    r=new int[32];
    net=new int[4];
    bro=new int[4];
    
    cout<<"Enter the dataword in dotted decimal notation"<<endl;
    cin >> ip;
    for(int i=3;i>=0;i--)
    a[i]=0;

    convert(ip,a);
    cout<<"THe given ip address is : ";
    k=out_ip(a);

	if(k==-1)
    {
        cout<<endl<<"Enter the dataword in dotted decimal notation"<<endl;
        cin >> ip;
        convert(ip,a);
        cout<<"The given IP Address is : ";
        out_ip(a);
    }
    
    do{
		cout<<endl<<endl<<endl<<"***********MENU********************"<<endl;
		cout<<"Enter your choice : "<<endl;
		cout<<endl<<"1.Binary notation"<<endl<<"2.Class"<<endl<<"3.Network address"<<endl<<"4.Broadcast address"<<endl<<"5.Max. no of Host"<<endl<<"6.exit"<<endl;
		cin>>ch;

		switch(ch)
		{
			case 1:	cout<<"the binary notation is : "; 
					for(int i=1;i<=32;i++)
					r[i]=0;
					for(int i=0;i<4;i++)
					{
						n=a[i];
						binary(n,r,k);
						k=k+8;
					}
					
					for(int i=32;i>0;i--)
					{
						if(i%8==0)
							cout<<" "<<r[i];
						else
							cout<<r[i];
					}
					cout<<endl;                
					break;

			case 2:	if((a[3]>=0)&&(a[3]<=127))
					{
						cout<<"CLASS A"<<endl;
					}
					else if((a[3]>=128)&&(a[3]<=191))
					{
						cout<<"CLASS B"<<endl;
					}
					else if((a[3]>=192)&&(a[3]<=223))
					{
						cout<<"CLASS C"<<endl;
					}
					else if((a[3]>=224)&&(a[3]<=239))
					{
						cout<<"CLASS D"<<endl;
					}
					else
					{
						cout<<"CLASS E"<<endl;
					}
					break;
			
			case 3:	cout<<"The network address is : "; 
					for(int i=3;i>=0;i--)
						net[i]=a[i];

					if((a[3]>=0)&&(a[3]<=127))
					{
						net[1]=net[2]=net[0]=0;
						out(net);		
					}
					else if((a[3]>=128)&&(a[3]<=191))
					{
						net[0]=net[1]=0;
						out(net);
					}
					else if((a[3]>=192)&&(a[3]<=223))
					{
						cl=3;
						net[0]=0;
						out(net);
					}
					else if((a[3]>=224)&&(a[3]<=239))
					{
						cout<<"Can't Define"<<endl;
					
					}
					else
					{
						cout<<"Can't Define"<<endl;
					}
					break;

			case 4:	cout<<"The Broadcast address is : ";
					for(int i=3;i>=0;i--)
						bro[i]=a[i];

					if((a[3]>=0)&&(a[3]<=127))
					{
						bro[1]=bro[2]=bro[0]=255;
						out(bro);
					}
					else if((a[3]>=128)&&(a[3]<=191))
					{
						bro[0]=bro[1]=255;
						out(bro);
					}
					else if((a[3]>=192)&&(a[3]<=223))
					{
						cl=3;
						bro[0]=255;
						out(bro);
					}
					else if((a[3]>=224)&&(a[3]<=239))
					{
						cout<<"Can't Define"<<endl;
					
					}
					else
					{
						cout<<"Can't Define"<<endl;
					}
					break;
					
			case 5:	cout<<" the Max no of hosts are : ";
					if((a[3]>=0)&&(a[3]<=127))
					{
						cout<<pow(2,24)-2<<endl;
					}
					else if((a[3]>=128)&&(a[3]<=191))
					{
						cout<<pow(2,16)-2<<endl;
					}
					else if((a[3]>=192)&&(a[3]<=223))
					{
						cout<<pow(2,8)-2<<endl;
					}
					else if((a[3]>=224)&&(a[3]<=239))
					{
						cout<<"Can't define"<<endl;
					}
					else
					{
						cout<<"Can't define"<<endl;
					}
					break;

			case 6:exit(0);	

			default:cout<<"wrong choice"<<endl;
					break;
		}

		cout<<endl<<"Do you want to continue(y/n)"<<endl;
		cin>>ch1;		
    }while((ch1=='y')||(ch1=='Y'));

	return 0;
}