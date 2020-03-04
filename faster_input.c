#include <stdio.h>
void s(long long *x){
    register char c = getchar_unlocked();
    *x = 0;
    while((c<48)||(c>57))c = getchar_unlocked();
    while((c>47)&&(c<58)){
        *x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
        c = getchar_unlocked();
    }
}
int main(){
    return 0;
}