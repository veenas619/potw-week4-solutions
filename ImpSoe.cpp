//sieve of eratosthene method for finding prime numbers less than n
class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n<=2)
        {
            return 0;
        }
        else 
        {
        int primes[n+1];  //take index till n
        for(int i=2;i<=n;i++)
        {
            primes[i]=1;
        }
        for(int i=2;i*i<=n;i++)
        {
            if(primes[i]==1)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    primes[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(primes[i]==1)
            {
                count ++;
            }
        }
        return count;
        }
    }

};
//time complexity of this algo: sieve of eratosthenes is O(nlog(log(n))
//My previous code involved the naive approach of checking each number's status till n using a for loop, it gave me a complexity of O(n*2) :(!
//Another approach which used the trial method to the status of each number before n-'modified isPrime() fnction gave me a complexity of O(n(rt(n)).
