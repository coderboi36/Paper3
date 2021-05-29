void unions(int a1[] , int a2[], int n , int m)
{ int i,j,k;
 int u[200];
    for(i=0,j=0,k=0;i<n&&j<m;){
if(a1[i]<a2[j]){
u[k]=a1[i];
i++;
k++;
}
else if(a1[i]>a2[j]){
u[k]=a2[j];
j++;
k++;
}
else{
u[k]=a1[i];
i++;
j++;
k++;
}
}

if(i<n){
for(;i<n;++i){
u[k]=a1[i];
k++;
}
}
else if(j<m){
for(;j<m;++j){
u[k]=a2[j];
k++;
}
}

cout<<"\nUnion of two arrays is:\n";
for(i=0;i<k;++i){
cout<<u[i]<<" ";
}
}

int main()
    
{
int a1[100],a2[100],u[200],i,j,k,n,m;
cin>>n;
for(i=0;i<n;++i){
cin>>a1[i];
}
cin>>m;
for(i=0;i<m;++i){
cin>>a2[i];
}
    cout<<"\nThe intersection of the two arrays: \n";
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(a1[i]==a2[j])
      {
        cout<<a1[i]<<" ";
      }
    }
  }
cout<<endl;

    unions(a1,a2,n,m);
    
}
    
