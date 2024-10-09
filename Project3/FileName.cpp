#include<iostream>
#include "Header.h"
using namespace std;
//default constructoru quvveden salmaq
//1. with parameter constructor yarada bilerik
//2. Private hissede yaza bilerik
//3. A() = delete; konstruktoru silirik

//class A {
//	/*A();*/
//public:
//	int number;
//	A() = delete; 
//
//};





//void Person::Print() {
//		cout << age << endl;
//}

/*
static field- obyektden asili deyil. Obekt yaranmadan yaranir. Proram bitende silinen deysienlerdir
obyektler arasinda elaqe ucun istifade oluna biler
static method- obyekt yaranmadan yaranir. Icinde ancaq static field islede bilerik
*/

/*
constructor delegate- bir constructor icinde diger constructorun istifade olunmasi
*/

class SomeClass {
public:
	static int staticField;
	int age;
	SomeClass() {
		staticField++;
		this->age = 0;
	}
	SomeClass(int age) : SomeClass() { //constructor delegate
		this->age = age;
	}

	static void ShowField() {
		cout << staticField << endl;
	}

	int GetAge() const{  // bu zaman hemin methodun icinde hecneyi deyismeye icaze vermir
		//age = 90;
		return age;
	}

};

int SomeClass::staticField = 1;

void main() {
#pragma region First
	/*
2 cur datatype var:
1. Built in - char,int,double ve s.
2. User define - struct yaxud class vasitesile yaradiriq
*/

//A a;

//Person person1(8); // stack 
//Person* person2 = new Person(17); //heap

//cout << person1.age << endl;
//cout << person2->age << endl;

//Person p(9);
//p.Print();
#pragma endregion

	cout << "Static field: " << SomeClass::staticField << endl;

	/*SomeClass another(90);
	cout <<"Static field: " << another.staticField << endl;
	cout << another.age << endl;
	SomeClass another2(30);
	cout << "Static field: " << another2.staticField << endl;
	cout << another2.age << endl;*/

	//SomeClass::ShowField();
	//SomeClass::age;

	SomeClass data(9);
	SomeClass data;

	



}