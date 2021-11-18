

//Funkcja setup odpowiada za inicjalizację komponentów. Przykładowo możemy ustawić dane piny jak wejścia lub wyjścia mikrokontrolera
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // ustawienie pinu LED_BUILTIN jako OUTPUT(wyjście) 
}

//Pętla loop zawiera cały kod który będzie się wykonywał w nieskończonej pętli
void loop() {
  //Włączanie oraz wyłączanie wbudowanej diody LED
  digitalWrite(LED_BUILTIN, HIGH); //Ustawiamy pin LED_BUILTIN na stan wysoki czyli 5v na wyjściu
  delay(1000);                     //Czekamy 1000ms (1 sekunda) 
  digitalWrite(LED_BUILTIN, LOW);  //Ustawiamy pin LED_BUILTIN na stan niski czyli 0v na wyjściu
  delay(1000);                     //Czekamy 1000ms (1 sekunda)  

  //Kod morsa "litera G"

  //Długi sygnał
  digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);

  //Długi sygnał
  digitalWrite(LED_BUILTIN,HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);

  //Krótki sygnał
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(500);





}

