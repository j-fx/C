This program analysis a text and gives it a score of readability.
The test uses the Coleman-Liau index: index = 0.0588 * L - 0.296 * S - 15.8
Where L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.

The program outputs "Grade X" where X is the grade level computed by the Coleman-Liau formula, rounded to the nearest integer.
If the resulting index number is 16 or higher, the program outputs "Grade 16+".
If the index number is less than 1, your program output "Before Grade 1".
