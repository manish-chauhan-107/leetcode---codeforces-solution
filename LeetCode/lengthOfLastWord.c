int lengthOfLastWord(char* s) {
    int m = strlen(s);
    int length = 0 ;
    for (int i = m-1 ; i >= 0 ;i--){
      if (s[i] == ' ' && length == 0){
           continue;
        }
         if (s[i] != ' '){
           length = length+1;
      }
      else{
        break;
      }
    }
      return length ;
}
