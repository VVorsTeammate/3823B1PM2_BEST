#include <math.h>
int get_score(short score, int start, int stop, int now) {
    double sc, vichet = (((double)score / 2) / (stop - start));
    if (now >= stop)
        sc = ceil((double)score / 2);
    else if (now <= start)
        sc = score;
    else if (now > start)
        sc = ceil(score - vichet * (now - start));
    return sc;
}
