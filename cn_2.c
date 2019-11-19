#include<iostream>
using namespace std;

#define P1 0
#define P2 1
#define P3 3

int main()
{
	int i, choice;
	int code[7] = {0}, r_msg[7]={0};
	string message;

	do{
		cout << "\nEnter the message bits in binary to be sent (4 bits): ";
		cin >> message;

		code[2] = message[0] - 48;
		code[4] = message[1] - 48;
		code[5] = message[2] - 48;
		code[6] = message[3] - 48;
		
		for(i=0;i<7;i++)	if( code[i]!=0 && code[i]!=1 )	break;
	}	while( i < 7 );

	cout << "\nAvailable modes:\n\t1. EVEN PARITY\n\t2. ODD PARITY";
	cout << "\nEnter your choice: ";
	cin >> choice;

	code[P1] = code[2] ^ code[4] ^ code[6];
	code[P2] = code[2] ^ code[5] ^ code[6];
	code[P3] = code[4] ^ code[5] ^ code[6]; 

	if( choice == 2 )
	{
		code[P1] = !code[P1];
		code[P2] = !code[P2];
		code[P3] = !code[P3];
	}
	
	cout << "\nThe Hamming code for given message is: ";
	for(i=0;i<7;i++)	cout << code[i];

	cout << "\nParity bits are:\tP1="<<code[P1]<<"\tP2="<<code[P2]<<"\tP3="<<code[P3];

	do{
		cout << "\n\nEnter the received message in binary (7 bits): ";
		cin >> message;

		for(i=0;i<7;i++)
		{
			if( ( r_msg[i] = message[i] - 48 ) != 0 && r_msg[i]!=1 ) 	break;
		}
	}	while(i<7);

	int E3, E2, E1, E;

	E3 = r_msg[3] ^ r_msg[4] ^ r_msg[5] ^ r_msg[6];
	E2 = r_msg[1] ^ r_msg[2] ^ r_msg[5] ^ r_msg[6];
	E1 = r_msg[0] ^ r_msg[2] ^ r_msg[4] ^ r_msg[6];

	if( choice == 2 )
	{
		E3 = !E3;
		E2 = !E2;
		E1 = !E1;
	}

	E = E3*4 + E2*2 + E1;

	if( E == 0 )
	{
		cout << "\nThe received message is correct!";
	}

	else
	{
		cout << "\nError at position: " << E--;
		cout << "\nThe correct message is: ";

		r_msg[E] = ( r_msg[E] )? 0:1;

		for(i=0;i<7;i++)	cout << r_msg[i];
	}

	return 0;
}