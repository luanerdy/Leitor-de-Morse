#define LED_VERDE 4
#define BOTAO_VERDE 7

int buttGreen;
long tempo = 0;
long contratempo = 0;
int active = true;
int i = 0;
String letra = "";

void imprimirLetra(String letra);

void setup() {

  Serial.begin(9600);
  
  pinMode(LED_VERDE, OUTPUT);

  pinMode(BOTAO_VERDE, INPUT_PULLUP);
  
}

void loop() {

  buttGreen = digitalRead(BOTAO_VERDE);
  
  if(buttGreen){
    digitalWrite(LED_VERDE, LOW);

    if(contratempo > 160000){
        imprimirLetra(letra);
        letra = "";
    }
    
    contratempo++;
    
    if(!active){
      tempo += millis();
      active++;

      if(tempo > 20 && tempo <= 550){
        letra += '.';
      }
      else if(tempo > 550){
        letra += '_';
      }
      
      tempo = 0;
    }
    
  }
  else {
    digitalWrite(LED_VERDE, HIGH);
    if(active){
      contratempo = 0;
      tempo -= millis();
      active--;
    }
  }
  
   
}

void imprimirLetra(String letra){
    
    if(letra == "._"){
      Serial.print('a');
    }
    
    else if(letra == "_..."){
      Serial.print('b');
    }
            
    else if(letra == "_._."){
      Serial.print('c');
    }
            
    else if(letra == "_.."){
      Serial.print('d');
    }
            
    else if(letra == "."){
      Serial.print('e');
    }
            
    else if(letra == ".._."){
      Serial.print('f');
    }
            
    else if(letra == "__."){
      Serial.print('g');
    }
            
    else if(letra == "...."){
      Serial.print('h');
    }
            
    else if(letra == ".."){
      Serial.print('i');
    }
            
    else if(letra == ".___"){
      Serial.print('j');
    }
            
    else if(letra == "_._"){
      Serial.print('k');
    }
            
    else if(letra == "._.."){
      Serial.print('l');
    }
            
    else if(letra == "__"){
      Serial.print('m');
    }
            
    else if(letra == "_."){
      Serial.print('n');
    }
            
    else if(letra == "___"){
      Serial.print('o');
    }
            
    else if(letra == ".__."){
      Serial.print('p');
    }
            
    else if(letra == "__._"){
      Serial.print('q');
    }
            
    else if(letra == "._."){
      Serial.print('r');
    }
            
    else if(letra == "..."){
      Serial.print('s');
    }
            
    else if(letra == "_"){
      Serial.print('t');
    }
            
    else if(letra == ".._"){
      Serial.print('u');
    }
            
    else if(letra == "..._"){
      Serial.print('v');
    }
            
    else if(letra == ".__"){
      Serial.print('w');
    }
            
    else if(letra == "_.._"){
      Serial.print('x');
    }
            
    else if(letra == "_.__"){
      Serial.print('y');
    }
            
    else if(letra == "__.."){
      Serial.print('z');
    }
            
    else if(letra == ".____"){
      Serial.print('1');
    }
            
    else if(letra == "..___"){
      Serial.print('2');
    }
            
    else if(letra == "...__"){
      Serial.print('3');
    }
            
    else if(letra == "...._"){
      Serial.print('4');
    }
            
    else if(letra == "....."){
      Serial.print('5');
    }
            
    else if(letra == "_...."){
      Serial.print('6');
    }
            
    else if(letra == "__..."){
      Serial.print('7');
    }
            
    else if(letra == "___.."){
      Serial.print('8');
    }
            
    else if(letra == "____."){
      Serial.print('9');
    }
            
    else if(letra == "_____"){
      Serial.print('0');
    }
            
    else if(letra == "..__"){
      Serial.print(' ');
    }
            
    else if(letra == "._._"){
      Serial.print('\n');
    }
  
}
