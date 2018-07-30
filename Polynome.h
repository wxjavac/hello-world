#ifndef POLYNOME_H
#define POLYNOME_H


class Polynome
{
    public:
        Polynome(int n);           //构造函数                                
        ~Polynome();               //析构函数 
Polynome(const Polynome&s);        //拷贝构造函数 
void display();					   //输出函数 
int get_n_max();				   //返回最高次 
double get_v(int i);               //返回对应次幂系数 
void set_v();                      //依次输入各次项系数 
Polynome operator+(const Polynome  &b);//重载+运算符 
Polynome operator-(const Polynome  &b);//重载-运算符 
Polynome operator=(const Polynome  &a);//重载=运算符 
friend Polynome operator*(const Polynome  &a,const Polynome  &b);//重载*运算符 
double operationa(double x);									 //进行函数值运算 
static int count;					//记录多项式个数  
    private:
    int n_max;                      //最高次 
	double *v;                      //记录各此项系数的动态数组 
};

#endif // POLYNOME_H
