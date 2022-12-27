 
 // Brute force 
 
 class Solution {
public:
    int fib(int n) {
        if(n==0)
        return 0;
        if(n==1 ||n==2)
        return 1;
        else
        return fib(n-1)+fib(n-2);
    }
};


//Using dp  tc- o(n)  , sc=o(n)
class Solution {
public:
    int fib(int n) {     
        int f[n+2];
        f[0]=0;
        f[1]=1;
        for(int i=2;i<=n;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
    }
};

// Space optimized


int fib(int n)
{
    if(n<2)
    return n;

int x=0;
int y=1;
for(int i=2;i<=n;i++)
{
    y=x+y;
    x=y-x;
}
return y;


}
