# Virtualization

# Assignment - 1:

Steps:
1. Signup into a Google Cloud Platform account and create project for Virtualization.
2. When the project is created, Enable “Compute Engine API” for that project to create and manage Virtual Machines.
3. Once we enable Compute Engine API, create new Virtual Machine Instance or enable nested virtualization in an existing virtual machine.
4. Open the instance using “gcloud compute ssh <<instance_name>>” through the cloud shell or connect to the VM using SSH on the UI.
5. Install git using command line and clone the repository into the VM.
6. Open the cmpe283-1.c and make an updated version of cmpe283-1.c to incorporate the additional controls. 
7. Install "gcc make" on the machine. Command - "sudo apt install gcc make".
8. Install "linux headers" with username onto the machine. Command - "sudo apt install linux-headers-$(uname -r)".
9. After the installing, you can obtain the headers version which was installed using "uname -r".
10. Execute the “make” command to create the kernel object.
11. The make command will generate new files into the VM.
12. Insert kernel module into the VM by running "sudo insmod cmpe283-1.ko" (should be a root user or permission required)
13. To view the output, use the “dmesg” command.
14. Commit the changes, push them to git repository and stop the VM.

<img width="638" alt="entry" src="https://user-images.githubusercontent.com/99698941/203728963-7e34af99-233a-4be0-8a2c-6780b908e61e.png">

<img width="633" alt="Exit_Controls" src="https://user-images.githubusercontent.com/99698941/203728977-a53841ff-e666-4724-bf4c-08f7357cea7e.png">

<img width="662" alt="Pin_based_and_Proc_Primary" src="https://user-images.githubusercontent.com/99698941/203728987-414c21e6-8be6-4274-8d2d-a52e09589371.png">

<img width="678" alt="Proc_Secondary" src="https://user-images.githubusercontent.com/99698941/203728991-2becfae1-0355-421f-89fe-9daa34258a11.png">

#Questions:
1. For each member in your team, provide 1 paragraph detailing what parts of the lab that member 
implemented / researched. (You may skip this question if you are doing the lab by yourself) 
Ans. I completed this assigment alone.

2. Describe in detail the steps you used to complete the assignment. Consider your reader to be someone 
skilled in software development but otherwise unfamiliar with the assignment. Good answers to this 
question will be recipes that someone can follow to reproduce your development steps.
Ans. It is as described in detailed in the above description.
