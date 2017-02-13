#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<10){
		cout<<n<<endl;
	}
	else if(n<190){
		int num=(n+10)/2;
		if(n%2){
			cout<<num%10<<endl;
		}
		else{
			cout<<num/10<<endl;
		}
	}
	else{
		int num=(n+110)/3;
		if(n%3==0){
			cout<<num%10<<endl;
		}
		else if(n%3==1){
			cout<<(num/100)%100<<endl;
		}
		else{
			cout<<(num/10)%10<<endl;
		}
	}
	return 0;
} 
