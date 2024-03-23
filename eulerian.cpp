#include <fstream>
#include <list>
#include <stack>
#include <queue>

using namespace std;

#define TR( C, it ) \
    for( typeof(C.begin()) it = C.begin(); it != C.end(); it++ )
#define pb push_back

#define NX 100010

list< int > G[ NX ], L;
stack< int > S;
queue< int > Q;

int N, M, deg[ NX ], col[ NX ];

void cit() {
    int u, v;

    scanf( "%d%d", &N, &M );

    while( M-- ) {
        scanf( "%d%d", &u, &v );
        G[u].pb( v ); deg[u]++;
        G[v].pb( u ); deg[v]++;
    }
}

void BFS( int v ) {
    Q.push( v ); col[v] = 1;
    while( !Q.empty() ) {
        v = Q.front(); Q.pop();
        TR( G[v], w )
            if( col[ *w ] == 0 )
                Q.push( *w ), col[ *w ] = 1;
    }
}

int este_conex() {
    BFS( 1 );
    for( int v = 2; v <= N; v++ )
        if( col[ v ] == 0 )
            return 0;
    return 1;
}

int eulerian() {
    if( este_conex() == 0 )
        return 0;

    for( int v = 1; v <= N; v++ )
        if( deg[ v ] % 2 == 1 )
            return 0;
    return 1;
}

void sterge( int v, int w ) {
    deg[v]--, deg[w]--;
    G[v].pop_front();
    TR( G[w], it )
        if( *it == v ) {
            G[w].erase( it );
            break;
        }
}

void euler( int v ) {
    while( true ) {
        if( G[v].empty() )
            break;
        int w = G[v].front();
        S.push( v );
        sterge( v, w );
        v = w;
    }
}

int rez() {
    int v = eulerian();
    if( v == 0 )
        return -1;
    do {
        euler( v );
        v = S.top(); S.pop();
        L.pb( v );
    } while( !S.empty() );

    return 1;
}

void scr( int x ) {
    if( x == -1 )
        printf( "-1\n" );
    else {
        TR( L, v )
            printf( "%d ", *v );
        printf( "\n" );
    }
}

int main() {
    freopen( "ciclueuler.in", "r", stdin );
    freopen( "ciclueuler.out", "w", stdout );

    cit();
    scr( rez() );

    return 0;
}
