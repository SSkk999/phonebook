
using namespace std;
#include <iostream>
#include <string>
#include <fstream>

struct PIB {
	string name;
	string surname;
	string fathername;
};
struct numbers {
	int homelynumber;
	int workingnumber;
	int mobilenumber;
};
class phonebook {
private:
	PIB p;
	numbers n;
	string additional;

public:


	void showsekk(phonebook arr)
	{
		if (arr.p.name == p.name && arr.p.surname == p.surname && arr.p.fathername == p.fathername)
		{
			cout << "name:" << p.name << endl;
			cout << "surname:" << p.surname << endl;
			cout << "Fathername:" << p.fathername << endl;
			cout << "homelynumber:" << n.homelynumber << endl;
			cout << "mobilenumber:" << n.mobilenumber << endl;
			cout << "workingnumber:" << n.workingnumber << endl;
			cout << "additional:" << additional << endl;
		}
		else {
			cout << "invalid:" << endl;
		}



	}








	void seekPIB(string name1, string surname1, string fashername1) {
		phonebook arr;
		arr.p.name = name1;
		arr.p.surname = surname1;
		arr.p.fathername = fashername1;
		showsekk(arr);



		//for (int i = 0; i < currentSize; i++)
		//{
		//	

		//	
		//}

	}
	void seekPIB1(string name1, string surname1, string fashername1) {
		phonebook arr;
		arr.p.name = name1;
		arr.p.surname = surname1;
		arr.p.fathername = fashername1;
		showsekk(arr);



		//for (int i = 0; i < currentSize; i++)
		//{
		//	

		//	
		//}

	}



















	phonebook()
	{
		p.name = "No name";
		p.surname = "No surname";
		p.fathername = "No Fathername";
		n.homelynumber = 0;
		n.mobilenumber = 0;
		n.workingnumber = 0;
		additional = "no additional";
	}
	 void show() 
	{
		cout << "name:" << p.name << endl;
		cout << "surname:" << p.surname << endl;
		cout << "Fathername:" << p.fathername << endl;
		cout << "homelynumber:" << n.homelynumber << endl;
		cout << "mobilenumber:" << n.mobilenumber << endl;
		cout << "workingnumber:" << n.workingnumber << endl;
		cout << "additional:" << additional << endl;



	}


	 inline void setname(string newnmae){
		 p.name = newnmae;
	 }
	 void set() {
		 
		 cout << "name:" <<  endl;
		 cin >> p.name;
		 cout << "surname:" <<  endl;
		 cin >> p.surname;
		 cout << "Fathername:" <<  endl;
		 cin >> p.fathername;
		 cout << "homelynumber:" << endl;
		 cin >> n.homelynumber;
		 cout << "mobilenumber:" << endl;
		 cin >> n.mobilenumber;
		 cout << "workingnumber:" <<  endl;
		 cin >> n.workingnumber;
		 cout << "additional:" <<  endl;
		 cin >> additional;
	 } 
	 
	 //void setadd(contact* sd) {
		// contact ww;
		// cout << "name:" << endl;
		//  sd->;
		// cout << "surname:" << endl;
		// cin >> p.surname;
		// cout << "Fathername:" << endl;
		// cin >> p.fathername;
		// cout << "homelynumber:" << endl;
		// cin >> n.homelynumber;
		// cout << "mobilenumber:" << endl;
		// cin >> n.mobilenumber;
		// cout << "workingnumber:" << endl;
		// cin >> n.workingnumber;
		// cout << "additional:" << endl;
		// cin >> additional;
	 //}
};
class contact {
	phonebook* book;
	int count;
	int currentSize;

public:
	contact() : book(nullptr), count(0), currentSize(0) {}

	contact(int count) : count(count), currentSize(0) {
	 book = new phonebook[count];
	}
	//contact(int count,int sd) : count(count), currentSize(0) {
	//	book = new phonebook[count + sd];
	//}


	~contact()
	{
		if (book != nullptr)
		{
			delete[] book;
		}

	}


	void show2book(phonebook* book1) {
		for (int i = 0; i < currentSize; i++)
		{
			cout << "book" << i + 1 << endl;
			book1[i].show();
		}




	}


	void shoow(phonebook* book1) {



		for (int i = 0; i < currentSize; i++)
		{
			cout << "book" << i + 1 << endl;
			book1[i].show();
		}





	}











