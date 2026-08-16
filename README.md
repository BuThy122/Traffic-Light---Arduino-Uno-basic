# Traffic Light — Arduino Uno (Basic)

A simple beginner-friendly Arduino project that simulates a traffic light using three LEDs.

## Components

- Arduino Uno
- 🔴 Red LED
- 🟡 Yellow LED
- 🟢 Green LED
- 3 × 220Ω resistors
- Breadboard
- Jumper wires

## Pin Connections

Each LED is connected to an Arduino pin through a **220Ω resistor**.  
The resistor protects the LED from too much current.

| LED | Arduino Pin | Resistor | Connection |
|---|---|---|---|
| 🔴 Red LED | Pin 13 | 220Ω | Pin 13 → 220Ω resistor → Long leg (+) → Short leg (−) → GND |
| 🟡 Yellow LED | Pin 12 | 220Ω | Pin 12 → 220Ω resistor → Long leg (+) → Short leg (−) → GND |
| 🟢 Green LED | Pin 11 | 220Ω | Pin 11 → 220Ω resistor → Long leg (+) → Short leg (−) → GND |

### Understanding the LED

- **Long leg (+)** = Positive side
- **Short leg (−)** = Negative side
- **GND** = Ground / negative connection
- **220Ω resistor** = Protects the LED

## Working

The traffic light works in this order:

1. 🟢 **Green LED** turns ON for 5 seconds
2. 🟡 **Yellow LED** turns ON for 2 seconds
3. 🔴 **Red LED** turns ON for 5 seconds
4. The sequence repeats continuously

## Circuit
<img width="1080" height="735" alt="circuit" src="https://github.com/user-attachments/assets/440a9d0b-e81c-4fc7-8925-c88d9afee6f0" />

## Circuit

Pin 13 ── 220Ω ── 🔴 Red LED ── GND
Pin 12 ── 220Ω ── 🟡 Yellow LED ── GND
Pin 11 ── 220Ω ── 🟢 Green LED ── GND


