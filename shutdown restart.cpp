# include<stdio.h>
# include<stdlib.h>
# include<dos.h>
# include<iostream>
using namespace std;
int main(){
	int x;
    cout<<"1= shut down all programs running now"<<endl;
    cout<<"2= Restart the computer"<<endl;
    cout<<"3= Shutdown the computer"<<endl;
		cin>>x;
		if(x==1) system("shutdown -f");
		if(x==2) system("shutdown -r");
		if(x==3) system("shutdown -s");
	return 0;
}
