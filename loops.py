command=""
count1=0
count2=0
while True:
    command=input(">").lower()
    if command == 'start' and count1==0:
        print("car started..")
        count1=1
    elif command=="start" and count1==1:
        print("car has already started..")
    elif command == 'stop' and count2==0:
        print("car stopped")
        count2=1
    elif command=="stop" and count2==1:
        print("car has already stopped")
    elif command=="help":
        print("""
start - to start the car
stop - to stop the car
quit - to quit        
        """)
    elif command=="quit":
        break
    else:
        print("i dont understand ..")
