# wordle
The project involved creating a program reminiscent of the game "Wordle". The goal of the game is to guess the word randomly selected by the program. If the user successfully guesses the word, they win, but if they fail to do so after five attempts, they lose.

The program randomly selects a five-letter word from a database of 436 words. The user's task is to guess this word within five attempts. Users must input five-letter words or combinations of letters, which are then analyzed by the program and displayed according to the following rules:

- A letter is highlighted in green if it appears in the same position in the guessed word as it does in the selected word.
- A letter is highlighted in blue if it appears in the guessed word but not in the same position as in the selected word.
- A letter is not highlighted if it does not appear in the guessed word.

After five attempts or if the user guesses the word correctly, the program displays a message:

- "Congratulations! You guessed correctly!"
- "You lost! Better luck next time!" followed by the randomly selected word.

At the end of the game, the program prompts the user to play again by asking, "Do you want to play again?" and asks the user to choose the appropriate number ("1- Yes, 2- No") depending on their decision. If the user chooses option one, the program displays "Let's start!" and a new word is randomly selected, restarting the game. If the user chooses option two, the program displays "Goodbye!" and closes after any key is pressed.

### Interface
![image](https://github.com/czesctuklap/wordle/assets/164773624/c0918687-cf37-4882-a59a-96cd0b9575c7)
![image](https://github.com/czesctuklap/wordle/assets/164773624/2f670a94-96b6-42eb-8adc-5b2bf77a0539)


