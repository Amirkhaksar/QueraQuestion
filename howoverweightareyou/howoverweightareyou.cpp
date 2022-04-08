#include<iostream>
using namespace std;

int main(){
  int w;
  float h;
    cin>>w>>h;
    float BMI = (float)w/(h*h);
    printf("%.2f\n",BMI);
    if(BMI<18.5)
      cout<<"Underweight";
    else if(BMI>=18.5 && BMI<25)
      cout<<"Normal";
    else if(BMI>=25 && BMI<30)
      cout<<"Overweight";
    else
      cout<<"Obese";
    return 0;
}