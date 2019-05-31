#include<bits/stdc++.h>
using namespace std;
vector <int> prime; // Stores generated primes
char sieve[100005]; // 0 means prime
void primeSieve () {
    sieve[0] = sieve[1] = 1; // 0 and 1 are not prime
 
    prime.push_back(2); // Only Even Prime
    for ( int i = 4; i <= 100000; i += 2 ) sieve[i] = 1; // Remove multiples of 2
 
    int sqrtn = sqrt ( 100000 );
    for ( int i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( int j = i * i; j <= 100000; j += 2 * i ) sieve[j] = 1;
        }
    }
    for ( int i = 3; i <= 100000; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}
int arr[1000005];
 
// Returns number of primes between segment [a,b]
int segmentedSieve ( int a, int b ) {
    if ( a == 1 ) a++;
 
    int sqrtn = sqrt ( b );
 
    memset ( arr, 0, sizeof arr ); // Make all index of arr 0.
 
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        int p = prime[i];
        int j = p * p;
 
        // If j is smaller than a, then shift it inside of segment [a,b]
        if ( j < a ) j = ( ( a + p - 1 ) / p ) * p;
 
        for ( ; j <= b; j += p ) {
            arr[j-a] = 1; // mark them as not prime
        }
    }
 
    int ck=0;
	for(int i=a;i<=b;i++)
	{
		if((arr[i-a]==0) && (arr[i+2-a]==0))
			ck++;
		if(i+2>b)
			break;
	}
	return ck;
}
int main()
{
	long long p,q;
	cin >> p >> q;
	primeSieve();
	long long ans=segmentedSieve(p,q);
	cout << ans << endl;

}