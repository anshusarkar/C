// Inter process communication 
#include <stdio.h>
#include <stdlib.h>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <string.h>
int main()
{
    struct msgbuf
    {
        long mtype;
        char mtext[100];
    } send, recv;
    int qid, len;
    qid = msgget((key_t)25, IPC_CREAT | 0666);
    if (qid < 0)
    {
        perror("msg get failed");
        exit(1);
    }
    printf("\n Enter message for TTY-2:: "); //TTY stands for Termianl 
    scanf("%[^\n]s", send.mtext);
    send.mtype = 1;
    len = strlen(send.mtext);
    if (msgsnd(qid, &send, len, 0) == -1)
    {
        perror("messnd failed");
        exit(1);
    }
    if (msgrcv(qid, &recv, 100, 2, 0) == -1)
    {
        perror("message failed");
        exit(0);
    }
    printf("\n Message from TTY-2 is : %s\n", recv.mtext);
}
