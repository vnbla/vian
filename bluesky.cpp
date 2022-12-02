#include <iostream>
#include <iomanip>
#include "bluesky.h"
using namespace std;

int reserve = 79;

int seat[size];
void seat_fill()
{
	for (int i = 0; i < size; i++)
	{
		seat[i] = 0;
	}
}

bool taken=false;
bool seat_no(int y)
{

        for (int i = 0; i < size; i++ )
        {
                if( seat[i] == -1 )
                {
				taken=true;
  	                 cout << "The seat is taken already. \n";
                        cout << "Please choose another seat number from below."<<endl;

				int j = 1;
				while ( j < size+1 )
				{
					if ( seat[j-1] == -1)
					j++;
					else
					{
						cout <<"|" << j << "|";
						if ( j%10 == 0 )
						cout << endl;
						j++;
					}

                		}
		}

        }

}

void menu()
{
char choice;

do{
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Make Reservation    ------ [1] \n";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Cancel Reservation  ------ [2] \n ";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Search Passenger    ------ [3] \n";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Change Reservation  ------ [4] \n";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Quit                ------ [5] \n ";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
cout <<"   Option : ";

	cin >> choice;
	choice = ((int)(choice)-48);

	switch (choice)
	{
	case 1: system("CLS"); bluesky.make_reservation();
					break;
	case 2: system("CLS"); bluesky.cancel_reservation();
					break;
	case 3: system("CLS"); bluesky.search_passenger();
					break;
	case 4: system("CLS"); bluesky.change_reservation();
					break;
	case 5: cout << "\n\nThank you come again\n\n\n";
					break;

	default: cout<<" Don't be like a DORK!!! \n\n";
		break;


	}	// Ending case loop.


	cout<<"\n   PROCESS COMPLETED...\n\n";

	cin.get();
	if(cin.get()=='\n')
		system("CLS");


    cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
	cout << "\t    AIRLINE RESERVATION SYSTEM \n";
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;

 }while(choice != 7 );

}

//************************************************************************
airlines::airlines()
{
	start = NULL;
}

//*************************************************************************
void airlines:: make_reservation()
{
	int meal_choice, x;


	temp = new node;

	cout<<"\n\n   Enter First Name of person: ";
	cin>>temp->fname;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Enter Last Name of Person: ";
	cin>>temp->lname;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Enter ID of the person: ";
	cin>>temp->ID;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout<<"   Enter Phone Number of Person: ";
	cin>>temp->phone_num;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";

	do{
	cout << "   Please Enter the Seat Number: ";

		cin>>x;
		while(x>size){
		cout<<"   Try again:: ";
		cin >>x;
		}

	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
		if((seat[x-1])>-1)
		taken = false;
		else
		seat_no(x);
	seat[x-1] = -1;
	temp->seat_num = x;

	}while(taken==true);


//******************************************************************************

	reserve++;
	temp->reserve_num=reserve;
	cout <<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
	cout <<"   YOUR RESERVATION NUMBER IS :: " << reserve << "\n";
	cout <<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";

	temp->next = NULL;

	if(start == NULL)
		start = temp;
	else
	{
		temp2 = start;
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}

}
//********************************************************************************************
int cancel=0;
void airlines:: cancel_reservation()
{	int num;
	cout << "Please Enter your reservation Number here: ";
	cin >> num;

		node *cur = start;
		if(cur!=NULL)
		{

		if ( start->reserve_num == num )
		{
			node *del = start;
			start = start->next;
			delete del;
			seat[0] = 0;
			cancel++;
			return;
		}
		else
		{
			node *pre, *cur;
			pre = start;
			cur = start->next;
			while(cur != NULL)
			{
				if ( cur->reserve_num == num )
						break;
				pre = cur;
				cur = cur->next;
			}
			seat[cur->seat_num-1] = 0;
			if (cur != NULL )
			pre->next = cur->next;

		}

	cancel++;


		}
		else
		{
		cout<<"!!! *** Nothing to delete or invalid entry *** !!! \n"<<endl;
		}

}
//********************************************************************************************
void airlines:: search_passenger()
{
		string fakename;
		cout << "Please enter your first name here: ";
		cin >> fakename;

		node *cur = start;
		while (cur != NULL)
		{
			if (cur->fname == fakename)
			{
				cout << "First Name : " << cur->fname << endl;
				cout << "Last Name : " << cur->lname << endl;
				cout << "ID " << cur->ID << endl;
				cout << "Phone number: " << cur->phone_num << endl;
				cout << "Seat Number: " << cur->seat_num << endl;
				cout << "Reservation No. " << cur->reserve_num<< endl;
				return;
			}	cur = cur->next;
		}	cout << " Sorry!!! NOT FOUND \n\n";

}

//********************************************************************************************
void airlines:: change_reservation()

{
	int option , next_seat;
	cout << " Please enter your seat number: ";
	cin >> option;
	node *cur;
	cur = start;

	while(cur != NULL)
	{
		if ( cur->seat_num == option )
			break;
		cur = cur->next;
	}
	cout << "Please choose another seat number from below.";
		int j = 1;
		while ( j < size+1 )
		{
			if ( seat[j-1] == -1)
			j++;
			else
			{
			cout <<"| " << j << "|";
			if ( j%10 == 0 )
			cout << endl;
			j++;
			}
		}
	cin >> next_seat;
	seat[cur->seat_num-1]=0;
	cur->seat_num = next_seat;
	seat[next_seat-1] = -1;

}



