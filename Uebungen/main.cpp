
#include <iostream>




using namespace std;




int x_hoch_y(int x, int y){

    if(y == 0 )
        return 1;

    int tmp = x;
    for(int i = 1; i < y; i++){
        x = x *tmp;
    }

    return x;
}

void leseZeichen(){
    int len = 5; // length and increment value
    char tmp[len];
    int count = 0;
    char c;
    bool first = true;
    int zahl = 0;
    // - = 045
    // 0-9 = 048 bis 057

    // Array auf 0 setzen
    for(int i = 0; i < len; i++)
        tmp[i] = 0;


    cout << "Schreiben Sie eine beliebige Zahl und drücken Sie Enter: " << endl;

    // Einlesen der Zeichen
    do{
        cin >> c;
        if((c < 58 && c > 47) || (c == 45 && first)){
            first = false;
            tmp[count++] = c;
        }

    }while( (c < 58 && c > 47) || c == 45);

    bool negative = false;
    if(tmp[0] == 45){
        negative = true;
    }

    int iTmp = count;

     for(int i = 0; i < count ; ++i){

//        if(negative){
 //           zahl = zahl + tmp[i+1] * x_hoch_y(10, --iTmp);
 //       }else{

            cout << "zahl: " << zahl << endl;
            cout << "Array[i]: " << tmp[i] << endl;
            cout << "iTmp: " << --iTmp << endl;
            cout << "10 Hoch 0: " << x_hoch_y(10, 0) << endl;
            int test = (tmp[i]-'0') * x_hoch_y(10, 0);
//            cout << "iTmp " << iTmp << endl;
            cout <<"test "<<  test << endl;
            zahl = zahl + test;
            cout << zahl << endl;
            zahl = zahl + (tmp[i] * x_hoch_y(10, --iTmp));
   //     }
    }
/*
    if(negative){
        zahl = (~zahl)+1;//Vorzeichen setzen
    }
*/
    cout << "Deine Zahl: "  << zahl << endl;
}


bool plusOperator(bool aState, bool aState2){
    bool tmp1 = aState + aState2;
    bool tmp2 = aState|| aState2;
    if(tmp1 == tmp2){
        cout << "+ verhaelt sich gleich wie ||" << endl;
        return true;
    }
    else{
       cout << "+ verhaelt sich nicht wie ||" << endl;
       return false;
    }
}

bool malOperator(bool aState, bool aState2){
    bool tmp1 = aState * aState2;
    bool tmp2 = aState&& aState2;
    if(tmp1 == tmp2){
        cout << "* verhaelt sich gleich wie &&" << endl;
        return true;
    }
    else{
       cout << "* verhaelt sich nicht wie &&" << endl;
       return false;
    }
}

bool minusOperator(bool aState, bool aState2){
    bool tmp1 = aState - aState2;
    bool tmp2 = aState^ aState2;
    if(tmp1 == tmp2){
        cout << "- verhält sich gleich wie ^" << endl;
        return true;
    }
    else{
       cout << "- verhält sich nicht wie ^" << endl;
       return false;
    }
}

void maximaleGroessen(){
    char c;
    short s;
    int i;
    long l;
    long long ll;
    cout << sizeof(c) << endl << sizeof(s) << endl << sizeof(i) << endl << sizeof(l)
    << endl << sizeof(ll) << endl;
    c = (1 << (sizeof(c)*8-1)) - 1;
    cout << (int)c << endl; ++c; cout << (int)c << endl;
    s = (1 << (sizeof(s)*8-1)) - 1;
    cout << s << endl; ++s; cout << s << endl;
    i = (1 << (sizeof(i)*8-1)) - 1;
    cout << i << endl; ++i; cout << i << endl;
    l = (1 << (sizeof(l)*8-1)) - 1;
    cout << l << endl; ++l; cout << l << endl;
    ll = (1LL << (sizeof(ll)*8-1)) - 1;
    cout << ll << endl; ++ll; cout << ll << endl;

}

int main()
{
    cout << "Hello world!" << endl;
 //   char tmp[]  = leseZeichenein();
     leseZeichen();


/*    plusOperator(false, false);
    plusOperator(false, true);
    plusOperator(true, false);
    plusOperator(true, true);

    malOperator(false, false);
    malOperator(false, true);
    malOperator(true, false);
    malOperator(true, true);

    minusOperator(false, false);
    minusOperator(false, true);
    minusOperator(true, false);
    minusOperator(true, true);
*/
    return 0;
}


