# RFID Based Attendance System

## Description

* RFID based attendance system has very simple circuit design. The RFID Reader has transmit and receive pins.
* These pins are connected to the transmit and receive pins of the micro controller i.e. PD0 and PD1 pins of microcontroller.
* VCC is connected to 5v and GND is connected to ground.

## High Level Reuirements

| Test Serial No. |       Description      |
|:---------------:|:----------------------:|
|       HL_1      |    Count Attendance    |
|       HL_2      | Verify Incoming people |
|       HL_3      |  Count people leaving  |

## Low Level Requirements

| Test Serial No. |                    Description                   |
|:---------------:|:------------------------------------------------:|
|       LL_1      |            Add count to previous input           |
|       LL_2      | Scan rfid input and send data to microcontroller |
|       LL_3      |        Subtract count when people leaving        |

## Swot Analysis

# Strengths
* Detect Fake people entering 
* 

# Weakness
* If the card was swiped for more than once, there is a chance of giving attendance for next days also if code is not written properly

# Oppurtunities
* RFID based attendance system can be used in educational institutions, industries, anywhere

# Threats
* there is a chance of misusing the cards. One person can give another person’s attendance if he/she had RFID card
* 
