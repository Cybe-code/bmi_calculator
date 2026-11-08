#include <iostream>
using namespace std;
int main()
{
    int weight;
    float height,BMI;
    cout<<"enter your weight in Kg:";
    cin>>weight;
    cout<<"enter your height in meter:";
    cin>>height;
    BMI= (float)(weight)/(height*height);
    cout<<"your BMI is:"<<BMI;
    
    if (BMI>=18.5 && BMI<=25)
       cout<<"\nyour BMI is normal";
    else
       cout<<"\nyour BMI is abnormal";

	return 0;
}
