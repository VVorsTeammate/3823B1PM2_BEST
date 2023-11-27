int get_time(long long angle) {
    return angle/6/(24*60)*10000 + angle/6/(60)*100 + angle/6%60;
}