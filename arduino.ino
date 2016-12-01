int incomingByte = 0; 
char byteRead;
int i=0;

String content = "";
char c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
//  // put your main code here, to run repeatedly:
//  if(Serial.available()>0){
//    byteRead = Serial.read();
//
//    if(byteRead==13){
//      Serial.println();
//      //Serial.println("OK");
//    }else{
//      Serial.write(byteRead);
//    }
//  }

//  Serial.print("Test: ");
//  Serial.println(i);
//  i++;
//  delay(100);

    if(Serial.available()>0){
      content = Serial.readStringUntil('\r');
    }
    
    if(content == "AT") {Serial.println("OK"); content = "";}
    else if(content == "AT+CMGL=\"REC UNREAD\""){
       Serial.println("+CMGL: 1, \"REC UNREAD\",\"+6583383193\",,\"16/11/23,11:21:49+32\"\r\nAlert: This is an announcement. Over.\r\n"
                       "+CMGL: 2, \"REC UNREAD\",\"+6583383193\",,\"16/11/23,11:21:49+32\"\r\nAlert: This is the 2nd announcement. Over.");
       content = "";
    }
}