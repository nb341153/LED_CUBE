#!/bin/bash
sudo python
import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)
GPIO.setup(11,GPIO.OUT)
GPIO.setup(24,GPIO.OUT)
GPIO.output(11,True)
GPIO.output(24,True)
time.sleep(10)
GPIO.cleanup()
exit()