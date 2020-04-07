#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std ;
namespace mp = boost::multiprecision;
#define LLI unsigned long long int
LLI min( LLI a , LLI b ){
    return ( a < b ) ? a : b ;
}
mp::cpp_int fact( int n ){
    mp::cpp_int ans = 1 ;
    for( int i = 1 ; i <= n ; i++ ){
        ans = ans * i ;
    }
    return ans ;
}
mp::cpp_int C( LLI a , LLI b ){
    mp::cpp_int ans = 1 ;
    LLI t = a ;
    LLI temp = min(t-b,b) ;
    for( LLI i = 0 ; i < temp  ; i++ ){
        ans *= a ;
        a = a - 1 ;
    }
    return ans / fact(temp) ;
}
LLI count( LLI arr[] , LLI N , LLI to_count ){
    LLI c = 0 ;
    for( LLI i = 0 ; i < N ; i++ ){
        if( arr[i] == to_count ){
            c++ ;
        }
    }
    return c ;
}
int main(){
    //cout << C(50,48 ) ;
    LLI T ;
    cin >> T ;
    while( T-- ){
        LLI N , K ;
        cin >> N >> K ;
        LLI arr[N] ;
        for( LLI i = 0 ; i < N ; i++ ) cin >> arr[i] ;
        sort( arr , arr + N ) ;
        LLI max = arr[K-1] ;
        LLI c1 = count( arr , N , max ) ;
        LLI c2 = count( arr , K , max ) ;
        cout << C( c1 , c2 ) << endl ;
    }
}