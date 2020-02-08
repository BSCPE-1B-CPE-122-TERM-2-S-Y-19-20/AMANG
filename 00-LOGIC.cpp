#include <iostream>

using namespace std;

class logic{
	private:
		char q,p;
		
	public:
		void conjuction();
		void disjunction();
		void negation();
		void conditional();
		void biconditional();
};

int main(int argc, char** argv) {
	
	logic obj;
	int input;
		
	cout << "Choose a number: \n1. Conjuction\n2. Disjunction\n3. Negation\n4. Conditional\n5. Biconditional\n";
	cout << "\nInput: ";
	cin >> input;
	
	if(input > 5){
		cout << "ERROR!";
	} else switch(input){
		case 1: obj.conjuction(); break;
		case 2: obj.disjunction(); break;
		case 3: obj.negation(); break;
		case 4: obj.conditional(); break;
		case 5: obj.biconditional(); break;
	}
	
	return 0;
}

void logic::conjuction(){
	
		cout << "\n	CONJUCTION";
		cout << "\n\nPlease Enter 'T' if TRUE 'F' if FALSE";
		cout << "\nEnter the value of p: ";
		cin >> p;
		cout << "Enter the value of q: ";
		cin >> q;
		
		if( q == 'T' && p =='T' )
		 {
			cout<<"\np ^ q = TRUE";
		}
		
		else cout<< ("\np ^ q = FAlSE");
}

void logic::disjunction(){
	
	cout << "\n	DISJUCTION";
	cout << "\n\nPlease Enter 'T' if TRUE 'F' if FALSE";
		cout<< "\nEnter the value of p: ";
		cin>>p;
		cout<<"Enter the value of q: ";
		cin>>q;
		
		if( q == 'F' && p =='F' )
		 {
			cout<<"\np or q = FALSE";
		}
		
		else cout<< ("\np or q = TRUE");
}

void logic::negation(){
	
	cout << "\n	NEGATION";
	cout << "\n\nPlease Enter 'T' if TRUE 'F' if FALSE";
		cout<<"\nEnter the value of q: ";
		cin>>q;
		
		if( q == 'T')
		 {
			cout<<"\nq = FALSE";
		}
		
		else cout<< ("\nq = TRUE");
}

void logic::conditional(){
	
	cout << "\n	CONDITIONAL";
	cout << "\n\nPlease Enter 'T' if TRUE 'F' if FALSE";
		cout<< "\nEnter the value of p: ";
		cin>>p;
		cout<<"Enter the value of q: ";
		cin>>q;
		
		if( q == 'T' && p =='F' )
		 {
			cout<<"\np -> q = FALSE";
		}
		
		else cout<< ("\np -> q = TRUE");
}

void logic::biconditional(){
	
	cout << "\n	BICONDITIONAL";
	cout << "\n\nPlease Enter 'T' if TRUE 'F' if FALSE";
		cout<< "\nEnter the value of p: ";
		cin>>p;
		cout<<"Enter the value of q: ";
		cin>>q;
		
		if(( q == 'T' && p =='T' ) || ( q == 'F' && p =='F' ))
		 {
			cout<<"\np <-> q = TRUE";
		}
		
		else cout<< ("\np <-> q = FALSE");
}
