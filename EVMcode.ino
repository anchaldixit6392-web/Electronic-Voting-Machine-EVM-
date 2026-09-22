const int A_BUTTON = 2;
const int B_BUTTON = 3;
const int C_BUTTON = 4;

const int ENABLE_BUTTON = 5;
const int RESULT_BUTTON = 6;

const int BUZZER = 8;

int countA = 0;
int countB = 0;
int countC = 0;

bool votingEnabled = false;

void setup() {
  pinMode(A_BUTTON, INPUT_PULLUP);
  pinMode(B_BUTTON, INPUT_PULLUP);
  pinMode(C_BUTTON, INPUT_PULLUP);

  pinMode(RESULT_BUTTON, INPUT_PULLUP);
  pinMode(ENABLE_BUTTON, INPUT_PULLUP);

  pinMode(BUZZER, OUTPUT);

  digitalWrite(BUZZER, LOW);

  Serial.begin(9600);

  Serial.println("VOTING MACHINE READY");
  Serial.println("PRESS ENABLE BUTTON");
  Serial.println();
}

void loop() {

  // ENABLE BUTTON
  if (digitalRead(ENABLE_BUTTON) == LOW) {

    votingEnabled = true;

    Serial.println("VOTING ENABLED");
    Serial.println("PRESS A / B / C TO VOTE");

    while (digitalRead(ENABLE_BUTTON) == LOW);
    delay(300);
  }

  // A VOTE
  if (votingEnabled && digitalRead(A_BUTTON) == LOW) {

    countA++;

    Serial.print("VOTE COUNT = ");
    Serial.println(countA + countB + countC);

    digitalWrite(BUZZER, HIGH);
    delay(3000);
    digitalWrite(BUZZER, LOW);

    votingEnabled = false;

    Serial.println("VOTING DISABLED");
    Serial.println("PRESS ENABLE FOR NEXT VOTE");

    while (digitalRead(A_BUTTON) == LOW);
    delay(200);
  }

  // B VOTE
  if (votingEnabled && digitalRead(B_BUTTON) == LOW) {

    countB++;

    Serial.print("VOTE COUNT = ");
    Serial.println(countA + countB + countC);

    digitalWrite(BUZZER, HIGH);
    delay(3000);
    digitalWrite(BUZZER, LOW);

    votingEnabled = false;

    Serial.println("VOTING DISABLED");
    Serial.println("PRESS ENABLE FOR NEXT VOTE");

    while (digitalRead(B_BUTTON) == LOW);
    delay(200);
  }

  // C VOTE
  if (votingEnabled && digitalRead(C_BUTTON) == LOW) {

    countC++;