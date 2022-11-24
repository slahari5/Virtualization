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
