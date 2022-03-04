//group of numbers calculator :

#include<iostream>
using namespace std;
double Sum (double arr[],int size);
double Pro(double arr[],int size);
double AVG(double arr[],int size);
double Median(double arr[],int size);
int main()
{
    char op;
    int size;
    double *nums;
    cout<<"How many numbers U wanna calculate : ";cin>>size;
    nums=new double[size];
        for(int i=0;i<size;i++)
        {
            cout<<"Enter the number "<<i<<endl;cin>>nums[i];
        }
cout<<"\t\tWhich operation U wanna do : \t\t\n----------------------\npress (S)->Sum\npress (P)->Production\npress (A)->Average\npress (M)->Median\n";
cin>>op;
    switch (op)
    {
    case 'A':
        cout<<"Average = "<<AVG(nums,size)<<endl;
        break;
    case 'P':
        cout<<"Production = "<<Pro(nums,size)<<endl;
        break;
    case 'S':
        cout<<"Sum = "<<Sum(nums,size)<<endl;
        break;
    case 'M':
        cout<<"Median="<<Median(nums,size)<<endl;
        break;

    default:
    cout<<"Invalid chosen operation !"<<endl;
        break;
}
}

double Sum(double arr[],int size)
{
    double sum=0;
    for(int i ;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

double Pro(double arr[],int size)
{
    double pro=1;
    for(int i ;i<size;i++)
    {
        pro*=arr[i];
    }
    return pro;
}
double AVG(double arr[],int size)
{
    double sum=0;
    for(int i ;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum /size;
}

double Median(double arr[],int size)
{
    double med;
    //I will sort the number firstly
    int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(arr[j] < arr[imin])
            imin = j;
         //placing in correct position
         int temp; 
         temp=arr[j];
         arr[j]=arr[imin];
         arr[imin]=temp;
   }
   if(size%2==0)
   {
       return (arr[(size - 1) / 2] + arr[size / 2]) / 2.0;
   }
   return arr[size/2];

}
