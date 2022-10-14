1. Какой процесс имеет наименьший идентификатор?
```bash
$ ps -Ao pid,comm --sort=pid | head -n 2
    PID COMMAND
      1 systemd
```
2. Какой идетификтор у вашего текущего shell-процесса?
```bash
$ ps -p $$
    PID TTY          TIME CMD
   4561 pts/1    00:00:00 bash
```
3. Сколько всего запущено процессов?
```bash
$ ps -A | wc -l
	353
```