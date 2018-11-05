void setup(){
  Serial.begin(9600);
}

void loop() {
  int a = 2;
  int b = 3;
  int c;
  
  c = multiplication(a, b);
  Serial.println(c);
  delay(500);
}

int multiplication(int x, int y){
  int result;
  
  result = x * y;
  
  return result;
  return result; //At here, we are passing the value of "result" to our main function.
}

/* Why "int multiplication()", not "void multiplication()"?
   It depends on your style of coding, using int function here as we have to passing the value to the main function.
   For void function, there will be no value or data is transferred to the main function. If you using void function,
   your value cannot be passed to the main function but the only thing u can do is
   
   void loop() {
    int a = 2;
    int b = 3;
    
    multiplication(a, b);
    delay(500);
  }

  void multiplication(int x, int y){
    int result;
    result  = x * y;
    Serial.println(result); // you dont have to return anything as this is void function.
  }
*/

/* WHAT IS RETURN? 
The function of return is passing the value that you want from outer function to your main function
1. You can try to "return 1;"
   - The output will be 1
2. Try "return x"
   - The output will be value of x, which is 2
*/

   
