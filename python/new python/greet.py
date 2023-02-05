import time
# import time
timestamp = time.strftime('%H:%M:%S')
print(f"the time is: {timestamp}")
timestamphr = int(time.strftime('%H'))
# print(timestamphr)
timestampmin = int(time.strftime('%M'))
# print(timestampmin)
timestampsec = int(time.strftime('%S'))
# print(timestampsec)
if(timestamphr>= 00 and timestamphr< 12):
    print("good morning : ")
elif(timestamphr>= 12 and timestamphr< 16):
    print("good afternoon : ")    
elif(timestamphr>= 16 and timestamphr< 18):
    print("good eve : ")    
elif(timestamphr>= 18 and timestamphr< 24):
    print("good night : ")    