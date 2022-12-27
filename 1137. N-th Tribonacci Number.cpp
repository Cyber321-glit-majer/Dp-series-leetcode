class Solution {
public:
    int tribonacci(int n) {
    
if(n==0)
return n;
if(n==1 || n==2)
return 1;
//return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
  int f[n+2];
  f[0]=0;
  f[1]=1;
  f[2]=1;
  for(int i=3;i<=n;i++)
  {
      f[i]=f[i-1]+f[i-2]+f[i-3];
  }
  return f[n];

   


    }
};


// space optomization 

class Solution {
public:
    int tribonacci(int n) {
    
if(n==0)
return n;
if(n==1 || n==2)
return 1;
//return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
  
  int x=0;
  int y=1;
  int z=1;
  int a=0;
  for(int i=3;i<=n;i++)
  {
      //f[i]=f[i-1]+f[i-2]+f[i-3];
      
     a=x+y+z;
x=y;
y=z;
z=a;

      
  }
  return a;

 

    }
};
