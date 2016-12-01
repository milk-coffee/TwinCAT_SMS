# NOTE: This is in progress

# TwinCAT Sending and Receiving SMS
An example of sending and receiving SMS using TwinCAT and a GSM modem

## Usage

1. Flash the Arduino code into Arduino Uno/Mega/etc.
2. Specify the COM port and the baud rate.
3. Set alarm 1 and 2
4. Send the AT command

![alt tag](http://imgur.com/a/O62T4)

## How it works

What's happening inside the program:

1. Inside the "First PC", there's a structure called "ST_Record" consisting of three arrays of 100,000 DWORD objects. Inside the MAIN program, a variable "bla" will show that the variables are populated.
2. Inside the "Second PC" program, there's the same structure called ST_Record. Random number will be assign to this variable every cycle. Every second, the program will write the value of the variable "record" to the other PC through ADS.
