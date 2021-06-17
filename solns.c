/* Enter your solutions in this file */
int max(int arr[],int count)
{
  int maxx=0;
  for(int i=0;i<count;i++)
  {
    if(arr[i] > maxx)
    {
      maxx = arr[i];
    }
  }
  return maxx;
}
int min(int arr[],int count)
{
  int minn=arr[0];
  for(int i=1;i<count;i++)
  {
    if(arr[i] < minn)
    {
      minn = arr[i];
    }
  }
  return minn;
}

float average(int arr[],int count)
{
  int sum=0;
  float avg=0.0;
  for(int i=0;i<count;i++)
  {
     sum += arr[i];
  }
  avg = sum/count;
  return avg;
}
int factors(int num,int arr[])
{
  int c=0;
  int k=0;
  for(int i=2;num>1;i++)
  {
    while(num%i==0)
    {
      c +=1;
      arr[k]=i;
      num = num/i;
      k++;
    }
  }
  return c;
}
int mode(int arr[],int n)
{
  int count=0,maxCount=0,mode=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      
      if(arr[j] == arr[i])
      {
        count +=1;
      }
    }
      if(count>maxCount)
      {
      maxCount = count;
      mode= arr[i];
      }
  }
  return mode; 
}
