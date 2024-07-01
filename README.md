## Summarize the project and what problem it was solving.

This project is a clock program that allows users to increment time by hours, minutes or seconds. The primary problem it solves is providing an interference for users to view and adjust a 12- hours and 24- hours clock format

### What did you do particularly well?

The functions were well- separated, with each function handling a specific task (for example: adding and printing time and displaying the menu)
The clear and concise menu options and time display in both 12- and 24-hour formats.
And properly handled the transition of hours, minutes and seconds, ensuring the time stays withing valid ranges.

### Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

Using input validation for be 'cin' instead of 'scanf' for better type safety and to avoid potential buffer overflow issues.
Adding more comprehensive error handling to ensure the program doesn't exit abruptly on invalid inputs. And use of constants and enums for better readability and maintainability.

By implementing robust input validation, it would prevent the program from unexpected crashed due to invalid inputs and incorporating use of constants for frequently used values.

### Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

Ensuring that the time transitions were correct, particularly when moving from 59 to 0 minutes and incrementing the hour was somehow complex. I overcame this by breaking down the problem into smaller functions and carefully testing each edge case.

Referred to C++ documentation for understanding formatted output functions.
Utilized features in IDEs for debugging and step by step execution to understand the flow and catch errors.

### What skills from this project will be particularly transferable to other projects or course work?
How did you make this program maintainable, readable, and adaptable?

Skills transferable to other projects would be Modular Programming: breaking down tasks into smaller, manageable functions; a skill that applies to any project.
Input Handling and validation: Ensuring user inputs are validated and handles appropriately
and formatting the output; understanding how the format and display data is useful for any application.

I was able to make this program maintainable, readable and adaptable by using clear, consistent functions and variable names. Adding comments to explain the purpose of each function. And designing functions to be easily extendable.
