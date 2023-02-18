<h1>0x16. C - Simple Shell</h1>
<br>
<h2>Description</h2><br>
<p>This is a project of simple shell, which provides a basic but essential tool for interacting with</p>
<p>computer systems, and it serves as a foundation for more advanced shell programs.</p><br>
<h2>General Objectives</h2><br>
<ul>
<li>Who designed and implemented the original Unix operating system</li>
<li>Who wrote the first version of the UNIX shell</li>
<li>Who invented the B programming language (the direct predecessor to the C programming language)</li>
<li>Who is Ken Thompson</li>
<li>How does a shell work</li>
<li>What is a pid and a ppid</li>
<li>How to manipulate the environment of the current process</li>
<li>What is the difference between a function and a system call</li>
<li>How to create processes</li>
<li>What are the three prototypes of main</li>
<li>How does the shell use the PATH to find the programs</li>
<li>How to execute another program with the execve system call</li>
<li>How to suspend the execution of a process until one of its children terminates</li>
<li>What is EOF / “end-of-file”?</li>
</ul><br>
<h2>Requirements</h2><br>
<ul>
<li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A README.md file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
<li>Your shell should not have any memory leaks</li>
<li>No more than 5 functions per file</li>
<li>All your header files should be include guarded</li>
<li>Use system calls only when you need to (why?)</li>
<li>Write a README with the description of your project</li>
<li>You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker</li>
</ul><br>
<h2>Tasks</h2>
<br>
<h3>0. Betty would be proud</h3>
<p>Write a beautiful code that passes the Betty checks</p>
<h3>1. Simple shell 0.1</h3>
<p>Write a UNIX command line interpreter.</p>
<ul>
<li>Usage: simple_shell</li>
</ul>
<p>Your Shell should:</p>
<ul>
<li>Display a prompt and wait for the user to type a command. A command line always ends with a new line.</li>
<li>The prompt is displayed again each time a command has been executed.</li>
<li>The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.</li>
<li>The command lines are made only of one word. No arguments will be passed to programs.</li>
<li>If an executable cannot be found, print an error message and display the prompt again.</li>
<li>Handle errors.</li>
<li>You have to handle the “end of file” condition (Ctrl+D)</li>
</ul>
<p>You don’t have to:</p>
<ul>
<li>use the PATH</li>
<li>implement built-ins</li>
<li>handle special characters : ", ', `, \, *, &, #</li>
<li>be able to move the cursor</li>
<li>handle commands with arguments</li>
</ul>
<p>execve will be the core part of your Shell, don’t forget to pass the environ to it…</p>
<h3>2. Simple shell 0.2</h3>
<p>Simple shell 0.1 +</p>
<ul>
<li>Handle command lines with arguments</li>
</ul>
<h3>3. Simple shell 0.3 </h3>
<p>Simple shell 0.2 +</p>
<ul>
<li>Handle the PATH</li>
<li>fork must not be called if the command doesn’t exist</li>
</ul>
<h3>4. Simple shell 0.4</h3>
<p>Simple shell 0.3 +</p>
<ul>
<li>Implement the exit built-in, that exits the shell</li>
<li>Usage: exit</li>
<li>You don’t have to handle any argument to the built-in exit</li>
</ul>
<h3>5. Simple shell 1.0</h3>
<p>Simple shell 0.4 +</p>
<ul>
<li>Implement the env built-in, that prints the current environment</li>
</ul>