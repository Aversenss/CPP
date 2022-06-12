int ia1;
void f1(int b1) {
    ia1 = ia1 + b1; 
}

class x {
    int ia1; public:
    x(){ia1 = 0;} void f1(int b1){
    ::f1(b1);  // global function (operator ::)
    } 
 };

int main(){
    x a2;
    a2.f1(2);
    return 0; 
}
