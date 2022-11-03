#include <iostream>
#include <string>
using namespace std;

class Personne {
	string _Name;
	string _Status;
	int _Dob;
public:
	//Personne();
	//~Personne();
	void SetName(string name){
		_Name = name;
	}
	void SetDob(int DateOfBirth){
		_Dob = DateOfBirth;
	}
	void SetStatus(string situation){
		_Status = situation;
	}
	string GetName() const {return _Name;}
	string GetStatus() const {return _Status;}
	int GetDob() const {return _Dob;}
	void GetInfo() const {cout << _Name << " est né en " << _Dob << ", il est " << _Status << endl;}
};


class Student{
	string _prenom;
	string _nom;
	float _tabnotes[10];
public:
	void saisie(){
		string last;
		string first;
		int mark;
		char done = 'N';
		int i = 0;
		cout << "What is your family name ? ";
		cin >> last;
		cout << "What is your first name? ";
		cin >> first;
		for (int i = 0; i < 10; i++){
			cout << "Mark ? ";
			cin >> mark;
			_prenom = first;
			_nom = last;
			_tabnotes[i] = mark;
			cout << i << endl;
		}
	}

	void affichage() const{
		cout << _prenom << " " << _nom << " got " << this->Moyenne() << endl;
	}
	float Moyenne() const{
		int j = 0;
		int sum;
		for (auto &note: _tabnotes){

			sum += note/10;
			j++;

		}
		return sum/j;
	}

	bool exae_quo(const Student& E) const{
		return this->Moyenne() == E.Moyenne();
	}
};


int main(){
	Student myObj;
	Student myObj2;
	myObj.saisie();
	myObj.affichage();
	cout << myObj.exae_quo(myObj2) << endl; 
	return 0;

}