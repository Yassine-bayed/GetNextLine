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
#   :fishsticks:  Mandatory Part:
 - **Prototype** : <p style = "color:red;">```char *get_next_line(int fd)```</p>
 - **Header File (** get_next_line.h **)** : must at least contain the prototype of the get_next_line() function.
 - **Files** : 
   - **Main File** **(** get_next_line.c **):** 
   - **Header File (** get_next_line.h **)** : must at least contain the prototype of the get_next_line() function.
   - **Additional functions :** need to be in the <u>get_next_line_utils.c</u> file.
 - **External functs :**  ***read***, ***malloc***, ***free***.
    - The buffer size for read() can be defined by the macro **-D BUFFER_SIZE=n** ``` eg: gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c```in the compilation, but you need to choose a **Default Value Of Your Choice**. The code should be able to <u>compile with or without the flag</u>.
     <br>&nbsp;  &nbsp; &nbsp;  &nbsp; 💡 : `Does your function still work if the BUFFER_SIZE value is 9999? If
it is 1? 10000000? Do you know why?`
    - Function should be memory leak free.
- **Forbidden :**
  - You are not allowed to use your libft in this project.
  - lseek() is forbidden.
  - Global variables are forbidden.<br><br>

  > ℹ️  **:** Try to read as little as possible each time get_next_line() is called. If you encounter a new line, you have to return the current line. Don’t read the whole file and then process each line 
#  💠 Bonus Part:
-  suffix the bonus part files using **`*_bonus.[c/h]` :** 
   - [x]  **get_next_line_bonus**.c : Main File.
   - [x]  **get_next_line_bonus**.h : Header File.
   - [x]  **get_next_line_utils_bonus**.c : Additional functions.<br>
- **Manage Multiple File Descriptors at The Same Time :** <br> 
     > **For example**  :if you can read from the file descriptors 3, 4 and 5, you should be able to read from a different fd per call without losing the reading thread of each file descriptor or returning a line from another fd **.**<br> 
 
  It means that you should be able to call get_next_line() to read from fd 3, then fd 4, then 5, then once again 3, once again 4, and so forth.

     &nbsp;  &nbsp;  &nbsp;  **N.B :**`Both the buffer size and the line size can be of very different values.
A file descriptor does not only point to regular files. Be smart and cross-check with your peers. Prepare a full set of diverse tests for defense.`

# ℹ️ When writing your tests, remember that:

- Both the buffer size and the line size can be of very different
values.
- A file descriptor does not only point to regular files.
Be smart and cross-check with your peers. Prepare a full set of
diverse tests for defense.
Once passed, do not hesitate to add your<br>
# 📚 RESSOURCES:

- [Before start resources](https://source.leet.ma/project?project=get_next_line)
- [Handling a File by its Descriptor in C](https://www.codequoi.com/en/handling-a-file-by-its-descriptor-in-c/)
- [EOF](https://ruslanspivak.com/eofnotchar/)
- [WhiteBoard](https://beta.tldraw.com/r/v2_c_k644zKgNiMAt3ND_6fl0G](https://www.tldraw.com/v/91k_c_7vG0lf1_DN8tAMiNgKz9)
