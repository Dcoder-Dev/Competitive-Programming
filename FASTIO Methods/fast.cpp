#incude<bits/stdc++.h>
using namespace std;

void fastscan(int &x) {
  bool neg=false;
  register int c;
  x =0;
  c=getchar();
  if(c=='-')
  {
  neg = true;
  c=getchar();
  }
  for(;(c>47 && c<58);c=getchar())
  x = (x<<1) + (x<<3) +c -48;
  if(neg)
  x *=-1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long a;
  fastscan(a);
  cout<<a;
  return 0;
}

/*
  fastio-scanf-printf
  scanf and printf are much faster input methods compared to cin and cout.
*/
/*
  fastio-unsynchronizing
  Using ios_base::sync_with_stdio(0) helps to unsynchronize the I/O streams of C and C++.
  This means that instead of being able to use use both C and C++ input to get a sensible ouput, now only one I/O (C or C++) can be used.
  cin.tie(0)
  Tied streams ensure that one stream is flushed automatically before each I/O operation on the other stream. That is
  cout<<"Enter number:";
  cin>>n;
  will work normally for tied streams but when streams are untied, the program might block waiting for the user to
  enter their name but the "Enter number" message is not yet visible (because cout is buffered by default, output 
  is flushed/displayed on the console only on demand or when the buffer is full).
  Both the statements can tend to provide even faster execution time than scanf and printf.
  */
/*
  fastio-fastscan
  This is (supposedly) the fastest method to take in inputs but sometimes this may give a higher execution time depending
  on the input provided
  */
