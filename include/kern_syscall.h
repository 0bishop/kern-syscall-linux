/*
** EPITECH PROJECT, 2023
** kern_syscall.h
** File description:
** Header file
*/

#ifndef SYSCALL_H_
    #define SYSCALL_H_
    #define NULL ((void *)0)
    #define SYSCALL(syscall_nb, fd, buffer, len) sys(syscall_nb, fd, buffer, len)


    #define ACCMODE 0003
    #define RDONLY  00
    #define WRONLY  01
    #define RDWR	02
    #ifndef CREAT
    #define CREAT   0100
    #endif
    #ifndef LARGEFILE
    #define LARGEFILE   0100000
    #endif

    #ifndef DIRECTORY
    #define DIRECTORY   0200000
    #endif

    typedef long unsigned int size_t;

    typedef enum {
        true,
        false
    }bool;

#endif
