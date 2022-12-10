printf("\n----- Leaf Node CPUID(0x4FFFFFFC)-----\n\n");
        eax = 0x4FFFFFFC;
        __cpuid(&eax, &ebx, &ecx, &edx);
        printf("CPUID(0x4FFFFFFC), All Type Total Exit Counter = %u \n", eax);
        printf("EAX = %u  EBX = %u ECX = %u EDX = %u \n", eax, ebx, ecx, edx);


        printf("\n----- Leaf Node CPUID(0x4FFFFFFD)-----\n\n");
        eax = 0x4FFFFFFD;
        __cpuid(&eax, &ebx, &ecx, &edx);
        cycle_time = (unsigned long long) ebx << 32 | ecx;
        printf("CPUID(0x4FFFFFFD), All Type Total Exit Cycles = %llu \n", cycle_time);
        printf("EAX = %u  EBX = %u ECX = %u EDX = %u \n", eax, ebx, ecx, edx);

        printf("\n----- Leaf Node CPUID(0x4FFFFFFE)-----\n\n");
        for(i = 0; i < 75; i++) {
            eax = 0x4FFFFFFE;
            ecx = i;
            ecx_copy = ecx;
            __cpuid(&eax, &ebx, &ecx, &edx);
            printf("CPUID(0x4FFFFFFE), Type %u Total Exit Counter = %u \n", ecx_copy, eax);
            printf("EAX = %u  EBX = %u ECX = %u EDX = %u \n", eax, ebx, ecx, edx);
        }

        printf("\n----- Leaf Node CPUID(0x4FFFFFFF)-----\n\n");
        for(i = 0; i < 75; i++) {
            eax = 0x4FFFFFFF;
            ecx = i;
            ecx_copy = ecx;
            __cpuid(&eax, &ebx, &ecx, &edx);
                cycle_time = (unsigned long long) ebx << 32 | ecx;
            printf("CPUID(0x4FFFFFFF), Type %u Total Exit Cycles = %llu \n", ecx_copy, cycle_time);
            printf("EAX = %u  EBX = %u ECX = %u EDX = %u \n", eax, ebx, ecx, edx);
        }
