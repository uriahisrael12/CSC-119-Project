#include <iostream> 
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

//pointers
string topic1 = "Murder/Hatred";
string* one = &topic1;
string topic2 = "Thievery";
string* two = &topic2;
string topic3 = "Divorce";
string* three = &topic3;
string topic4 = "Children";
string* four = &topic4;
string topic5 = "Marriage";
string* five = &topic5;
string topic6 = "Drug-Use";
string* six = &topic6;
string topic7 = "Household";
string* seven = &topic7;

//Classes
class Issue {
protected:
	string script;
	string keyword;
	//string link;
public:
	string getScript1();
	string getScript2();
	string getScript3();
	string getScript4();
	string getScript5();
	string getScript6();
	string getScript7();
	void setTopic();
	void MainMenu();
};

class Problem: public Issue {
public:
	string getLink1();
	string getLink2();
	string getLink3();
	string getLink4();
	string getLink5();
	string getLink6();
	string getLink7();
};

// Method definitions outside of the class
string Issue::getScript1() {
	ifstream myScript1("MyScript1.txt");
	while (getline (myScript1, script)) {
		cout << "Topic: " << *one << "\n" << "\n";
	}
myScript1.close();
return script;
}

string Issue::getScript2() {
	ifstream myScript2("MyScript2.txt");
	while (getline (myScript2, script)) {
		cout << "Topic: " << *two << "\n" << "\n";
	}
	myScript2.close();
	return script;
}

string Issue::getScript3() {
	ifstream myScript3("MyScript3.txt");
	while (getline (myScript3, script)) {
		cout << "Topic: " << *three << "\n" << "\n";
	}
	myScript3.close();
	return script;
}
string Issue::getScript4() {
	ifstream myScript4("MyScript4.txt");
	while (getline (myScript4, script)) {
		cout << "Topic: " << *four << "\n" << "\n";
	}
	myScript4.close();
	return script;
}
string Issue::getScript5() {
	ifstream myScript5("MyScript5.txt");
	while (getline (myScript5, script)) {
		cout << "Topic: " << *five << "\n" << "\n";
	}
	myScript5.close();
	return script;
}
string Issue::getScript6() {
	ifstream myScript6("MyScript6.txt");
	while (getline (myScript6, script)) {
		cout << "Topic: " << *six << "\n" << "\n";
	}
	myScript6.close();
	return script;
}
string Issue::getScript7() {
	ifstream myScript7("MyScript7.txt");
	while (getline (myScript7, script)) {
		cout << "Topic: " << *seven << "\n" << "\n";
	}
	myScript7.close();
	return script;
	
}
/*string Problem::getLink2() {
	ifstream myLink2("myLink2.txt");
	while (getline (myLink2, link)) {
		cout << "Topic: "<< *two << "\n";
	}
	myLink2.close();
	return link;
}
string Problem::getLink3() {
	ifstream myLink3("myLink3.txt");
	while (getline (myLink3, link)) {
		cout << "Topic: "<< *three << "\n";
	}
	myLink3.close();
	return link;
}
string Problem::getLink4() {
	ifstream myLink4("myLink4.txt");
	while(getline (myLink4, link)) {
		cout << "Topic: "<< *four << "\n";
	}
	return link;
}
string Problem::getLink5() {
	ifstream myLink5("myLink5.txt");
	while (getline (myLink5, link)) {
		cout << "Topic: "<< *five << "\n";
	}
	return link;
}
string Problem::getLink6() {
	ifstream myLink6("myLink6.txt");
	while (getline (myLink6, link)) {
		cout << "Topic: "<< *six << "\n";
	}
	return link;
}
string Problem::getLink7() {
	ifstream myLink7("myLink7.txt");
	while (getline (myLink7, link)) {
		cout << "Topic: "<< *two << "\n";
	}
	return link;
}*/



void MainMenu(){
	cout << "Welcome! Please enter one of the seven provided topics: " << "\n";
	cout << "	" << *one << "\n"; 
	cout << "	" << *two << "\n";
	cout << "	" << *three << "\n";
	cout << "	" << *four << "\n";
	cout << "	" << *five << "\n";
	cout << "	" << *six << "\n";
	cout << "	" << *seven << "\n" << "\n";
}



