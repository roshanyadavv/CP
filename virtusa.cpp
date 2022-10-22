
//string s;
int n = str.length(), c=0, v =0, d =0, count =0;

for(int i=0; i<n; i++){
   if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
     c++;
   
   else if(str[i] == '*' || str[i] == '!' || str[i] == '?')
     v++;

  else d++;
}

count = c+v+d;
return count;