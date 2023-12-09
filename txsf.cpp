/*
活动安排问题
问题描述：
有n个活动a1,a2,…,an……需要在同一天使用同一个教室，且教室同一时刻只能由一个活动使用。
每个活动ai都有一个开始时间si和结束时间fi 。
一个活动被选择后，另一个活动则需等待前一个活动结束后方可进入教室。
请问，如何安排这些活动才能使得尽量多的活动能不冲突的举行。
*/


#include <iostream>
#include <algorithm>
#define MAX  5
using namespace std;
/*
*描述活动的结构体
*/
struct Activity {
	//活动开始时间
	int startTime;
	//活动结束时间
	int endTime;
	//是否选择
	bool isSel=false;
	void desc() {
		cout<<this->startTime<<"-"<<this->endTime<<endl;
	}
};
//所有活动
Activity acts[MAX];
//初始化活动
void initActivities() {
	for(int i=0; i<MAX; i++) {
		cout<<"输入活动的开始时间-结束时间："<<endl;
		cin>>acts[i].startTime>>acts[i].endTime;
	}
}
/*
*比较函数
*/
bool cmp(const Activity &act0, const Activity &act1) {
	return  act0.endTime<act1.endTime;
}
/*
*活动安排
*/
int getMaxPlan() {
	//计数器
	int count=1;
	//当前选择的活动
	int currentSel=0;
	acts[currentSel].isSel=true;
	for(int i=1; i<MAX; i++) {
		if(acts[i].startTime>=acts[currentSel].endTime ) {
			count++;
			currentSel=i;
			acts[i].isSel=true;
		}
	}
	return count;
}
/*
*输出活动
*/
void showActivities() {
	for(int i=0; i<MAX; i++) {
		if(acts[i].isSel==true)acts[i].desc();
	}
}
/*
*测试
*/
int main() {
	initActivities();
	//排序，使用 STL 算法中的 sort
	sort(acts,acts+MAX,cmp);
	getMaxPlan();
	showActivities();
	return 0;
}

