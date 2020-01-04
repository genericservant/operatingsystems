More on processes
=

unix calls processes tasks.
each prcocess is linked to a thread.
$ ps
>> shows that ps and its all children
$ ps aux
>> shows al processes at that instance
$ top or htop
>> displays all processes realtime update

bash forks a process

basically goes into $PATH/proc/ and finds process information here
this is a non existant folder on disk exists in memory only
only used by kernal to communicate with user

$ps -Lf
