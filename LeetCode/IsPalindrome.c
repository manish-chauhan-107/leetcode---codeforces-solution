bool isPalindrome(char* s) {
    int m = strlen(s);
    char n[m+1];
    int j = 0;
      for (int i = 0 ; i < m ;i++){
        if (isalnum(s[i])){
            n[j] = tolower(s[i]);
             j++ ;
        }
     }
     n[j] = '\0';
     int l = strlen(n);
     for (int j = 0 ; j < l/2 ; j++){
        if (n[j] != n[l-1-j]){
            return false;
        }
     }
     return true;
}
