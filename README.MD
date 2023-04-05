# ecARGS - An ec Command Line Argument Parsing Library for C.
ecArgs is a lightweight and easy-to-use library for C that simplifies the process of parsing command-line arguments using the `getopt` function. It provides a clean and intuitive API to define short and long options, their descriptions, and the actions to perform when the options are encountered.

## Features

- Supports both short and long options (e.g., `-a` or `--option-a`)
- Allows specifying whether an option requires an argument
- Automatically generates usage/help messages based on provided option descriptions
- Easily extendable to add custom actions associated with each option
- Built as a wrapper around the standard `getopt` function for optimal compatibility

## How to Use

1. Clone or download the ecArgs library and add it to your project.
2. Include the `ecargs.h` header file in your source code.
3. Define an array of `cli_option` structures, specifying the short and long options, descriptions, whether an argument is required, and the associated action functions.
4. Call the `parse_cli_args` function with the command-line arguments and the array of options.
5. Implement custom action functions that will be called when the respective options are encountered.

For a detailed example and further instructions, please refer to the provided sample code in the repository.

## Why ecArgs?

Command-line argument parsing can be a tedious and error-prone task, especially for complex programs. ecArgs aims to provide an easy-to-use interface that streamlines the process, allowing developers to focus on their program's core functionality while maintaining clean and maintainable code.

By using ecArgs, you'll be able to easily manage your command-line options and their associated actions, making your program more user-friendly and enhancing its overall usability.

## Future Improvements

To improve and expand ecArgs to better suit the needs of users. Here are some ideas for future improvements:

1. **Integration with ChatGPT API**: By leveraging the ChatGPT API, we can generate dynamic help messages, argument descriptions, and options based on user feedback. This will allow ecArgs to adapt to the user's requirements, making it even more user-friendly and versatile.

2. **Support for custom option validation**: Enhance the library to allow users to provide custom validation functions for option arguments, ensuring that input values meet specific criteria or adhere to certain constraints.

3. **Configuration file support**: Add the ability to read command-line options from a configuration file, enabling users to manage their program settings more easily and making it more convenient for them to store and share configurations.

4. **Argument aliasing**: Implement support for argument aliases, which will allow users to define multiple names for the same option, enhancing flexibility and catering to different user preferences.

5. **Auto-completion support**: Integrate with popular shell auto-completion systems (e.g., Bash, Zsh, or Fish) to provide users with suggestions for available options as they type, improving user experience and reducing the chances of typing errors.

Please feel free to contribute to the project or provide your feedback and ideas!

