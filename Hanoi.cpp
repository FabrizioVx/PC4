								/*      TORRES DE HANOI       */
#include<iostream>
using namespace std;



void Hanoi(char incio,char intermedio,char final,int n){
	if(n == 1){
		cout<<n<<inicio<<final<<endl;
	}
	else{
		Hanoi(inicio,final,intermedio,n-1);
		cout<<n<<inicio<<final<<endl;
		Hanoi(intermedio,incio,final,n-1);
	}
}

int main(){
	
	Hanoi('X','Y','Z',2);
	
	return 0;
}
