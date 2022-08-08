import random
game_list = ["Snake","Water","Gun"]
count = 0
won = 0
lost = 0
total_rounds = 5
while count<total_rounds:
	choice = random.choice(game_list)
	print("Enter your choice:",end="")
	my_choice = input()
	if my_choice not in game_list:
		print("Please choose a option between Snake,Water and Gun only.")
	else:
		if my_choice==choice:
			print("Round Tie!!")
			print("Computer choice:",choice)
		elif my_choice == "Snake" and choice == "Water":
			print("You won this round.")
			print("Computer choice:",choice)
			count += 1
			won += 1
			print("Rounds remaining:",(total_rounds-count))
		elif my_choice == "Snake" and choice == "Gun":
			print("You lost this round.")
			print("Computer choice:",choice)
			count += 1
			lost += 1
			print("Rounds remaining:",(total_rounds-count))
		elif my_choice == "Water" and choice == "Gun":
			print("You won this round.")
			print("Computer choice:",choice)
			count += 1
			won += 1
			print("Rounds remaining:",(total_rounds-count))
		elif my_choice == "Water" and choice == "Snake":
			print("You lost this round.")
			print("Computer choice:",choice)
			count += 1
			lost += 1
			print("Rounds remaining:",(total_rounds-count))
		elif my_choice == "Gun" and choice == "Snake":
			print("You won this round.")
			print("Computer choice:",choice)
			count += 1
			won += 1
			print("Rounds remaining:",(total_rounds-count))
		elif my_choice == "Gun" and choice == "Water":
			print("You lost this round.")
			print("Computer choice:",choice)
			count += 1
			lost += 1
			print("Rounds remaining:",(total_rounds-count))
if won > lost:
	print("You WON the game!!!")
else:
	print("SORRY!!")
