# Electronic Voting Machine (EVM)

An Arduino-based Electronic Voting Machine using push buttons, buzzer and Serial Monitor to record votes, count votes, display results and identify the winner.

## Components Required

- Arduino Uno
- Push Button × 5
- Buzzer × 1
- Breadboard
- Jumper Wires
- USB Cable
- Computer/Laptop

## Pin Configuration

| Component | Arduino Pin |
|---|---|
| A Button | D2 |
| B Button | D3 |
| C Button | D4 |
| Enable Button | D5 |
| Result Button | D6 |
| Buzzer | D8 |

## Features

- Enable voting
- Vote for Candidate A
- Vote for Candidate B
- Vote for Candidate C
- Buzzer indication
- Total vote counting
- Individual candidate vote counting
- Result display
- Winner detection
- Tie detection

## Working

1. Press the Enable button.
2. Voting is enabled.
3. Press A, B or C to cast a vote.
4. The selected candidate's vote is counted.
5. The buzzer sounds for 3 seconds.
6. Voting is automatically disabled after one vote.
7. Press Enable again for the next vote.
8. Press Result to display the total votes, individual votes and winner.

## Software

- Arduino IDE
- Embedded C/C++
- Arduino Uno

## Output

The vote count and final result are displayed on the Arduino Serial Monitor.

## Author

Anchal Dixit
