# NOTE: This is in progress

# TwinCAT Sending and Receiving SMS
An example of sending and receiving SMS using TwinCAT and a GSM modem

## Usage

1. Flash the Arduino code into Arduino Uno/Mega/etc.
2. Specify the COM port and the baud rate.
3. Set alarm 1 and 2
4. Send the AT command

![alt tag](https://github.com/milk-coffee/TwinCAT_SMS/blob/master/Images/TinyTake01-12-2016-02-33-41.gif)

## How it works

Firstly, it will try to connect to Arduino through the serial port.

AT command AT+CMGL="REC UNREAD" is the command sent to GSM modem to get unread SMS.

Arduino will simulate the GSM modem returning unread SMS.

The message is filtered such that only those starting with "Alert:" and ending with "Done." are stored in a string array. The array is displayed on the table.
If the SMS received is "Alert: This is an announcement. Done.", Alarm 1 will turn off.
If the SMS received is "Alert: This is the 2nd announcement. Done.", Alarm 2 will turn off.