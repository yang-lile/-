#include<iostream>
using namespace std;
class Rect
{
	private:
		float a,b,c;
	public:
		Rect(float length,float width,float height);
		void af();
		void bf();
};
Rect::Rect(float length,float width,float height)
{
	a=length;
	b=width;
	c=height;
}
void Rect::af()
{
	float x,y,z,sum;
	x=a*b*2.0;
	y=a*c*2.0;
	z=b*c*2.0;
	sum=x+y+z;
	cout<<"表面积="<<sum<<"  ";
}
void Rect::bf()
{
	double sum;
	sum=a*b*c;
	cout<<"体积="<<sum << endl;
}
int main()
{
	cout<<"输入长方体的长、宽、高：";
	float a,b,c;
	cin>>a>>b>>c;
	cout<<"length="<<a<<"  "<<"width="<<b<<"  "<<"height="<<c<<endl;
	Rect Cub(a,b,c);
	Cub.af();
	Cub.bf();}
