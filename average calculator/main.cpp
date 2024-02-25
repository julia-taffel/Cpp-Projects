#include <iostream>

using namespace std;

int main()
{
    int how_many;
    cout<<"Enter how many grades: ";
    cin>>how_many;
    float grades[how_many];
    float sum=0, average;
    for(int i=0; i<how_many; i++)
    {
        cout<<endl<<"Enter "<<i+1<<" grade: ";
        cin>>grades[i];
        sum=sum+grades[i];
    };
    average=sum/how_many;
    cout<<endl<<"The average equals to "<<average;
    return 0;
}
