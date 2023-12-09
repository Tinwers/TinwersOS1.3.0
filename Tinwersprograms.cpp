#include<bits/stdc++.h>
using namespace std;
int main(){
	system("title Tinwers OS [version:0.3.0]");
	system("color a");
	int Users[10]={},cs=0,drsj[10];
	char hd;
	string mlh;
	cout<<"Tinwers OS [version:0.3.0]"<<endl;
	cout<<"(c) SUNNY BLANK。保留所有权利。"<<endl<<endl;
	cout<<"是否导入数据？(如果您第一次使用请输入F) [T/F] ";
	cin>>hd;
	if(hd=='T'||hd=='t'){
		for(int i=0;i<5;i++){
			cout<<"请输入用户名"<<i+1<<" : "; 
			cin>>drsj[i];
			Users[i]=drsj[i];
		}
	}
	for(int i=0;i<100;i++){
		cout<<"C:/Users/111>";
		getline(cin,mlh);
		if(mlh=="All Users"){
			cout<<"所有用户名 :"<<endl; 
			cout<<"     system"<<endl;
			for(int i=0;i<5;i++){
				if(Users[i]==0){
					cout<<"";
				}
				else{
					cout<<"     "<<Users[i]<<endl;
				}
			}
		}
		if(mlh=="Enroll Users"){
			if(cs<5){
				cout<<"请输入要注册的用户名 : ";
				cin>>Users[cs];
				cout<<endl;
				cs++;
				
				
			}
			else{
				cout<<"对不起，只能注册5个用户名"<<endl; 
			}
		}
		if(mlh=="cls"){
			system("cls");
		}
		if(mlh=="help"){
			cout<<"暂时只支持这些功能"<<endl;
			cout<<"     All Users  列出所有用户名"<<endl;
			cout<<"     Enroll Users  添加用户名"<<endl;
			cout<<"     cls  清屏"<<endl;
		}
		else{
			cout<<"如果您不会使用Tinwers OS命令行，请输入help。"<<endl; 
		}
	}
	system("pause");
	return 0;
}