int main() {
	string input;
	string Y = "y";
	string N = "n";
		//Arrays
	string topics[7];
		topics[0] = *one;
		topics[1] = *two;
		topics[2] = *three;
		topics[3] = *four;
		topics[4] = *five;
		topics[5] = *six;
		topics[6] = *seven;
	//Struct
	struct {
		string category;
	}myTopics1, myTopics2, myTopics3, myTopics4, myTopics5, myTopics6, myTopics7;
	
	//Putting data in each structure
	myTopics1.category = "Moral";
	myTopics2.category = "Moral/Civil";
	myTopics3.category = "Moral";
	myTopics4.category = "Moral";
	myTopics5.category = "Moral/Civil";
	myTopics6.category = "Moral/Civil";
	myTopics7.category = "Civil";
	
	
		// Objects
	Problem myProblem1;
	Problem myProblem2;
	Problem myProblem3;
	Problem myProblem4;
	Problem myProblem5;
	Problem myProblem6;
	Problem myProblem7;

	//User input
	//Main Menu
	for (int i = 0; i < 14; i++){
		MainMenu();
		cin >> input;
		cout << "\n";
		
		if (input == topics[0]){
			cout << myProblem1.getScript1() << "\n" << "\n";
			cout << "Would you like to continue? (y/n)" << "\n";
			cin >> input;
			if((input != N) && (input != Y)){
				cout << "\n" << "ERROR!";
				break;
			}
			if (input == Y){
				cout << "\n";
				//MainMenu();
				//cin >> input;
			} if (input == N) {
				cout << "\n";
				cout << "Stay faithful, Stay humble, and most importantly, Stay in the Spirit!";
				break;
			}
			
		}
		
		if (input == topics[1]){
			cout << myProblem2.getScript2() << "\n" << "\n";
			cout << "Would you like to continue? (y/n)" << "\n";
			cin >> input;
			if (input == Y){
				cout << "\n";
				//MainMenu();
				//cin >> input;
			} if (input == N) {
				cout << "\n";
				cout << "Stay faithful, Stay humble, and most importantly, Stay in the Spirit!";
				break;
			}
			
		}
		
		if (input == topics[2]){
			cout << myProblem3.getScript3() << "\n" << "\n";
			cout << "Would you like to continue? (y/n)" << "\n";
			cin >> input;
			if (input == Y){
				cout << "\n";
				//MainMenu();
				//cin >> input;
			} if (input == N) {
				cout << "\n";
				cout << "Stay faithful, Stay humble, and most importantly, Stay in the Spirit!";
				break;
			}
			
		}
		
		if (input == topics[3]){
			cout << myProblem4.getScript4() << "\n" << "\n";
			cout << "Would you like to continue? (y/n)" << "\n";
			cin >> input;
			if (input == Y){
				cout << "\n";
				//MainMenu();
				//cin >> input;
			} if (input == N) {
				cout << "\n";
				cout << "Stay faithful, Stay humble, and most importantly, Stay in the Spirit!";
				break;
			}
			
		}
		
		if (input == topics[4]){
			cout << myProblem5.getScript5() << "\n" << "\n";
			cout << "Would you like to continue? (y/n)" << "\n";
			cin >> input;
			if (input == Y){
				cout << "\n";
				//MainMenu();
				//cin >> input;
			} if (input == N) {
				cout << "\n";
				cout << "Stay faithful, Stay humble, and most importantly, Stay in the Spirit!";
				break;
			}
			
		}
		
		if (input == topics[5]){
			cout << myProblem6.getScript6() << "\n" << "\n";
			cout << "Would you like to continue? (y/n)" << "\n";
			cin >> input;
			if (input == Y){
				cout << "\n";
				//MainMenu();
				//cin >> input;
			} if (input == N) {
				cout << "\n";
				cout << "Stay faithful, Stay humble, and most importantly, Stay in the Spirit!";
				break;
			}
			
		}
		
		if (input == topics[6]){
			cout << myProblem7.getScript7() << "\n" << "\n";
			cout << "Would you like to continue? (y/n)" << "\n";
			cin >> input;
			if (input == Y){
				cout << "\n";
				//MainMenu();
				//cin >> input;
			} if (input == N) {
				cout << "\n";
				cout << "Stay faithful, Stay humble, and most importantly, Stay in the Spirit!";
				break;
			}
			
		}
	}
}
