#include <IOSTREAM.H>
class CALC{
private:int num;
public:int getNum(){
		   return num;
	   }
	   void setNum(int lNum){
			num=lNum;
	   }
};
main(){
	int a;
	CALC *calc=new CALC();
	cin>>a;
	calc->setNum(a);
	cout<<calc->getNum()<<endl;
}
