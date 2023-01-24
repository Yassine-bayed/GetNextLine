<h1 align = "center">Get Next Line  | 42 Project</h1>

<strong>Brief :</strong>  

&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; The get_next_line() is a function that reads lines with a newline character ('\n') from a file descriptor and returns the read line as a string.<br>
 - The function takes a **single parameter**, an <u>integer file descriptor fd</u> which represents the file or stream to be read. <br>It should work as expected both when reading from a <span style="color: #ADD8E6	">**file**</span> and when reading from the <span style="color:#ADD8E6	">**standard input**</span>.<br>
 - The function should store the characters in a buffer:

   - When a newline character is encountered, the buffer is null-terminated and returned. <br>
   - If the end of file is encountered and the last line does not have a newline character, the buffer should be returned without the null terminator.
- The function should return the following:<br>
  - A pointer to the read line, including the terminating newline character, if the read was successful.
  - NULL if there is nothing else to read, or an error occurred.<br>
   <h2>Mandatory Part:</h2>
 - **Prototype** : <p style = "color:red;">```char *get_next_line(int fd)```</p>
 - **Header File (** get_next_line.h **)** : must at least contain the prototype of the get_next_line() function.
 - **Files** : 
   - **Main File** **(** get_next_line.c **):** 
   - **Header File (** get_next_line.h **)** : must at least contain the prototype of the get_next_line() function.
   - **Additional functions :** need to be in the <u>get_next_line_utils.c</u> file.
 - **External functs :**  read, malloc, free.
    - The buffer size for read() can be defined by the macro **-D BUFFER_SIZE=n** ``` eg: gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c```in the compilation, but you need to choose a **Default Value Of Your Choice**. The code should be able to <u>compile with or without the flag</u>.
    - Function should be memory leak free.
- **Forbidden :**
  - You are not allowed to use your libft in this project.
  - lseek() is forbidden.
  - Global variables are forbidden.
- ℹ️ :information_source: **:**
   <h2>Bonus Part:</h2>
