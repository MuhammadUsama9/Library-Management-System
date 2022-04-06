#include<iostream> //headrerfile
#include<string>   //headrerfile
#include<fstream>
#include<iomanip>  //headrerfile
using namespace std;
class library
{   
	public:
		block_A()                                                                     //function
		{
			cout<<"The location of your book is Block A";
		}
		block_B()
		{
			cout<<"The location of your book is Block B";
		}
		
	
		block_C()
		{
			cout<<"The location of your book is Block  C";
		}
		block_D()
		{
			cout<<"The location of your book is Block  D";
		}
		block_E()
		{
			cout<<"The location of your book is Block  E";
		}
};
class Category:public library                    //inherited class
{
	private:
		string name;
		int roll;
		int ans;
		int ans3;
		
	public:
		    string userName;
    string userPassword;
    int loginAttempt =0;
			
			int pass;
			string name_return;
			int roll_return;
		    string bookret;
		    string newbook;
		    string author;
		    string delbook;
		    string delauthor;
		    int days;
		input ()
		{ 
		fstream lib;                                                        //data linking or saving code
		lib.open("library.txt",ios::in | ios::out |ios::app); 
			cout<<"Enter your Name=?";
			cin>>name;
			cout<<"Enter your Roll_no=?";
			cin>>roll;
			cout<<endl;
			lib<<name<<"|"<<roll;
			lib.close();
			cout<<"Enter your category\n";
			cout<<"1:Math  ,  2:History  , 3:Literature , 4:Poetry , 5:Computer Sciences";
			cin>>ans;
			switch(ans)                                                   //switch statement
			{
				case 1:
					block_A();
					break;
				case 2:
				    block_B();
			        break;
			    case 3:
			    	 block_C();
			    	 break;
			    case 4:
			    	 block_D();
			    	 break;
			    case 5:
			    	 block_E();
			    	 break;
				default:
					cout<<"You enter wrong key!!!\n";
				break;
					
			}
		} 
	 bookreturn ()
	 {
	 	fstream lib2;
		lib2.open("library2.txt",ios::in | ios::out |ios::app); 
	 	cout<<"Enter your Name=";
			cin>>name_return;
			cout<<"Enter your Roll_no=";
			cin>>roll_return;
			cout<<"Enter the name of the book you want to return \n";
			cin>>bookret;
			cout<<"Book return in number of days???";
			cin>>days;
			lib2<<name_return<<"|"<<roll_return<<"|"<<bookret<<"|"<<days;
			lib2.close();
			cout<<"your name is:"<<name_return<<"\n you roll no is:"<<roll_return<<
		 "\n you return the which name is:"<<bookret<<endl;
			if(days>3)                                                         //if else if else statement
			{
				cout<<"You return the book after 3 days So,\n";
				cout<<"Fine Imposed is Rs.500";
			}
			else {
				cout<<"You have return the book within 3 days.\nSo your fine is Rs.0";
			}
}
        book()
        {
        	cout<<"MATH       \tCOMPUTER SCIENCES\tPOETRY           \tHISTORY        \tLITERTURE\n";
        	cout<<endl;
        	cout<<"Calculus 13\tProgramming      \tShakespeareSonnets\tAncient World \tChips\n";
        	cout<<"Algebra     \tOOp              \tThe Bees         \t1491           \tHobbit\n";
        	cout<<"Geometry    \tJava Script      \tDewane Ghalib     \tPakistanStudies\tRomeo Juliet\n";
        	cout<<"Thomas 13   \tPython           \tShikwa JawabeShikwa\tConstitution   \tFeary Middows\n";
        	cout<<"Polynomial  \tPhp              \tGhalib             \tCulture        \tRed Riding Hood\n";
		}
		term(){
			cout<<"1.Books are the privte property of university\n";
			cout<<"2.Library Card is mandatory\n";
			cout<<"3.Book will be returnd in 3 days\n";
			cout<<"4.After 3 days 500 fine would be imposed\n";
			cout<<"5.Any damage  in book material a fine will be imposed on student of 1000\n";
			cout<<"6.Maintain Silence in the library\n";
		}
	  addbook()
	  {
	  	cout<<"Enter the name of the new book:";
	  	cin>>newbook;
	  	cout<<"Enter the author name of the book";
	  	cin>>author;
	  	cout<<"Your new book is added in library!!!\n";
	  }
	  deletebook ()
	  {
	  	cout<<"Enter the name of the book you want to delete:";
	  	cin>>delbook;
	  	cout<<"Enter the author name of the book";
	  	cin>>delauthor;
	  	cout<<"your book is deleted!!!\n";
	  }
	 admin()
	 {
    while (loginAttempt < 5)                        //while loop
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "usama" && userPassword == "oop")
        {
            cout <<"\tWelcome Usama!\n";
            cout<<"\tPlease chosse your Answer \n";
            cout<<"\t1:Add new book \n \t2:Delete a book \n";
            cin>>ans3;
             switch(ans3)
	 {
	 	case 1:
	 	  addbook();
	 	   break;
	 	case 2:
	 		deletebook ();
	 		break;
		 default:
		    cout<<"You enter wrong key";
			break;
				}
            break;
        }
        else if (userName == "anush" && userPassword == "oop")
        {
            cout <<"\tWelcome Anush!\n";
             cout<<"\tPlease chosse your Answer\n";
            cout<<"\t 1:Add new book \n\t 2:Delete a book \n";
            cin>>ans3;
             switch(ans3)
	 {
	 	case 1:
	 	  addbook();
	 	   break;
	 	case 2:
	 		deletebook ();
	 		break;
		 default:
		    cout<<"You enter wrong key";
			break;
				}
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }
    cout<<endl;
    cout << "Thank you for logging in.\n";
}
	 student()
	 {
	 	cout<<"\t***PLEASE CHOOSE YOUR NUMBER***\n";
     cout<<endl;
	 cout<<"\t1:Want to Borrow a Book from Library \n";	
     cout<<"\t2:Return the book \n";
	 cout<<"\t3:Want to see a list of available books? \n";
	 cout<<"\t4:Terms And Condition \n"; 
	 cin>>ans;
	 switch(ans)
	 {
	 	case 1:
	 	  input ();
	 	   break;
	 	case 2:
	 		bookreturn ();
	 		break;
	 	case 3:
	 		book();
			 break;	
		case 4:
			term();
			break;
	 
		 default:
		    cout<<"You enter wrong key";
			break;
				}
	 }
	 
};

int main()                                                      //main
{
	int ans2;
	int ans;
  library l;
  Category c;
     cout<<"************ WELCOME TO THE LIBRARY MANAGEMENT SYSTEM *************\n";
	 cout<<endl;
	 cout<<"\t\t***** Lahore Leads University *****\n";
	 cout<<endl;
	 cout<<"\tPlease choose your number\n";
     cout<<"\t1.Admin\n";
     cout<<"\t2.Student\n";
     cin>>ans2;
     switch(ans2)
	 {
	 	case 1:
	 	  c.admin ();
	 	   break;
	 	case 2:
	 		c.student ();
	 		break;
	 	default:
		    cout<<"You enter wrong key";
			break;
  	} 
		 }
  
	

