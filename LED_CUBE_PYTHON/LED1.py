def Schalte(x,y,z,anaus):
    if(z==0):
        ebene=24
    elif(z==1):
        ebene=23
    elif(z==2):
        ebene=26
    if(x==0):
        if(y==0):
            col=15
        elif(y==1):
            col=16
        elif(y==2):
            col=19
    elif(x==1):
        if(y==0):
            col=13
        elif(y==1):
            col=18
        elif(y==2):
            col=21
    elif(x==2):
        if(y==0):
            col=12
        elif(y==1):
            col=11
        elif(y==2):
            col=22
    GPIO.output(col,anaus)
    GPIO.output(ebene,anaus)

def Init():
    GPIO.setmode(GPIO.BOARD)
    GPIO.setup(11,GPIO.OUT)
    GPIO.setup(12,GPIO.OUT)
    GPIO.setup(13,GPIO.OUT)
    GPIO.setup(15,GPIO.OUT)
    GPIO.setup(16,GPIO.OUT)
    GPIO.setup(18,GPIO.OUT)
    GPIO.setup(19,GPIO.OUT)
    GPIO.setup(21,GPIO.OUT)
    GPIO.setup(22,GPIO.OUT)
    GPIO.setup(23,GPIO.OUT)
    GPIO.setup(24,GPIO.OUT)
    GPIO.setup(26,GPIO.OUT)
    
def Blink(numTimes, speed):
    for i in range(numTimes):
        for z in range(3):
            for y in range(3):
                for x in range(3):
                    Schalte(x,y,z,True)
                    time.sleep(speed)
                    Schalte(x,y,z,False)

def All(numTimes, speed):
    for i in range(numTimes):
        for z in range(3):
            for y in range(3):
                for x in range(3):
                    Schalte(x,y,z,True)
            time.sleep(speed)
            for y in range(3):
                for x in range(3):
                    Schalte(x,y,z,False)

def Gelb(numTimes, speed):
    for i in range(numTimes):
        for z in range(3):
            if z==1:
                Schalte(1,0,0,True)
                Schalte(0,1,0,True)
                Schalte(2,2,0,True)
                time.sleep(speed)
                Schalte(1,0,0,False)
                Schalte(0,1,0,False)
                Schalte(2,2,0,False)
            elif z==2 :
                Schalte(0,2,1,True)
                Schalte(1,1,1,True)
                Schalte(2,0,1,True)
                time.sleep(speed)
                Schalte(0,2,1,False)
                Schalte(1,1,1,False)
                Schalte(2,0,1,False)
            elif z==3 :
                Schalte(0,0,2,True)
                Schalte(1,2,2,True)
                Schalte(2,1,2,True)
                time.sleep(speed)
                Schalte(0,0,2,False)
                Schalte(1,2,2,False)
                Schalte(2,1,2,False)
                
                
                


def Rand(speed):
    x=rd.randrange(3)
    y=rd.randrange(3)
    z=rd.randrange(3)
    Schalte(x,y,z,True)
    time.sleep(speed)
    Schalte(x,y,z,False)
                    
import RPi.GPIO as GPIO
import time
import random as rd
GPIO.cleanup()
Init()
Blink(2,0.1)
for i in xrange (11):
    All(50,0.0005)

Gelb (1000, 0.0005)
for i in xrange(100):
    Rand(0.1)
GPIO.cleanup()
        

