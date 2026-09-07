#include<iostream>

using namespace std;

 
void
getHexadecimal (int decimal) 
{
  
  char result[100];
  
 
  int pos = 0;
  
while (decimal != 0)
    {
      
int rem = 0;
      
 
 
rem = decimal % 16;
      
 
	if (rem < 10)
	
	{
	  
result[pos] = rem + 48;
	  
pos++;
	
}			
else {
    result[pos] = rem + 55; 
    pos++; 
    
} 
decimal = decimal / 16; 
        
    } 
    cout << "Hexadecimal Value: "; 
    for (int j = pos -1; j >= 0; j--)
    cout << result[j]; 
    
} 
int main() 
{ 
    int decimal; 
    cout << "Decimal Value:" ;
    cin >> decimal; 
    getHexadecimal(decimal); 
    return 0; 
    
}
