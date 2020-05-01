#include<iostream.h>
#include<conio.h>
int x1,x2,v1,v2;
int kangaroo(int x1, int v1, int x2, int v2){
	 while(1){
        if(x2 > x1 && v2 > v1 || x1 > x2 && v1 > v2 || v1 == v2){
            cout<< "NO";
            break;
        }
        if((x1 += v1) == (x2 +=v2)){
            cout<< "YES";
            break;
        }
    }
    return 0;
}
int main(){
	cin>>x1>>v1>>x2>>v2;
	kangaroo(x1,v1,x2,v2);
}