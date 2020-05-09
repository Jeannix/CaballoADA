#include <iostream>
using namespace std;

#define N 5

int t[N][N];

static int h[8]={2,1,-1,-2,-2,-1,1,2};
static int v[8]={1,2,2,1,-1,-2,-2,-1};

//static int s[8]={1,2,3,4,5,6,7,8};

bool comprobaxd(int a, int b){
    //
}

void Tenta(int i,int x, int y, bool q){
    int m=0;
    int xn,yn;
    bool q1;
    do{
        q1=false;
        xn=x+h[m];
        yn=y+v[m];
        m=m+1;
        if(comprobaxd(xn) && comprobaxd(yn)){
            if(t[xn][yn]==0){
                t[xn][yn]=i;
                if(i<(N*N)){
                    Tenta(i+1,xn,yn,q1);
                    if(!q1){
                        t[xn][yn]=0;    
                    }
                }
                else{
                    q1=true;
                }
            }
        }
    } while(q1 || (m==8));
    q=q1;
}

void webadadelcaballo(int n){
    int i,j;
    //int t[n][n];
    bool q;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            t[i][j]=0;
        }
    }
    t[0][0]=1;    //Posición Inicial
    Tenta(2,0,0,q);
    //Tenta(1,0,0,q);
    if(q){
        cout<<"Hay solucion xd"<<endl;
    }
    else{
        cout<<"No hay solución"<<endl;
    }
}

void print(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
}

int main(int argc, char *argv[]) {
    
    webadadelcaballo(5);
    print();
    return 0;
}