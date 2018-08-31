int YaxisValue = 0;
int XaxisValue = 0;
int YaxisPin = A1;
int XaxisPin = A0;
int ClickPin = 2;


void setup()
{
  Serial.begin(9600);
  pinMode(ClickPin, INPUT);
}

void loop()
{
 ReadValues();
 PrintValues();
}

void ReadValues()
{
  YaxisValue = analogRead(YaxisPin);
  XaxisValue = analogRead(XaxisPin);
}

void PrintValues()
{
  Serial.print("Y axis: ");
  Serial.print(YaxisValue);
  Serial.print("     X axis: ");
  Serial.print(XaxisValue);
  Serial.print("     ClickStatus: ");
  Serial.println(digitalRead(ClickPin));
}

