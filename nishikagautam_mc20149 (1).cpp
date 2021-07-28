#include<iostream>
//#include<string>
#include<cstring>
//#include<string.h>
#include<stdlib.h>
 using namespace std;
 
 class book_hunt
 {
     protected:
	        char *author,*title,*publisher;
	        float *price;
	        int *stock;
	 
	 
	 public:
     	
     	string genre;
        void edit_book();
     void show_book(string genre){
     		   this->genre=genre;
     	   if(genre=="fiction")
     	   cout<<"************************************************";
     	   else if(genre=="non fictional")
     	   cout<<"**********************************************";
     	   else if(genre=="mystery")
     	   cout<<"**********************************************";
     	   else if(genre=="horror")
     	   cout<<"************************************************";
     	   else if(genre=="thriller")
     	   cout<<"**************************************************";
     	   else cout<<"invalid input";
		 }
	 
     	void modify_book();
     	
//        book_hunt()	{
//                 	author= new char[20];
//	                title=new char[20];
//	                publisher=new char[20];
//                 	price= new float;
//	                stock=new int;
//                	}
                	friend void data();
     friend  void show_data();
		 
		int book_modify(char buy_title[15], char buy_author[15] )
		{
		   if(strcmp(buy_title,title)==0 && strcmp(buy_author,author)==0)
		   return 1;
	       else return 0;
		}
	~book_hunt(){
	};
 };
 //void show_books(string genre) 
     
 void data()
 {
   	cout<<"all data entered "<<endl;
 }
  
  	void book_hunt:: edit_book(){
		
	//	edit_book() 
		  do
		  {
		  	  cout<<"\nEnter Author Name: ";     
			   cin.getline(author,20);
	           cout<<"Enter Title Name: ";       
			   cin.getline(title,20);
	           cout<<"Enter Publisher Name: ";   
			   cin.getline(publisher,20);
	           cout<<"Enter Price: ";            
			   cin>>*price;
	           cout<<"Enter Stock Position: ";   
			   cin>>*stock;
		  	
		  } while(stock!=0);
		
	}
class buy_book : public book_hunt{
    
public:
    buy_book()
    {
	int count;
	cout<<"\nEnter Number Of Books to buy: ";
	cin>>count;
 	if(count<=*stock)
	{
		*stock=*stock-count;
		cout<<"\nBooks Bought Sucessfully";
		cout<<"\nAmount: Rs. "<<(*price)*count;
	}
	else
		cout<<"\nRequired Copies not in Stock";	
    }
};

template <class C> C complaint_box(C &a){

 C complaint=a;
 return complaint;
};	
 int main()
 {
 	 int ch = 0, n=30; string genre;
 	 book_hunt *B[30];
 	 char title[20],author[20];
          while(1)
          {
              
                cout<<"\t\t";
                cout<<"\n\t\t 1 to TO BUY";
                cout<<"\n\t\t 2 to SHOW ALL BOOKS";
                
                cout<<"\n\t\t 3 to MODIFY BOOKS and EDIT BOOKS";
                cout<<"\n\t\t 4 if any complaint about the books:";
                cout<<"\n\t\t 5 to Exit";
 			
 			cout<<"\n\t\t choose: ";
 			cin>>ch;
 			switch(ch)
          	{
                case 1: {
					 system("cls");
                         cout<<"book title";
                        for(int i=0;i<20;i++)
                        {
                        	cin>>title[i];
						}
						 cout<<"book author";
                        for(int i=0;i<20;i++)
                        {
                        	cin>>author[i];
						}
						for(int i=0;i<n;i++)
						{
							if(B[i]->book_modify(title, author))
							{
							    buy_book();
								break;
							}
						}
					}
                        
                case 2: {
					 cout<<"enter your book genre: \nfiction, \n non fictional, \n mystery,\n horror, \n thriller"<<endl;
     	                cin>>genre;
     	                book_hunt obj1;
				        obj1.show_book(genre);
                        break;
                    }
                case 3:{
                      //modify_book();
                      //edit_book();
					  break;
				}
                case 4: {
					char w[50];
                        cout<<"enter your complaints about your books if any:";
                        for(int j=0;j<50;j++)
                        {
                        	cin>>w[j];
						}
						data();
						break;
					}
                case 5:{
					 exit(0);
                        break;
                    }
                default:{
                	cout<<"\a";
					break;
				}
          }     
           
          }

 }
