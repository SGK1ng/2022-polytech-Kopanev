1. Какой процесс имеет наименьший идентификатор?
$ ps -Ao pid,comm --sort=pid | head -n 2
    PID COMMAND
      1 systemd
2. Какой идетификтор у вашего текущего shell-процесса?
$ ps -p $$
    PID TTY          TIME CMD
   4561 pts/1    00:00:00 bash
3. Сколько всего запущено процессов?
$ ps -A | wc -l
	353