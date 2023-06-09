#include "Subject.cpp"

using namespace std;

class Student
{
private:
	string id;
	string name;
	vector<Subject> s;
public:
	Student(){}
	Student(string id, string name, vector<Subject> s){
		this->id = id;
		this->name = name;
		this->s = s;
	}
	string getId(){
		return id;
	}
	vector<Subject> getS(){
		return s;
	}
	long getSumMoney(){
		long sum = 0;
		for(int i = 0; i < s.size(); i++){
			sum += s[i].getNumberCredit() * s[i].getMoney();
		}
		return sum;
	}
	double avgPoint(){
		double point = 0;
		int sum = 0;
		for(int i = 0; i < s.size(); i++){
			point += s[i].getNumberCredit() * s[i].getPoint();
			sum += s[i].getNumberCredit();
		}
		return point/ sum;
	}
	void display(){
		cout << "Id: " << id << endl;
		cout << "Name Student: " << name  <<endl;
		cout << "List Subject" << endl;
		for(int i = 0; i < s.size(); i++){
			s[i].display();
		}		
		cout << "Sum Money Have To Pay: " << getSumMoney() << endl;
		cout << "Average Point: " << avgPoint() << endl;
	}
};