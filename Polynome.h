#ifndef POLYNOME_H
#define POLYNOME_H


class Polynome
{
    public:
        Polynome(int n);           //���캯��                                
        ~Polynome();               //�������� 
Polynome(const Polynome&s);        //�������캯�� 
void display();					   //������� 
int get_n_max();				   //������ߴ� 
double get_v(int i);               //���ض�Ӧ����ϵ�� 
void set_v();                      //�������������ϵ�� 
Polynome operator+(const Polynome  &b);//����+����� 
Polynome operator-(const Polynome  &b);//����-����� 
Polynome operator=(const Polynome  &a);//����=����� 
friend Polynome operator*(const Polynome  &a,const Polynome  &b);//����*����� 
double operationa(double x);									 //���к���ֵ���� 
static int count;					//��¼����ʽ����  
    private:
    int n_max;                      //��ߴ� 
	double *v;                      //��¼������ϵ���Ķ�̬���� 
};

#endif // POLYNOME_H
