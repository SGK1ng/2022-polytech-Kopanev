using namespace std;

int pow(int num, int deg){
	int o = 1;
	for (int i = num; i > 0; i--) {
	    o = o * deg;
	}
	return o;
}

unsigned int lengths(const char* str){
    const char* c = str;
    while(*c != '\0')
        c++;
    return c - str;
}

int lengthi(int n) {
    if (n == 0) return 1;
    int l = 0;
    while(n){
        l++;
        n /= 10;
    }
    return l;
}

int tint(const char* s){
	int num = 0;
	int lens = lengths(s);
	int res = 0;
    for (int i = 0; i < lens; i++){
        if (s[i] == '1'){res = res + 1 * pow(lens - i - 1, 10);}
		if (s[i] == '2'){res = res + 2 * pow(lens - i - 1, 10);}
		if (s[i] == '3'){res = res + 3 * pow(lens - i - 1, 10);}
        if (s[i] == '4'){res = res + 4 * pow(lens - i - 1, 10);}
		if (s[i] == '5'){res = res + 5 * pow(lens - i - 1, 10);}
		if (s[i] == '6'){res = res + 6 * pow(lens - i - 1, 10);}
        if (s[i] == '7'){res = res + 7 * pow(lens - i - 1, 10);}
		if (s[i] == '8'){res = res + 8 * pow(lens - i - 1, 10);}
		if (s[i] == '9'){res = res + 9 * pow(lens - i - 1, 10);}
	}
	return res;
}

const char* tstr(int s){
	int lens = lengthi(s);
    int m = 0;
    while(s)
    {
        m = m * 10 + s % 10;
        s /= 10;
    }
    s = m;
    char* res = new char[lens + 1 + 1];
    for (int i = 0; i < lens; i++){
        if (s % 10){
            if (s % 10 == 1){res[i] = '1';}
            if (s % 10 == 2){res[i] = '2';}
            if (s % 10 == 3){res[i] = '3';}
            if (s % 10 == 4){res[i] = '4';}
            if (s % 10 == 5){res[i] = '5';}
            if (s % 10 == 6){res[i] = '6';}
            if (s % 10 == 7){res[i] = '7';}
            if (s % 10 == 8){res[i] = '8';}
            if (s % 10 == 9){res[i] = '9';}
            s /= 10;}
        else {res[i] = '0';s /= 10;}
    }
    return res;
}

const char* mul(const char*  a, const char*  b){
    return tstr(tint(a) * tint(b));
}