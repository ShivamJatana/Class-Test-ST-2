//Name - Shivam Jatana
//Roll no - 2010991396
//Set-01
//Q2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count;
    // n will contain the no. of elements.
    cout<<"Enter Length of Array:";
    cin>>n;
    // set[n] will contain all the enterd elements of the array making it the length of array.
    int set[n];
    cout<<"\nEnter the elements of the array:";
    for(i=0; i<n; i++)
    {
       cin>>set[i];
    }
    
   
    int flag[n]={0};          // Here i have initialized falg with 0.
    cout<<"\nRepeated Numbers with their frequency:";
    for(i=0; i<n; i++)
    {
      count=0;
      if(flag[i]!=1)       // set [i] is not considered for counting the frequency of repeated number.
      {
         for(j=0; j<n; j++)
         {
            if(set[i]==set[j])
            {
              count++;        
              flag[j]=1;     // set flag[j] to 1, to avoid more than 1 entry of repeated number in the output
            }
         }
         if(count>1)      // if no. of occurrences of element set[i] > 1 (or if the element set[i] is repeated number)
         {
           cout<<"\n"<<set[i]<<" -> "<<count;
         }
      }
    }
return 0;
}