


#define led0 13
#define led1 12
#define switch0 2
#define switch1 4

int switchState = 0;
int switchState1 = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode (led0, OUTPUT);
  pinMode (led1, OUTPUT);
  pinMode (switch0, INPUT);
  pinMode (switch1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led0, switchState);
  digitalWrite(led1, switchState1);
  
  switchState = digitalRead (switch0);
  Serial.print("switchState:");
  Serial.println(switchState);
  switchState1 = digitalRead (switch1);
  Serial.print("switchState1:");
  Serial.println(switchState1);

}

   

