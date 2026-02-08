int reverse(int x){
    long num = 0;
    int r ; // r =rem
    while (x != 0)
    {
      r = x % 10 ;
      num = (num * 10)+ r;
      x = x/10;
    }
    if ( num > INT_MAX || num < INT_MIN){
        return 0;
        }
 return num;
}
