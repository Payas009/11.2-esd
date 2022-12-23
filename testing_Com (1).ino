String command;

int Srinagarled = 1;
int Jammuled = 2;
int Shimlaled = 3;
int Chandigarhled = 4;
int Dehradunled = 5;
int Delhiled = 6;
int Lucknowled = 7;
int Jaipurled = 8;
int Bhopalled = 9;
int Patnaled = 10;
int Gangtokled = 11;
int Itanagarled = 12;
int Kohimaled = 13;
int Imphalled = 14;
int Aizwalled = 15;
int Agartalaled = 16;
int Shillongled = 17;
int Dispurled = 18;
int Kolkataled = 19;
int Ranchiled = 20;
int Bhubaneswarled = 21;
int Raipurled = 22;
int Amarvatiled = 23;
int Hydrabadled = 24;
int Chennailed = 25;
int Bengaluruled = 26;
int Kerelaled = 27;
int Panajiled = 28;
int Mumbailed = 29;
int Thiruvananthapuramled = 30;
int Gandhinagarled = 31;
int Lehled = 32;


void setup() {
  Serial.begin(9600);
  pinMode(Srinagarled,OUTPUT);
  pinMode(Jammuled,OUTPUT);
  pinMode(Shimlaled,OUTPUT);
  pinMode(Chandigarhled,OUTPUT);
  pinMode(Dehradunled,OUTPUT);
  pinMode(Delhiled,OUTPUT);
  pinMode(Lucknowled,OUTPUT);
  pinMode(Jaipurled,OUTPUT);
  pinMode(Bhopalled,OUTPUT);
  pinMode(Patnaled,OUTPUT);
  pinMode(Gangtokled,OUTPUT);
  pinMode(Itanagarled,OUTPUT);
  pinMode(Kohimaled,OUTPUT);
  pinMode(Imphalled,OUTPUT);
  pinMode(Aizwalled,OUTPUT);
  pinMode(Agartalaled,OUTPUT);
  pinMode(Dispurled,OUTPUT);
  pinMode(Kolkataled,OUTPUT);
  pinMode(Ranchiled,OUTPUT);
  pinMode(Amarvatiled,OUTPUT);
  pinMode(Chennailed,OUTPUT);
  pinMode(Bengaluruled,OUTPUT);
  pinMode(Kerelaled,OUTPUT);
  pinMode(Panajiled,OUTPUT);
  pinMode(Mumbailed,OUTPUT);
  pinMode(Thiruvananthapuramled,OUTPUT);
  pinMode(Gandhinagarled,OUTPUT);
  pinMode(Lehled,OUTPUT);
}

