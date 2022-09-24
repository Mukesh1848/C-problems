// programe to write for recerse a string  

string reverseWord(string str){
    
    int n=str.size();
  int s=0;
  int e = n-1;
  
  while(s<e){
      swap(str[s++],str[e--]);
  }
  return str;
  
}