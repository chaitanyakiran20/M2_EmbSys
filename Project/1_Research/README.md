# RFID Based Attendance System

## Description

* RFID based attendance system has very simple circuit design. The RFID Reader has transmit and receive pins.
* Recieves Data from RFID data card sends to microcontroller.
* Data is verified and attendance is added 

## High Level Reuirements

| Test Serial No. |       Description        |
|:---------------:|:------------------------:|
|       HL_1      |    Count Attendance      |
|       HL_2      | Verify Incoming staff    |
|       HL_3      | detect Incoming visitors |
|       HL_4      | detect Incoming visitors |

## Low Level Requirements

| Test Serial No. |                    Description                   |
|:---------------:|:------------------------------------------------:|
|       LL_1      |            Add count to previous input           |
|       LL_2      | Scan rfid input and send data to microcontroller |

## Swot Analysis

# Strengths
* Detect Fake people entering(people outside the organisation) 
* keep a count of visitors and staff

# Weakness
* If the card was swiped for more than once, there is a chance of giving attendance for next days also if code is not written properly

# Oppurtunities
* RFID based attendance system can be used in educational institutions, industries, anywhere

# Threats
* There is a chance of misusing the cards. One person can give another person’s attendance if he/she had RFID card
