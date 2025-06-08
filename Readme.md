# ✅ Mini Unix Shell — Progress Tracker

## 📦 Phase 1: Core Shell Functionality

- [x] Show a prompt: `$ `
- [ ] Read user input using `getline()`
- [ ] Parse input into command and arguments
- [ ] Use `fork()` and `execvp()` to run commands
- [ ] Use `waitpid()` to wait for the child process
- [ ] Handle `exit` command
- [ ] Gracefully handle `Ctrl+D` (EOF)

## 📂 Phase 2: Built-in Commands

- [ ] `cd [dir]` — Change working directory
- [ ] `exit` — Exit the shell
- [ ] `help` — List supported built-in commands
- [ ] Error handling: invalid commands or paths

## 🔁 Phase 3: Input/Output Redirection

- [ ] Output redirection: `command > file.txt`
- [ ] Append output: `command >> file.txt`
- [ ] Input redirection: `command < file.txt`
- [ ] Use `dup2()` to redirect file descriptors

## 🔗 Phase 4: Pipes (`|`)

- [ ] Parse and split commands separated by `|`
- [ ] Create pipes with `pipe()`
- [ ] Connect input/output using `dup2()`
- [ ] Properly close unused pipe fds

## ⚠️ Phase 5: Signals and Process Handling

- [ ] Handle `SIGINT` (Ctrl+C) — don't kill the shell
- [ ] Handle `SIGQUIT` (Ctrl+\`)
- [ ] Reap zombie processes using `SIGCHLD` and `waitpid(-1, ...)`
- [ ] Reset signal handling in child processes

## 🛠 Phase 6: Code Structure & Makefile

- [ ] Organize code into multiple files:
  - [ ] `main.c`
  - [ ] `parser.c` / `parser.h`
  - [ ] `executor.c` / `executor.h`
  - [ ] `builtins.c` / `builtins.h`
  - [ ] `utils.c` / `utils.h`
- [ ] Makefile with targets: `all`, `run`, `clean`
- [ ] Compiler flags: `-Wall -Wextra -g`

## 🌟 Phase 7: Optional Advanced Features

- [ ] Background jobs: `sleep 10 &`
- [ ] Command history (e.g., `readline`)
- [ ] Tab auto-completion
- [ ] `.minishellrc` configuration file
- [ ] Custom prompt with user/cwd info or colors
