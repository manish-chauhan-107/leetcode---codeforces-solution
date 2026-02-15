bool isValid(char* s) {
     int len;

    while ((len = strlen(s)) > 0) {
        char *p;

        if ((p = strstr(s, "()")) ||
            (p = strstr(s, "{}")) ||
            (p = strstr(s, "[]"))) {

            memmove(p, p + 2, strlen(p + 2) + 1);
        }
        else {
            return false;
        }
    }

    return true;
}
