/**
 * Ansi C "itoa" based on Kernighan & Ritchie's "Ansi C"
 * with slight modification to optimize for specific architecture:
 * taken from http://www.jb.man.ac.uk/~slowe/cpp/itoa.html
 */

void strreverse(char* begin, char* end) {

        char aux;

        while(end>begin)

                aux=*end, *end--=*begin, *begin++=aux;

}

void itoa(uint8_t value, char* str, int base) {

        static char num[] = "0123456789abcdefghijklmnopqrstuvwxyz";
        char* wstr=str;
        div_t res;

        // Validate base
        if (base<2 || base>35){ *wstr='\0'; return; }


        // Conversion. Number is reversed.
        do {
                res = div(value,base);
                *wstr++ = num[res.rem];

        }while( (value=res.quot) );
        *wstr='\0';
        // Reverse string
        strreverse(str,wstr-1);

}

char* btoa(uint8_t value){
	static char buffer[9];
	itoa(value, buffer, 2);

	return buffer;
}