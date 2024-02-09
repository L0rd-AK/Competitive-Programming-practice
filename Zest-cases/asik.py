# KBC Game:

questions = [["1.","What is Orange?","A) A Color","B) A Fruit",'B'], ["2.","What is Red?","A) A Color","B) Your Blood",'A'],["3.","Who are Your?","A) A Human","B) A Person",'B'],["4.","What is Chad?","A) A moon","B) A small teretory of China","A"],["5.","Sun Give us What?","A) Light","B) Energy","A"],["6.","Why are you Playing This Game?","A) For Fame","B) For Money","B"]]

values = 10
win_amount = 0

for i in range(len(questions)):
    print(questions[i][0], questions[i][1])
    print(questions[i][2])
    print(questions[i][3])
    print("C) Quit")
    ans = input("Enter Your Answer: ")
    if(ans == questions[i][4]):
        print("Congratulations! Correct Answer.\n")
        win_amount  = win_amount+values
        values = values+10
    
    elif(ans == "C"):
        print("Thanks! For Participating.")
        break
    
    else:
        print("Oh Sorry! Your Answer is wrong.\n")
        win_amount  = 0
        break
print("Your Winning Amount: ",win_amount)