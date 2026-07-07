bool isPalindrome(int x) {
     long newNumber = 0 ;
     int reminder ;
     int number;
     number = x ;
      while (x > 0){
      reminder = x % 10;  
      newNumber = (newNumber * 10) + reminder ;
      x = x/10;
      }
      if (newNumber == number){
        return true ;
      }
    else
    return false;
}
