// VASILIS KOTOULAS

int gpio13Led = 13;
int gpio12Relay = 12;

void setup () {
pinMode( gpio13Led, OUTPUT) ;
pinMode( gpio12Relay,OUTPUT) ;
}
 



void loop() {
  digitalWrite (gpio13Led ,HIGH ) ;
  digitalWrite (gpio12Relay ,HIGH ) ;
  delay(125);
   digitalWrite (gpio13Led ,LOW ) ;
  digitalWrite (gpio12Relay ,LOW ) ;
  delay(125);
  

}
