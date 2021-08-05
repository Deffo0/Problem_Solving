import sys


def hangman_processing(trials):
    if (trials == 1):
        print("         \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials)
              )
    elif (trials == 2):
        print("   __    \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))

    elif (trials == 3):
        print("   ____  \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))
    elif (trials == 4):
        print("   ____  \n"
              "  |    | \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))
    elif (trials == 4):
        print("   ____  \n"
              "  |    | \n"
              "  |    | \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))
    elif (trials == 5):
        print("   ____  \n"
              "  |    | \n"
              "  |    | \n"
              "  |    | \n"
              "  |      \n"
              "  |      \n"
              "  |      \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))
    elif (trials == 6):
        print("   ____  \n"
              "  |    | \n"
              "  |    | \n"
              "  |    | \n"
              "  |    0 \n"
              "  |      \n"
              "  |      \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))
    elif (trials == 7):
        print("   ____  \n"
              "  |    | \n"
              "  |    | \n"
              "  |    | \n"
              "  |    0 \n"
              "  |    | \n"
              "  |      \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))
    elif (trials == 8):
        print("   ____   \n"
              "  |    |  \n"
              "  |    |  \n"
              "  |    |  \n"
              "  |    0  \n"
              "  |   /| \n"
              "  |       \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))
    elif (trials == 9):
        print("   ____   \n"
              "  |    |  \n"
              "  |    |  \n"
              "  |    |  \n"
              "  |    0  \n"
              "  |   /|\ \n"
              "  |       \n"
              "__|__\n"
              " {} attempts left \n".format(10 - trials))
    elif (trials == 10):
        print("   ____   \n"
              "  |    |  \n"
              "  |    |  \n"
              "  |    |  \n"
              "  |    0  \n"
              "  |   /|\ \n"
              "  |   / \ \n"
              "__|__\n"
              "All your attempts are over \n"
              "Better luck next time.\n")
        sys.exit()


word = input("Enter the word: ")
copy = word
guess = "_" * len(word)
carry = ''
trials = 0
while (guess != copy):
    carry = input("enter a character: ")
    if (carry == ""):
        print("You didn't enter any thing\n")
    elif (carry in word ):
        guess = guess[:word.index(carry)] + carry + guess[word.index(carry) + 1:]
        word = word[:word.index(carry)] + "*" + word[word.index(carry)+1 :]
        print(guess)
    else:
        trials += 1
        hangman_processing(trials)
print("Winner winner chicken dinner\n")
