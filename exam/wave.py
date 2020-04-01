import matplotlib.pyplot as plt
import numpy as np
import serial
import time

Fs = 128.0;  # sampling rate
Ts = 1.0/Fs; # sampling interval
t = np.arange(0,1,Ts) # time vector; create Fs samples between 0 and 1.0 sec.
y = np.arange(0,1,Ts) # signal vector; create Fs samples

n = len(y) # length of the signal
k = np.arange(n)
T = n/Fs


serdev = '/dev/ttyACM1'
s = serial.Serial(serdev)
for x in range(0, int(Fs)):
    line=s.readline() # Read an echo string from K66F terminated with '\n'
    print(line)
    y[x] = float(line)


fig, ax = plt.subplots(1, 1)
ax[0].plot(t,y)
ax[0].set_xlabel('Time')
ax[0].set_ylabel('Amplitude')
plt.show()
s.close()