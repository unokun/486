/*
 *    v86iomon.h  ( List 13-11 )
 *    Copyright (C) Teruhisa Kamachi and ASCII Corp. 1994
 *    All rights reserved.
 *
 *    ���̃t�@�C���́w�͂��߂ēǂ�486�x�i�A�X�L�[�o�ŋǁj�Ɍf�ڂ���
 *    �v���O�����̈ꕔ�ł��B�v���O�������e�◘�p���@�ɂ��Ă͖{����
 *    �L�q���Q�Ƃ��Ă��������B
 */

/*
 *    List 13-11  �w�b�_�t�@�C��
 *                [v86iomon.h  1/1] (page 459)
 */

void SetUpV86IOmon(void);
void SetV86IOmonAddr(unsigned short port);
unsigned int v86IOIntHook(unsigned short cs, unsigned short ip,
    unsigned int opcode, unsigned short *ax, unsigned short dx);
void iomon(char *str, unsigned short a, unsigned short b,
    unsigned short c, unsigned short d);
void v86IOint(void);
