#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

void Vector() {
	//VECTOR
	cout << "------------------VECTOR ITERATOR-------------------" << endl;

	vector <int> v = { 1,2,3,4,5,6 };
	vector <int>::iterator i1;
	cout << "iterator use begin/end: ";
	for (i1 = v.begin(); i1 != v.end(); ++i1) {
		cout << *i1 << " ";
	}

	vector <int>::const_iterator i2;
	cout << endl << "const_iterator use begin/end: ";
	for (i2 = v.begin(); i2 != v.end(); ++i2) {
		cout << *i2 << " ";
	}

	vector <int>::const_iterator i3;
	cout << endl << "const_iterator use cbegin/cend: ";
	for (i3 = v.cbegin(); i3 != v.cend(); ++i3) {
		cout << *i3 << " ";
	}

	vector <int>::reverse_iterator i4;
	cout << endl << "reverse_iterator use rbegin/rend: ";
	for (i4 = v.rbegin(); i4 != v.rend(); ++i4) {
		cout << *i4 << " ";
	}

	vector <int>::const_reverse_iterator i5;
	cout << endl << "const_reverse_iterator use rbegin/rend: ";
	for (i5 = v.rbegin(); i5 != v.rend(); ++i5) {
		cout << *i5 << " ";
	}

	vector <int>::const_reverse_iterator i6;
	cout << endl << "const_reverse_iterator use crbegin/crend: ";
	for (i6 = v.crbegin(); i6 != v.crend(); ++i6) {
		cout << *i6 << " ";
	}

	cout << endl;
}
void Deque() {
	cout << endl << "------------------DEQUE ITERATOR-------------------" << endl;

	deque <int> D = { 1,2,3,4,5,6 };
	deque <int>::iterator d1;
	cout << "iterator use begin/end: ";
	for (d1 = D.begin(); d1 != D.end(); ++d1) {
		cout << *d1 << " ";
	}

	deque <int>::const_iterator d2;
	cout << endl << "const_iterator use begin/end: ";
	for (d2 = D.begin(); d2 != D.end(); ++d2) {
		cout << *d2 << " ";
	}

	deque <int>::const_iterator d3;
	cout << endl << "const_iterator use cbegin/cend: ";
	for (d3 = D.cbegin(); d3 != D.cend(); ++d3) {
		cout << *d3 << " ";
	}

	deque <int>::reverse_iterator d4;
	cout << endl << "reverse_iterator use rbegin/rend: ";
	for (d4 = D.rbegin(); d4 != D.rend(); ++d4) {
		cout << *d4 << " ";
	}

	deque <int>::const_reverse_iterator d5;
	cout << endl << "const_reverse_iterator use rbegin/rend: ";
	for (d5 = D.rbegin(); d5 != D.rend(); ++d5) {
		cout << *d5 << " ";
	}

	deque <int>::const_reverse_iterator d6;
	cout << endl << "const_reverse_iterator use crbegin/crend: ";
	for (d6 = D.crbegin(); d6 != D.crend(); ++d6) {
		cout << *d6 << " ";
	}
	cout << endl;
}
void List() {
	cout << endl << "------------------LIST ITERATOR-------------------" << endl;

	list <int> L = { 1,2,3,4,5,6 };
	list <int>::iterator l1;
	cout << "iterator use begin/end: ";
	for (l1 = L.begin(); l1 != L.end(); ++l1) {
		cout << *l1 << " ";
	}

	list <int>::const_iterator l2;
	cout << endl << "const_iterator use begin/end: ";
	for (l2 = L.begin(); l2 != L.end(); ++l2) {
		cout << *l2 << " ";
	}

	list <int>::const_iterator l3;
	cout << endl << "const_iterator use cbegin/cend: ";
	for (l3 = L.cbegin(); l3 != L.cend(); ++l3) {
		cout << *l3 << " ";
	}

	list <int>::reverse_iterator l4;
	cout << endl << "reverse_iterator use rbegin/rend: ";
	for (l4 = L.rbegin(); l4 != L.rend(); ++l4) {
		cout << *l4 << " ";
	}

	list <int>::const_reverse_iterator l5;
	cout << endl << "const_reverse_iterator use rbegin/rend: ";
	for (l5 = L.rbegin(); l5 != L.rend(); ++l5) {
		cout << *l5 << " ";
	}

	list <int>::const_reverse_iterator l6;
	cout << endl << "const_reverse_iterator use crbegin/crend: ";
	for (l6 = L.crbegin(); l6 != L.crend(); ++l6) {
		cout << *l6 << " ";
	}
	cout << endl;
}
void ForwardList() {
	cout << endl << "------------------FORWARD_LIST ITERATOR-------------------" << endl;

	forward_list <int> FL = { 1,2,3,4,5,6 };
	forward_list <int>::iterator fl1;
	cout << "iterator use begin/end: ";
	for (fl1 = FL.begin(); fl1 != FL.end(); ++fl1) {
		cout << *fl1 << " ";
	}

	forward_list <int>::const_iterator fl2;
	cout << endl << "const_iterator use begin/end: ";
	for (fl2 = FL.begin(); fl2 != FL.end(); ++fl2) {
		cout << *fl2 << " ";
	}

	forward_list <int>::const_iterator fl3;
	cout << endl << "const_iterator use cbegin/cend: ";
	for (fl3 = FL.cbegin(); fl3 != FL.cend(); ++fl3) {
		cout << *fl3 << " ";
	}
	
	forward_list <int>::const_iterator fl4;
	cout << endl << "const_iterator use before_begin to insert_after (6): ";
	fl4 = FL.insert_after(FL.before_begin(), 6);
	for (fl1 = FL.begin(); fl1 != FL.end(); ++fl1) {
		cout << *fl1 << " ";
	}
	cout << endl;
}
void Map() {
	cout << endl << "------------------MAP ITERATOR-------------------" << endl;

	map <int, string> M1;
	M1[1] = "uno"; M1[2] = "dos"; M1[3] = "tres"; M1[4] = "quatre"; M1[5] = "cinc"; M1[6] = "sis";

	map <int,string>::iterator m1;

	cout << "iterator use begin/end: "<<endl;
	for (m1 = M1.begin(); m1 != M1.end();++m1) {
		cout << m1->first << "=" << m1->second << "   ";
	}
	cout << endl;

	map <int, string>::const_iterator m2;
	cout << "const_iterator use begin/end: " << endl;
	for (m1 = M1.begin(); m1 != M1.end(); ++m1) {
		cout << m1->first << "=" << m1->second << "   ";
	}
	cout << endl;

	map <int, string>::const_iterator m3;
	cout << "const_iterator use cbegin/cend: " << endl;
	for (m3 = M1.cbegin(); m3 != M1.cend(); ++m3) {
		cout << m3->first << "=" << m3->second << "   ";
	}
	cout << endl;

	map <int, string>::reverse_iterator m4;
	cout << "reverse_iterator use rbegin/rend: " << endl;
	for (m4 = M1.rbegin(); m4 != M1.rend(); ++m4) {
		cout << m4->first << "=" << m4->second << "   ";
	}
	cout << endl;

	map <int, string>::const_reverse_iterator m5;
	cout << "const_reverse_iterator use rbegin/rend: " << endl;
	for (m5 = M1.rbegin(); m5 != M1.rend(); ++m5) {
		cout << m5->first << "=" << m5->second << "   ";
	}
	cout << endl;

	map <int, string>::const_reverse_iterator m6;
	cout << "const_reverse_iterator use crbegin/crend: " << endl;
	for (m6 = M1.crbegin(); m6 != M1.crend(); ++m6) {
		cout << m6->first << "=" << m6->second << "   ";
	}
	cout << endl;
}
void Set() {
	cout << endl << "------------------SET ITERATOR-------------------" << endl;

	set <int> S = {1,2,3,4,5,6};
	set<int>::iterator s1;
	cout << "iterator use begin/end: ";
	for (s1 = S.begin(); s1 != S.end(); ++s1) {
		cout << *s1 << " ";
	}

	set<int>::const_iterator s2;
	cout << endl << "const_iterator use begin/end: ";
	for (s2 = S.begin(); s2 != S.end(); ++s2) {
		cout << *s2 << " ";
	}

	set <int>::const_iterator s3;
	cout << endl << "const_iterator use cbegin/cend: ";
	for (s3 = S.cbegin(); s3 != S.cend(); ++s3) {
		cout << *s3 << " ";
	}

	set <int>::reverse_iterator s4;
	cout << endl << "reverse_iterator use rbegin/rend: ";
	for (s4 = S.rbegin(); s4 != S.rend(); ++s4) {
		cout << *s4 << " ";
	}

	set <int>::const_reverse_iterator s5;
	cout << endl << "const_reverse_iterator use rbegin/rend: ";
	for (s5 = S.rbegin(); s5 != S.rend(); ++s5) {
		cout << *s5 << " ";
	}

	set <int>::const_reverse_iterator s6;
	cout << endl << "const_reverse_iterator use crbegin/crend: ";
	for (s6 = S.crbegin(); s6 != S.crend(); ++s6) {
		cout << *s6 << " ";
	}
	cout << endl;
}

