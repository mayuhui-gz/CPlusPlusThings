#include<iostream>
#include"apple.cpp"
using namespace std;
Apple::Apple(int i)
{

}
int Apple::add(int num){
    take(num);
    return 0;
}
int Apple::add(int num) const {
    cout << "const ";
    take(num);
    return 0;
}
void Apple::take(int num) const
{
    cout<<"take func "<<num<<endl;
}
int Apple::getCount() const
{
    take(1);
    add(2); //error
    return apple_number;
}
int main(){
    Apple a(2);
    cout<<a.getCount()<<endl;
    a.add(10);
    const Apple b(3);
    b.add(100);
    return 0;
}
