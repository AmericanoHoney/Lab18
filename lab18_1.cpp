#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
   double w = min(R1.x+R1.w,R2.x+R2.w)-max(R1.x,R2.x);
   double h = min(R1.y,R2.y)-max(R1.y-R1.h,R2.y-R2.h);
   if(w>0&&h>0) return w*h;
   else return 0;
}

int main()
{
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);	//16
}