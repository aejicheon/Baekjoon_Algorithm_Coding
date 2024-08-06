#include <stdio.h>

int main () {
    int h, m;
    int hh, mm;

    scanf("%d %d", &h, &m);

    if (m - 45 < 0) {
    	h -= 1;
    	mm = 60 + (m - 45);
    	if (h < 0) {
	    	hh = 24 + h;
	    	printf("%d %d\n", hh, mm);
	    }
	    else {
	    	printf("%d %d\n", h, mm);
	    }
    }
    else {
	    mm = m - 45;
	    printf("%d %d\n", h, mm);
    }
}