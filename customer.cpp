#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class customer
{
private:
    int customer_no;
    char customer_name[20];
    float oty,totalprice,price,discount,netprice;

public:
    void initialvalue();
    void input()
    {
        cout<<"Enter customer name = ";
        gets(customer_name);
        cout<<"Enter customer number = ";
        scanf("%d",&customer_no);
        printf("Enter the no. of quantity = ");
        scanf("%d",&oty);
        printf("Enter price = " );
        scanf("%d",&price);
       
    }
   void cal_discount()
    {
        totalprice=oty*price;
        /*if(price>=5000)
        {
            discount=(25/100)*price;
            totalprice=totalprice-discount;
        }
        else if (price>=2500)       
        {
            discount=(10/100)*price;
            totalprice=totalprice-discount;
        } */  
    }
    void show()
    {
        cout<<endl;
        cout<<"customer number = "<<customer_no<<endl;
        cout<<"Customer name = "<<customer_name<<endl;
        cout<<"Number of quantity = "<<oty<<endl;
        cout<<"Discount = "<<discount<<endl;
        cout<<"Total price = "<<totalprice;
    }
    
};
void customer::initialvalue()
    {   
        customer_no;
        customer_name;
        price,totalprice,discount,netprice,oty=0;
    }
int main()
{
    customer c1;
    c1.initialvalue();
    c1.input();
    c1.cal_discount();
    c1.show();
    
}
