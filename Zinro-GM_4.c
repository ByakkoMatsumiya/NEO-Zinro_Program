//�w�b�_�Ăяo��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	//�ϐ��錾��
	char a[32],b[32],c[32],d[32],killn[32];
	int ans,zin,ura,t,u,kaku,i,s,g,kill,la,lb,lc,ld,mura,zinro,key;
	mura = 3;
	zinro = 1;
	printf("�ϐ��錾......\n\n\n");
	Sleep(1000);
	
	
	
	//�v���O�����N����
	printf("�v���O�����N��......\n\n");
	Sleep(500);
	printf("�l�TGM�v���O������4�l�p\n");
	printf("���̃Q�[����ł́u�͂��v��1�A�u�������v��0����͂��Ă�������\n");
	printf("�Q�[�����̃X�N���[���͋֎~�ƂȂ��Ă���܂��B���������������B\n");
	printf("���A�c��ȃv���O�����ɂ�鏈�������ɂ��A�V�X�e�����~�܂邱�Ƃ�����܂����A���̏ꍇ�͕\�������܂ł��҂����������B\n\n\n\n");
	Sleep(5000);
	
	
	
	//���O���́E�c�_���Ԑݒ蕔
	printf("�����O���͕K���p�����œ��͂��Ă�������(32�����ȓ�)\n\n");
	do{
	printf("�Q����A�̖��O����͂��Ă�������������");
	scanf("%s",&a);
	printf("�Q����B�̖��O����͂��Ă�������������");
	scanf("%s",&b);
	printf("�Q����C�̖��O����͂��Ă�������������");
	scanf("%s",&c);
	printf("�Q����D�̖��O����͂��Ă�������������");
	scanf("%s",&d);
	printf("...\n\n");
	printf("���̋c�_���Ԃ���͂��Ă��������B(�b�P��)\n�ʏ�ł����120����͂��Ă�������(�c�_���ɉ����E�Z�k�\)��");
	scanf("%d",&g);
	
	
	
	//���͊m�F��
	printf("������̐ݒ�ł�낵���ł��傤���H\n\n�Q����A��%s\n�Q����B��%s\n�Q����C��%s\n�Q����D��%s\n\n�c�_���ԁ�%d�b\n",a,b,c,d,g);
	printf("\n��낵�����1���A�C������ꍇ��0����͂��Ă�������������");
	scanf("%d",&ans);
	}while(!ans);
	printf("����ł̓Q�[�����J�n���܂��B\n");
	Sleep(3000);
	
	
	
	//�Ǘ��җp�R�[�h...101 ������V�[�P���X�A102 �c�_�t�F�[�Y�A103 ���[�t�F�[�Y
	if(ans == 101){
		goto Night;
	}
	if(ans == 102){
		goto Discussion;
	}
	if(ans == 103){
		goto Voting;
	}
	
	
	
	//������V�[�P���X�J�n
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	Night:
	printf("����������......\n>>>\n>>>\n>>>\n>>>\n");
	srand(time(NULL));
	zin = rand() % 4 + 1;
	ura = rand() % 4 + 1;
	
	printf("������V�[�P���X�J�n......\n\n\n\n\n");
	Sleep(500);
	
	
	
	//������AA�F��
	do{
		printf("���Ȃ���%s����ł����H�@�u�͂��v�Ȃ�1����͂��Ă���������",a);
		scanf("%d",&ans);
	}while(ans != 1);
	
	printf("\n�F�؊���\n\n");
	do{
	if(zin == 1){
		printf("���Ȃ��͐l�T�ł�\n");
	}else if(ura == 1){
		printf("���Ȃ��͐肢�t�ł�\n");
		printf("�N��肢�܂����H\n");
		printf("%s= 2,%s= 3,%s= 4...",b,c,d);
		scanf("%d",&u);
		if(u == zin){
			printf("���̐l�͐l�T�ł�\n");
		}else{
			printf("���̐l�͐l�T�ł͂���܂���\n");
		}
	}else{
		printf("���Ȃ��͎s���ł��B���͂��Đl�T��r�����܂��傤\n");
	}
	printf("\n�m�F������1����͂��ĉ�����");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//������AB�F��
	do{
		printf("���Ȃ���%s����ł����H�@�u�͂��v�Ȃ�1����͂��Ă���������",b);
		scanf("%d",&ans);
	}while(ans != 1);
	
	printf("\n�F�؊���\n\n");
	do{
	if(zin == 2){
		printf("���Ȃ��͐l�T�ł�\n");
	}else if(ura == 2){
		printf("���Ȃ��͐肢�t�ł�\n");
		printf("�N��肢�܂����H\n");
		printf("%s= 1,%s= 3,%s= 4...",a,c,d);
		scanf("%d",&u);
		if(u == zin){
			printf("���̐l�͐l�T�ł�\n");
		}else{
			printf("���̐l�͐l�T�ł͂���܂���\n");
		}
	}else{
		printf("���Ȃ��͎s���ł��B���͂��Đl�T��r�����܂��傤\n");
	}
	printf("\n�m�F������1����͂��ĉ�����");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//������AC�F��
	do{
		printf("���Ȃ���%s����ł����H�@�u�͂��v�Ȃ�1����͂��Ă���������",c);
		scanf("%d",&ans);
	}while(ans != 1);
	
	printf("\n�F�؊���\n\n");
	do{
	if(zin == 3){
		printf("���Ȃ��͐l�T�ł�\n");
	}else if(ura == 3){
		printf("���Ȃ��͐肢�t�ł�\n");
		printf("�N��肢�܂����H\n");
		printf("%s= 1,%s= 2,%s= 4...",a,b,d);
		scanf("%d",&u);
		if(u == zin){
			printf("���̐l�͐l�T�ł�\n");
		}else{
			printf("���̐l�͐l�T�ł͂���܂���\n");
		}
	}else{
		printf("���Ȃ��͎s���ł��B���͂��Đl�T��r�����܂��傤\n");
	}
	printf("\n�m�F������1����͂��ĉ�����");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//������AD�F��
	do{
		printf("���Ȃ���%s����ł����H�@�u�͂��v�Ȃ�1����͂��Ă���������",d);
		scanf("%d",&ans);
	}while(ans != 1);
	
	printf("\n�F�؊���\n\n");
	do{
	if(zin == 4){
		printf("���Ȃ��͐l�T�ł�\n");
	}else if(ura == 4){
		printf("���Ȃ��͐肢�t�ł�\n");
		printf("�N��肢�܂����H\n");
		printf("%s= 1,%s= 2,%s= 3...",a,b,c);
		scanf("%d",&u);
		if(u == zin){
			printf("���̐l�͐l�T�ł�\n");
		}else{
			printf("���̐l�͐l�T�ł͂���܂���\n");
		}
	}else{
		printf("���Ȃ��͎s���ł��B���͂��Đl�T��r�����܂��傤\n");
	}
	printf("\n�m�F������1����͂��ĉ�����");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//�c�_���ԕ�
	Discussion:
	printf("���ɂȂ�܂����B�c�_���J�n���ĉ������B\n");
	printf("�c�_���Ԃ�%d�b�ł��B%d�b�o�ߎ��ɒZ�k�܂��͉�������]���邩�̃��b�Z�[�W���o�܂�\n�K�v�ɉ����ē��͂��Ă��������B\n\n",g,3 * g / 4);
	printf("�J�E���g�_�E���J�n(��������)\n");
	Sleep(g * 750);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	printf("%d�b�o�߂��܂����B1����������Ȃ�1���A�Z�k����Ȃ�2���A\n����ȊO�Ȃ�0����͂��Ă�������==>",3 * g / 4);
	scanf("%d",&s);
	
	if (s == 1)
	{
			    printf("�������܂��B\n\n");
		        Sleep(60000);
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("��������]���Ă���1���o���܂����B�����1����������]����ꍇ��1����͂��Ă��������B\n��]���Ȃ��ꍇ��0����͂��Ă��������B��");
		        scanf("%d",&s);
				if (s == 1)
				{
					printf("�������܂��B\n\n");
		            Sleep(60000);
					for(i = 0;i < 30;i++)
					{
						printf(">>>\n");
					}
		            printf("����ɉ�������]���Ă���1���o���܂����B����ȏ�̉����͏o���܂���\n\n");
				    Sleep(3000);
				}
	} else {
		if (s == 0)
		{
			printf("�ł́A�c�_�𑱂��Ă��������B(�^�C�}�[�ĊJ)\n\n");
			Sleep(g * 250);
			for(i = 0;i < 30;i++)
			{
				printf(">>>\n");
			}
			printf("�c�_�J�n����%d�b���o�߂��܂����B1�������Ȃ�1���A���[�t�F�[�Y�Ɉڍs����Ȃ�0����͂��Ă��������B��",g);
			scanf("%d",&s);
			if (s == 1)
			{
				printf("�������܂��B\n\n");
				
		        Sleep(60000);for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("����ɉ�������]���Ă���1���o���܂����B����ȏ�̉����͏o���܂���\n\n");
		        Sleep(3000);
			}
		}
	}
	
	
	
	
	//���[���ԕ�
	Voting:
	printf("���[���ԂɂȂ�܂����B�c�_����߂Ă��������B\n");
	Sleep(3000);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	printf("����ł́A���[����l�����߂Ă��������B");
	printf("%s��1,%s��2,%s��3,%s��4\n",a,b,c,d);
	printf("�N�����Y���܂����H������");
	scanf("%d",&kill);
	
	
	
	//���Y��
	switch(kill)
	{
		case 1:la = 0;
		printf("%s��������Y���܂��B\n",a);break;
		case 2:lb = 0;
		printf("%s��������Y���܂��B\n",b);break;
		case 3:lc = 0;
		printf("%s��������Y���܂��B\n",c);break;
		case 4:ld = 0;
		printf("%s��������Y���܂��B\n",d);break;
	}
	Sleep(1000);
	if(kill == zin)
	{
		printf("\n\n�l�T�����Y����A���̑��ɂ͕��a���K��܂����B\n\n�s���`�[���̏����ł�");
	}
	
	
	
	
	
	
	
	
	
	return 0;
	
}