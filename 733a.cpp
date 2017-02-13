//#include<iostream>
//#include<string>
//using namespace std;
//bool f(char c){
//	return c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='Y';
//}
//int main(){
//	string inString;
//	cin>>inString;
//	int ans = 1;
//	int lastP=0,p=0;
//	while(p<inString.size()){
//		if(f(inString[p])){
//			if(p-lastP>ans)ans=p-lastP;
//			lastP=p;
//		}
//		p++;
//	}
//	if(inString.size()-lastP>ans)ans=inString.size()-lastP+1;
//	cout<<ans<<endl;
//	return 0;
//}

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char s[105];
	cin >> s;
	int t = 1,max=1;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'
			|| s[i] == 'U' || s[i] == 'Y')
		{
			t = 1;
			continue;
		}		
		t++;
		if (t > max)  max = t;
	}
	printf("%d\n", max);
	return 0;
}