void VectorConstructor() {
	cout <<endl<< "-------------------------VECTOR CONSTRUCTOR-----------------------" << endl;
	vector <int> vc1;						 //default
	vector <int> :: iterator i1;

	vector <int> vc2(6);					//fill ->(0,0,0,0,0,0)
	for (i1 = vc2.begin(); i1 != vc2.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;

	vector <int> vc3(6, 1);					 //fill ->(1,1,1,1,1,1)
	for (i1 = vc3.begin(); i1 != vc3.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;

	vector <int> vc4(vc2.begin(), vc2.end());//constructor use iterators ->(1,1,1,1,1,1)
	for (i1 = vc4.begin(); i1 != vc4.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;

	vector <int> vc5(vc2.begin()+1, vc2.end()-1);//range ->(1,1,1,1)
	for (i1 = vc5.begin(); i1 != vc5.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;

	vector <int> vc6(vc5);						 //copy ->(1,1,1,1)
	for (i1 = vc6.begin(); i1 != vc6.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;

	vector <int> vc7({1,2,3,4,5,6});			//list ->(1,2,3,4,5,6)
	for (i1 = vc7.begin(); i1 != vc7.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;

	int vcArray[]{1,2,3,4};						//array ->(1,2,3,4)
	vector <int> vc8(vcArray, vcArray+sizeof(vcArray)/sizeof(int));
	for (i1 = vc8.begin(); i1 != vc8.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
											
	int *pvc;									//array ->(1,2,3,4,5)
	pvc = new int[5] {1, 2, 3, 4, 5};
	vector <int> vc9(pvc, pvc + 5);
	for (i1 = vc9.begin(); i1 != vc9.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl<<endl;

}
void DequeConstructor() {
	cout <<endl<< "-------------------------DEQUE CONSTRUCTOR-----------------------" << endl;
	deque <int> dc1;			//empty
	deque <string> dc2(5);		//fill
	deque <string>::iterator d1;

	deque <string> dc3(5, "abc");//fill->(abc,abc,abc,abc,abc)
	for (d1 = dc3.begin(); d1 != dc3.end(); ++d1) {
		cout << *d1 << " ";
	}
	cout << endl;

	deque <string> dc4(dc3.begin(),dc3.end());//constructor use iterators->(abc,abc,abc,abc,abc)
	for (d1 = dc4.begin(); d1 != dc4.end(); ++d1) {
		cout << *d1 << " ";
	}
	cout << endl;

	deque <string> dc5(dc4);				   //copy->(abc,abc,abc,abc,abc)
	for (d1 = dc5.begin(); d1 != dc5.end(); ++d1) {
		cout << *d1 << " ";
	}
	cout << endl;

	string dcArray[]{ "hola","hola","hola","hola","hola" };	//array->(hola,hola,hola,hola,hola)
	deque <string> dc6(dcArray,dcArray+sizeof(dcArray)/sizeof(string));
	for (d1 = dc6.begin(); d1 != dc6.end(); ++d1) {
		cout << *d1 << " ";
	}
	cout << endl;

	string *pdc;
	pdc = new string[4]{"hola","hola","hola","hola"};	//array->(hola,hola,hola,hola)
	deque <string> dc7(pdc,pdc+4);
	for (d1 = dc7.begin(); d1 != dc7.end(); ++d1) {
		cout << *d1 << " ";
	}
	cout << endl;
}
void QueueConstructor() {
	cout << endl<<"-------------------------QUEUE CONSTRUCTOR-----------------------" << endl;
	queue <int> qc1;				//empty
	qc1.push(1); qc1.push(2); qc1.push(3);
	queue <int> qc2(qc1);			//copy ->(1,2,3)

	list<int> l{ 1,2,3,4,5,6 };		
	queue<int, list<int>> qc3;		//copy-list ->empty
	queue<int, list<int>> qc4(l);	//copy-list ->(1,2,3,4,5,6)

	while (!qc2.empty())
	{
		cout << qc2.front()<<" ";
		qc2.pop();
	}
	cout << endl;
	while (!qc4.empty())
	{
		cout << qc4.front() << " ";
		qc4.pop();
	}
	cout << endl;
}
void PriorityQueueConstructor() {
	cout << endl<<"-------------------------PRIORITY_QUEUE CONSTRUCTOR-----------------------" << endl;
	int pqArray[]{10,20,15,2};
	priority_queue <int> pqc1;					 //empty
	priority_queue <int> pqc2(pqArray,pqArray+sizeof(pqArray)/sizeof(int));//array ->(20,15,10,2)
	priority_queue <int> pqc3(pqArray,pqArray+3);//array ->(20,15,10)
	priority_queue <int> pqc4(pqc3);			 //copy ->(20,15,10)
	while (!pqc2.empty())
	{
		cout << pqc2.top() << " ";
		pqc2.pop();
	}
	cout << endl;
	while (!pqc3.empty())
	{
		cout << pqc3.top() << " ";
		pqc3.pop();
	}
	cout << endl;
	while (!pqc4.empty())
	{
		cout << pqc4.top() << " ";
		pqc4.pop();
	}
	cout << endl;

	struct Persona {
		string nombre;
		int edat;
		bool operator()(const Persona &a, const Persona &b) {
			if (a.nombre > b.nombre) return true;
			return false;
		}
	};
	priority_queue<Persona, vector<Persona>, Persona> pqc5;
	Persona p1 = {"Benny",1};	Persona p2 = {"Catherine",2};	Persona p3 = { "Anna",3 };
	pqc5.push(p1);	pqc5.push(p2);	pqc5.push(p3);
	cout << "Cola de prioridad:";
	while (!pqc5.empty()) {
		cout << pqc5.top().nombre << " ";
		pqc5.pop();
	}
	cout << endl;
}
void StackConstructor() {
	cout <<endl<< "-------------------------STACK CONSTRUCTOR-----------------------" << endl;
	deque<int> d(3,5);
	vector<int> v(2,10);			
	stack <int> sc1;			    //empty
	stack <int> sc2 (d);			//copy deque
	stack <int, vector<int>> sc3;   //empty,vector
	stack <int, vector<int>> sc4(v);//copy vector

	struct person {
		string name; int age;
		person(string s, int a) {
			name = s; age = a;
		}
	};

	stack<person> sc5;				//constructor with struct
	person p1("Anna",20);	person p2("Benny", 10); person p3("Catherine", 30);
	sc5.push(p1); sc5.push(p2); sc5.push(p3);
	stack <person> sc6(sc5);
	while (!sc6.empty()) {
		cout << sc6.top().name << "-" << sc6.top().age << " ";
		sc6.pop();
	}
	cout << endl;
}
void ListConstructor() {
	cout << endl<<"-------------------------LIST CONSTRUCTOR-----------------------" << endl;
	list<int> lc1;				 //empty
	list<int> lc2(5);			 //fill->(0,0,0,0,0)
	list<int> lc3(4, 20);		 //fill->(20,20,20,20)
	list<int> lc4({1,2,3,4,5,6});//fill->(1,2,3,4,5,6)
	list<int> lc5(lc2);			 //copy->(0,0,0,0,0)
	list<int> lc6(lc3.begin(),lc3.end());//constructor use iterators->(20,20,20,20)
	int lcArray[]{1,3,5,7,9};
	list<int> lc7(lcArray,lcArray+sizeof(lcArray)/sizeof(int));//Array->(1,3,5,7,9)
	int *plc;
	plc = new int[5] {11,22,33,44,55};
	list<int> lc8(plc,plc+5);//Array->(11,22,33,44,55)
	
	list<int>::iterator i1;
	for (i1 = lc3.begin(); i1 != lc3.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = lc4.begin(); i1 != lc4.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = lc5.begin(); i1 != lc5.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = lc6.begin(); i1 != lc6.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = lc7.begin(); i1 != lc7.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = lc8.begin(); i1 != lc8.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
}
void ForwardConstructor() {
	cout << endl<<"-------------------------FORWARD_LIST CONSTRUCTOR-----------------------" << endl;
	forward_list <int> flc1;			   //empty
	forward_list <int> flc2({ 1,2,3,4,5 });//full->(1,2,3,4,5)
	forward_list <int> flc3(5);			   //full->(0,0,0,0,0)
	forward_list <int> flc4(5, 2);		   //full->(2,2,2,2,2)
	forward_list <int> flc5(flc2);		   //copy->(1,2,3,4,5)
	forward_list <int> flc6(flc2.begin(),flc2.end());//constructor use iterators->(1,2,3,4,5)
	int flArray[]{1,2,3,4,5};			  //array->(1,2,3,4,5)
	forward_list <int> flc7(flArray,flArray+5);
	int *pfl = new int[5] {1,2,3,4,5};
	forward_list <int> flc8(pfl, pfl + 3);//array->(1,2,3)

	forward_list<int>::iterator i1;
	for (i1 = flc2.begin(); i1 != flc2.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = flc3.begin(); i1 != flc3.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = flc4.begin(); i1 != flc4.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = flc5.begin(); i1 != flc5.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = flc6.begin(); i1 != flc6.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = flc7.begin(); i1 != flc7.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = flc8.begin(); i1 != flc8.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
}
void MapConstructor() {
	cout << endl<<"-------------------------MAP CONSTRUCTOR-----------------------" << endl;
	map<int, string> mc1;						//empty
	mc1[1] ="uno"; mc1[2] = "dos"; mc1[3] = "tres"; mc1[4] = "quatre";
	map<int, string> mc2(mc1.begin(),mc1.end());//constructor use iterators
	map<int, string> mc3(mc2);					//copy
	
	struct classcomp {
		bool operator() (const char& lhs, const char& rhs) const
		{
			return lhs<rhs;
		}
	};
	map<char, string, classcomp> mc4;
	mc4['A'] = "hi";	mc4['E'] = "hola";	mc4['D'] = "hello";	mc4['B'] = "hey";

	map<int, string> ::iterator i1; 
	map<char, string, classcomp> ::iterator i2; //constructor with class as Compare
	for (i1 = mc2.begin(); i1 != mc2.end(); ++i1) {
		cout << i1->first << ":" << i1->second << "   ";
	}
	cout << endl;
	for (i1 = mc3.begin(); i1 != mc3.end(); ++i1) {
		cout << i1->first << ":" << i1->second << "   ";
	}
	cout << endl;
	for (i2 = mc4.begin(); i2 != mc4.end(); ++i2) {
		cout << i2->first << ":" << i2->second << "   ";
	}
	cout << endl;
}
void SetConstructor() {
	cout << endl<< "-------------------------SET CONSTRUCTOR-----------------------" << endl;
	set <int> sc1;					//empty
	set <pair<string, int>> sc2;	//empty
	set <string> sc3({"a","s","d","f"});//fill
	set <string> sc4(sc3.begin(), sc3.end());//constructor use iterators
	set <string> sc5(sc4);			//copy

	int sArray[]{1,2,3,4,5,6};
	set <int> sc6 (sArray,sArray+6);//Array
	struct classcomp {
		bool operator() (const int& lhs, const int& rhs) const
		{
			return lhs<rhs;
		}
	};
	set <int,classcomp> sc7;
	sc7.insert(4); sc7.insert(5); sc7.insert(1); sc7.insert(6);
	
	set<string>::iterator  i1;
	for (i1 = sc3.begin(); i1 != sc3.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = sc4.begin(); i1 != sc4.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	for (i1 = sc5.begin(); i1 != sc5.end(); ++i1) {
		cout << *i1 << " ";
	}
	cout << endl;
	set<int>::iterator  i2;
	for (i2 = sc6.begin(); i2 != sc6.end(); ++i2) {
		cout << *i2 << " ";
	}
	cout << endl;
	set<int,classcomp>::iterator i3;
	for (i3 = sc7.begin(); i3 != sc7.end();++i3) {
		cout << *i3 << " ";
	}
	cout << endl;
}
//unordered-map
//unordered-set

int main() {
	Vector();
	Deque();
	List();
	ForwardList();
	Map();
	Set();
	VectorConstructor();
	DequeConstructor();
	QueueConstructor();
	PriorityQueueConstructor();
	StackConstructor();
	ListConstructor();
	ForwardConstructor();
	MapConstructor();
	SetConstructor();
	return 0;
}

