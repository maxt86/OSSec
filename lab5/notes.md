1. Что происходит при прерывании скрипта text-trap.sh? Объясните, почему.
	```
	Мы посылаем SIGINT (signal interrupt) с помощью ^C, поэтому срабатывает обработчик данного сигнала (sig trap)
	```
1. Напишите, по какой причине выводы команды `ls -l /proc/self` и `ls -l /proc/$$` отличаются?
	```sh
	ls -l /proc/self # self => PID ls
    ls -l /proc/$$ # $$ => PID sh
	```
1. Напишите, какие дескрипторы в выводе команды `ls -l /proc/self/fd` отвечают за stdin, stdout, stderr.
	```
     0 - stdin
     1 - stdout
     2 - stderr
	```
1. Что происходит с дескрипторами при перенаправлении потоков stdout и stderr в файлы при выполнении команды `ls -l /proc/self/fd > /tmp/ls.out 2> /tmp/ls.err`?
	```
	Они поменяются на ls.out и ls.err
	```
1. Запишите эту же команду, добавив к ней перенаправление потока stdin. Что изменилось?
	```
	Если входного файла нет, ошибка в ls.err, иначе в ls.out вывод директории /proc/self/fd
	```
1. Какой эффект наблюдается при выполнении команды `exec ps -l`?
	```
	Закрывается текущий терминал
	```
1. Что означает `pos` при выводе содержимого файла `/proc/$$/fdinfo/3`?
	```
	pos является смещением внутри файла
	```
1. Существует ли возможность читать содержимое файла test.out даже после его удаления? Почему так происходит?
	```
	cat test.out - ошибка, такой файла не существует
	cat <&4 - ничего. 4 теперь не обозначен (NULL)
	```
