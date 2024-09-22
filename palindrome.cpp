#include <iostream>
using namespace std;
int main() {
	int num;
    cout<<"Enter the number:";
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;	// Writing output to STDOUT
	int temp=num,n=0;
	while(num!=0){
		n=(n*10)+(num%10);
		num=num/10;
    }
	if(temp==n){
	    cout<<"The given number is a palindrome"<<endl;
    }
    else{ 
        cout<<"The given number is not a palindrome";
    }
    return 0;
}