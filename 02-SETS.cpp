#include <iostream>

using namespace std;

class set{
	private:
		int i, j ,temp=0, setA[100], setB[100], size1, size2;
		int u[100],a[100],temp1[100];
		int x,y,z,count=0;
	
	public:
		void input();
		void Union();
		void Intersection();
		void Complement();
	
};

int main(int argc, char** argv) {
	
	set obj;
	int choice;
	
	cout << "1. Union\n2. Intersection\n3. Complement\n\nEnter Choice : ";
	cin >> choice;
	if(choice>3){
		cout << "ERROR!";
	}else switch(choice){
		case 1: obj.input(); obj.Union(); break;
		case 2: obj.input(); obj.Intersection(); break;
		case 3: obj.Complement(); break;
	}
	
	return 0;
}

void set::input(){
	
	cout << "Enter size of Set A : ";
	cin >> size1;
	cout << "\nEnter Elements : " ;
	for(i=0;i<size1;i++)
	{
		cin >> setA[i];
	}
	cout << "\nEnter size of Set B : ";
	cin >> size2;
	cout << "\nEnter elements: ";
	for(i=0;i<size2;i++)
	{
		cin >> setB[i];
	}
	
	
	for (i=0;i<size1;i++) 
    {
		for (j=i+1;j<size1;j++)
        {
        	if(setA[i]==setA[j]){
        		setA[i] = setA[j];
			}else if (setA[i]>setA[j])
			{
				temp=setA[i];
				setA[i]=setA[j];
				setA[j]=temp;
			}
		}
	}
	temp=0;
	
	for (i=0;i<size2;i++) 
    {
		for (j=i+1;j<size2;j++)
        {
			if (setB[i]>setB[j])
			{
				temp=setB[i];
				setB[i]=setB[j];
				setB[j]=temp;
			}
		}
	}	
	cout << "\nSet A = ";
	
		for(i=0;i<size1;i++)
			{
				cout << setA[i] << " ";
			}
		
	cout << "\nSet B = ";
	
		for(i=0;i<size2;i++)
			{
				cout << setB[i] << " ";
			}
	
}

void set::Union(){
	
	int i=0, j=0;
	cout << "\nSet A Union Set B : ";
	while (i < size1 && j < size2)
	{
		if (setA[i] < setB[j])
			cout << setA[i++] << " ";
		else if (setB[j] < setA[i])
			cout << setB[j++] << " ";
    	else
		{
			cout << setB[j++] << " ";
			i++;
		}
	}
	while(i < size1)
		cout << setA[i++] << " ";
	while(j < size2)
    	cout << setB[j++] << " ";
    	
}

void set::Intersection(){
	
	int i=0, j=0;
	cout << "\nSet A Intersection Set B : ";
	while (i < size1 && j < size2)
	{
		if(setA[i] < setB[j])i++;
		else if(setA[j] < setB[i])j++;
		else
		{
			cout << setB[j] << " ";
			i++;
			j++;
		}
	}
}

void set::Complement(){
	cout<<"\nNumber of Elements in Universal Set: ";
	cin>>x;
	cout<<"\nEnter Elements: ";
	for(int i=0;i<x;i++){
		cin>>u[i];
	}
	cout<<"\nNumber of Elements in Set A: ";
	cin>>y;
	cout<<"\nEnter Elements: ";
	for(int i=0;i<y;i++){
		cin>>a[i];	
	}	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(u[i]==a[j]){
				z=0;
				break;
			}
			else z=1;
		}
		if(z==1){
			temp1[count]=u[i];
			count++;
		}
	}	
	cout<<"\nThe Complement of Set A:  ";
	for(int i=0;i<count;i++){
		cout<<temp1[i]<<" ";
	}	
}