void loop() {

  if (Serial.available()) {
    command = Serial.readStringUntil('\n');
    command.trim();
    if (command.equals("Srinagaron")) {
      digitalWrite(Srinagarled, HIGH);
    }
    else if (command.equals("Srinagaroff")) {
      digitalWrite(Srinagarled, LOW);
    }
    
    else if (command.equals("Jammuon")) {
      digitalWrite(Jammuled, HIGH);
    }
    else if (command.equals("Jammuoff")) {
      digitalWrite(Jammuled, LOW);
    }
    
    else if (command.equals("Shimlalon")) {
      digitalWrite(Shimlaled, HIGH);
    }
    else if (command.equals("Shimlaoff")) {
      digitalWrite(Shimlaled, LOW);
    }
    
    else if (command.equals("Chandigarhon")) {
      digitalWrite(Chandigarhled, HIGH);
    }
    else if (command.equals("Chandigarhoff")) {
      digitalWrite(Chandigarhled, LOW);
    }
    else if (command.equals("Dehradunon")) {
      digitalWrite(Dehradunled, HIGH);
    }
    else if (command.equals("Dehradunoff")) {
      digitalWrite(Dehradunled, LOW);
    }
    else if (command.equals("Delhion")) {
      digitalWrite(Delhiled, HIGH);
    }
    else if (command.equals("Delhioff")) {
      digitalWrite(Delhiled, LOW);
    }
    else if (command.equals("Lucknowon")) {
      digitalWrite(Lucknowled, HIGH);
    }
    else if (command.equals("Lucknowoff")) {
      digitalWrite(Lucknowled, LOW);
    }
    else if (command.equals("Jaipuron")) {
      digitalWrite(Jaipurled, HIGH);
    }
    else if (command.equals("Jaipuroff")) {
      digitalWrite(Jaipurled, LOW);
    }
    else if (command.equals("Bhopalon")) {
      digitalWrite(Bhopalled, HIGH);
    }
    else if (command.equals("Bhopaloff")) {
      digitalWrite(Bhopalled, LOW);
    }
    else if (command.equals("Patnaon")) {
      digitalWrite(Patnaled, HIGH);
    }
    else if (command.equals("Patnaoff")) {
      digitalWrite(Patnaled, LOW);
    }
    else if (command.equals("Gangtokon")) {
      digitalWrite(Gangtokled, HIGH);
    }
    else if (command.equals("Gangtokoff")) {
      digitalWrite(Gangtokled, LOW);
    }
    else if (command.equals("Itanagaron")) {
      digitalWrite(Itanagarled, HIGH);
    }
    else if (command.equals("Itanagaroff")) {
      digitalWrite(Itanagarled, LOW);
    }
    else if (command.equals("Kohimaon")) {
      digitalWrite(Kohimaled, HIGH);
    }
    else if (command.equals("Kohimaoff")) {
      digitalWrite(Kohimaled, LOW);
    }
    else if (command.equals("Imphalon")) {
      digitalWrite(Imphalled, HIGH);
    }
    else if (command.equals("Imphaloff")) {
      digitalWrite(Imphalled, LOW);
    }
    else if (command.equals("Aizwalon")) {
      digitalWrite(Aizwalled, HIGH);
    }
    else if (command.equals("Aizwaloff")) {
      digitalWrite(Aizwalled, LOW);
    }
    else if (command.equals("Agartalaon")) {
      digitalWrite(Agartalaled, HIGH);
    }
    else if (command.equals("Agartalaoff")) {
      digitalWrite(Agartalaled, LOW);
    }
    else if (command.equals("Shillongon")) {
      digitalWrite(Shillongled, HIGH);
    }
    else if (command.equals("Shillongoff")) {
      digitalWrite(Shillongled, LOW);
    }
    else if (command.equals("Dispuron")) {
      digitalWrite(Dispurled, HIGH);
    }
    else if (command.equals("Dispuroff")) {
      digitalWrite(Dispurled, LOW);
    }
    else if (command.equals("Kolkataon")) {
      digitalWrite(Kolkataled, HIGH);
    }
    else if (command.equals("Kolkataoff")) {
      digitalWrite(Kolkataled, LOW);
    }
    else if (command.equals("Ranchion")) {
      digitalWrite(Ranchiled, HIGH);
    }
    else if (command.equals("Ranchioff")) {
      digitalWrite(Ranchiled, LOW);
    }
    else if (command.equals("Amarvation")) {
      digitalWrite(Amarvatiled, HIGH);
    }
    else if (command.equals("Amarvatioff")) {
      digitalWrite(Amarvatiled, LOW);
    }
    else if (command.equals("Chennaion")) {
      digitalWrite(Chennailed, HIGH);
    }
    else if (command.equals("Chennaioff")) {
      digitalWrite(Chennailed, LOW);
    }
    else if (command.equals("Bengaluruon")) {
      digitalWrite(Bengaluruled, HIGH);
    }
    else if (command.equals("Bengaluruoff")) {
      digitalWrite(Bengaluruled, LOW);
    }
    else if (command.equals("Kerelaon")) {
      digitalWrite(Kerelaled, HIGH);
    }
    else if (command.equals("Kerelaoff")) {
      digitalWrite(Kerelal ed, LOW);
    }
    else if (command.equals("Panajion")) {
      digitalWrite(Panajiled, HIGH);
    }
    else if (command.equals("Panajioff")) {
      digitalWrite(Panajiled, LOW);
    }
    else if (command.equals("Mumbaion")) {
      digitalWrite(Mumbailed, HIGH);
    }
    else if (command.equals("Mumbaioff")) {
      digitalWrite(Mumbailed, LOW);
    }
    else if (command.equals("Thiruvananthapuramon")) {
      digitalWrite(Thiruvananthapuramled, HIGH);
    }
    else if (command.equals("Thiruvananthapuramoff")) {
      digitalWrite(Thiruvananthapuramled, LOW);
    }
    else if (command.equals("Gandhinagaron")) {
      digitalWrite(Gandhinagarled, HIGH);
    }
    else if (command.equals("Gandhinagaroff")) {
      digitalWrite(Gandhinagarled, LOW);
    }
    else if (command.equals("Lehon")) {
      digitalWrite(Lehled, HIGH);
    }
    else if (command.equals("Lehoff")) {
      digitalWrite(Lehled, LOW);
    }
    
    else {
      digitalWrite(Amarvatiled, HIGH);
    }

  }
  delay(1000);
}
