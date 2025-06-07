# Project: Mini Unix Shell

A **Mini Unix Shell** is a simple version of the terminal (like `bash` or `zsh`) that you write yourself in C.

### 🔧 What does it do?

It does what a normal shell does — it:

1. **Shows a prompt** like this:

   ```
   $
   ```

   and waits for you to type something.

2. **Reads your command**, for example:

   ```
   ls -l
   ```

3. **Runs that command** by asking the operating system to start a new program (`ls` in this case).

4. **Prints the output**, just like the real terminal.

### 🧠 Why is it useful to build one?

Because it helps you understand:

- How a terminal works
- How your program talks to the OS
- How to use processes, memory, files, and input/output in C
- How things like `ls`, `cd`, or `grep` really run under the hood

It's like building your own tiny version of the terminal you use every day — and it forces you to use many of the most important features of the C language and Unix systems.

---

## 🧾 **Project Requirements: Mini Unix Shell in C**

### ✅ **Core Functionality**

1. **Prompt and Input**

   - Display a prompt (e.g., `$ `) and accept user input from stdin.
   - Support basic command execution with arguments (e.g., `ls -la`).

2. **Command Execution**

   - Parse user input into tokens.
   - Execute external programs using `fork()` and `execvp()`.
   - Wait for foreground processes to finish using `wait()`.

3. **Built-in Commands**

   - Implement at least these built-ins:

     - `cd [dir]`
     - `exit`
     - `help`

4. **Error Handling**

   - Gracefully handle invalid commands, failed forks, and exec errors.
   - Print helpful error messages.

---

### 🔁 **I/O Redirection**

5. **Output Redirection**

   - Support `>` for writing output to a file.

     - Example: `echo hello > out.txt`

6. **Input Redirection**

   - Support `<` for reading input from a file.

     - Example: `cat < input.txt`

---

### 🔗 **Pipes**

7. **Command Piping**

   - Support chaining commands using `|`.

     - Example: `ls -l | grep .c | wc -l`

---

### 🧠 **Process & Signal Handling**

8. **Signals**

   - Handle `Ctrl+C` (SIGINT) without terminating the shell.
   - Reap zombie child processes (handle `SIGCHLD`).

---

### 📁 **Modularity & Build**

9. **Code Structure**

   - Organize code into multiple `.c` and `.h` files.
   - Separate concerns: input parsing, execution, built-ins, utils, etc.

10. **Build System**

    - Provide a `Makefile` to build the shell.
    - Use `gcc` with appropriate flags (`-Wall -Wextra -g`).

---

### 🧪 **Optional Features (Stretch Goals)**

- Background execution with `&`
- Command history
- Tab auto-completion
- `.myshellrc` config file
- Colored or customizable prompt

---

Let me know if you'd like a checklist version or a markdown template for tracking your progress.