	int count1 = 0;
	void addContact() {
		if (currentSize < count) {
			cout << "Adding new contact..." << endl;
			book[currentSize].set();
			currentSize++;
		}
		else {
			cout << "Contact list is full!" << endl;
		}
	}
	void addContact1() {
		if (currentSize < count) {
			cout << "Adding new contact..." << endl;
			book[currentSize].set();
			currentSize++;
		}
		else {
			cout << "Contact list is full!" << endl;
		}
	}
	void addContact1(phonebook* book1) {
		int currentSize1 = 0;
		if (currentSize < count) {
			cout << "Adding new contact..." << endl;
			book1[currentSize1].set();
			currentSize++;
		}
		else {
			cout << "Contact list is full!" << endl;
		}
	}

	void delete1(int sd,int num,int num2,int num3) {
		if (num != 4) {

			phonebook* book1 = new phonebook[count - 1];
			int j = 0;
			for (int i = 0; i < currentSize; i++)
			{
				if (sd != i)
				{
					book1[j] = book[i];
					j++;
				}


			}



			currentSize--;






	
			if (num == 4) {


				shoow(book1);


			}

			if (num2 == 5) {


				addContact1(book1);


			}
			if (num3 == 6) {

				string name1, surname1, fashername1;
				cout << "enter name:" << endl;
				cin >> name1;
				cout << "enter surname1:" << endl;
				cin >> surname1;
				cout << "enter fashername1:" << endl;
				cin >> fashername1;


				for (int i = 0; i < currentSize; i++)
				{
					book1[i].seekPIB1(name1, surname1, fashername1);
				}


				//for (int i = 0; i < currentSize; i++)
				//{
				//	

				//	
				//}







			}




				addContact1(book1);


			}




		}






	void seekPIB(){
		string name1, surname1, fashername1;
		cout << "enter name:" << endl;
		cin >> name1;
		cout << "enter surname1:" << endl;
		cin >> surname1;
		cout << "enter fashername1:" << endl;
		cin >> fashername1;

		
		for (int i = 0; i < currentSize; i++)
		{
			book[i].seekPIB(name1, surname1, fashername1);
		}


		//for (int i = 0; i < currentSize; i++)
		//{
		//	

		//	
		//}
	
	
	
	
	
	
	
	}



	
	void showall() {
		for (int i = 0; i < currentSize; i++)
		{
			cout << "book" << i + 1 << endl;
			book[i].show();
		}
	}

		void showall1(int ds) {
			for (int i = 0; i < currentSize; i++)
			{
				cout << "book" << i + 1 << endl;
				book[i].show();
			}
	

	
	}

};




































int main()
{
	int con = 0;
	string a;
	phonebook s;
	cin >> con;
	contact v (con);
	int choice = 0;
	char ss;
	int count1 = 0;
	int count2 = 0;
 int choice22 = 0;
 int choice33 = 0;
	//s.show();
	//s.set();
	//s.show();
	//cin >> a;
	//s.setname(a);
	//s.show();

	
	do {
		v.addContact();
		cout << "Add another contact? (y/n): ";
		cin >> ss;
	} while (ss == 'y' || ss == 'Y');
	v.showall();
	do
	{
		cout << "1-add\n2-delete\n3-serk PiB\n4-show\n5-exit";
		cin >> choice;

		switch (choice)
		{
		case 1: {
			if (choice22==0) {
				choice33++;
				cout << "enter lead the number of how many numbers to add:";
				cin >> count1;
				v.addContact1();
				

			}
			else
			{
				v.delete1(count2, 0,5,0);
			}
			break;

		case 2: {
			choice22++;
			cout << "delete:";
			cin >> count2;
			v.delete1(count2,0,0,0);
			break;
		case 3: {
			if (choice22 ==0)
			{
				v.seekPIB();
			}
			else {
				v.delete1(count2, 0, 5, 6);
			}

			break;

		}
		case 4: {
			if (choice22 > 1)
			{
				v.delete1(count2, 4,0,0);
			}
			else if (choice22 == 0 && choice33 ==0)
			{
				v.showall();
			}
			else if (choice33 >= 1) {
				v.showall1(count1);

			}
			break;
		}


		}
		default:
			cout << "no no";
			break;
		}
			 



		}
	} while (choice != 5);
	//string path = "test.txt";
	//ofstream file(path, ios_base::out);
	//for (int i = 0; i < currentSize; i++)
	//{
	//	file << book[i].show;
	//}

}
