//�w�b�_�Ăяo��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	//�ϐ��錾��
	char a[32],b[32],c[32],d[32];
	int ans,zin,ura,t,u,kaku,i,s,g,kill,la,lb,lc,ld,mura,zinro;
	mura = 3;
	zinro = 1;
	la = 1;
	lb = 1;
	lc = 1;
	ld = 1;
	
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
	printf("\n�c�_���ԉ����̍ۂ̕b�����w�肵�ĉ������B\n�ʏ�ł����60����͂��Ă���������");
	scanf("%d",&t);
	
	
	
	//���͊m�F��
	printf("������̐ݒ�ł�낵���ł��傤���H\n\n�Q����A��%s\n�Q����B��%s\n�Q����C��%s\n�Q����D��%s\n\n�c�_���ԁ�%d�b\n�������ԁ�%d�b",a,b,c,d,g,t);
	printf("\n��낵�����1���A�C������ꍇ��0����͂��Ă�������������");
	scanf("%d",&ans);
	}while(!ans);
	printf("����ł̓Q�[�����J�n���܂��B\n");
	Sleep(3000);
	
	
	
	//�Ǘ��җp�R�[�h...901 ������V�[�P���X�A902 �c�_�t�F�[�Y�A903 ���[�t�F�[�Y�A904 2���ږ�V�[�P���X
	if(ans == 901){
		goto Night1;
	}
	if(ans == 902){
		goto Discussion1;
	}
	if(ans == 903){
		goto Voting1;
	}
	if(ans == 904){
		goto Night2;
	}
	
	
	//������V�[�P���X�J�n
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	Night1:
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
	printf("\n�m�F������1����͂��ĉ�����...");
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
	printf("\n�m�F������1����͂��ĉ�����...");
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
	printf("\n�m�F������1����͂��ĉ�����...");
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
	printf("\n�m�F������1����͂��ĉ�����...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//�c�_���ԕ�
	Discussion1:
	printf("���ɂȂ�܂����B�c�_���J�n���ĉ������B\n");
	printf("�c�_���Ԃ�%d�b�ł��B%d�b�o�ߎ��ɒZ�k�܂��͉�������]���邩�̃��b�Z�[�W���o�܂�\n�K�v�ɉ����ē��͂��Ă��������B\n\n",g,3 * g / 4);
	printf("�J�E���g�_�E���J�n(��������)\n");
	Sleep(g * 750);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	printf("%d�b�o�߂��܂����B%d�b��������Ȃ�1���A�Z�k����Ȃ�2���A\n����ȊO�Ȃ�0����͂��Ă���������",3 * g / 4, t);
	scanf("%d",&s);
	
	if (s == 1)
	{
			    printf("�������܂��B\n\n");
		        Sleep(t * 1000);
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("��������]���Ă���%d�b�o���܂����B�����%d�b��������]����ꍇ��1����͂��Ă��������B\n��]���Ȃ��ꍇ��0����͂��Ă��������B��",t,t);
		        scanf("%d",&s);
				if (s == 1)
				{
					printf("�������܂��B\n\n");
		            Sleep(t *1000);
					for(i = 0;i < 30;i++)
					{
						printf(">>>\n");
					}
		            printf("����ɉ�������]���Ă���%d�b�o���܂����B����ȏ�̉����͏o���܂���\n\n",t);
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
			printf("�c�_�J�n����%d�b���o�߂��܂����B%d�b�����Ȃ�1���A���[�t�F�[�Y�Ɉڍs����Ȃ�0����͂��Ă��������B��",g,t);
			scanf("%d",&s);
			if (s == 1)
			{
				printf("�������܂��B\n\n");
				
		        Sleep(t * 1000);
				
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("����ɉ�������]���Ă���%d�b�o���܂����B����ȏ�̉����͏o���܂���\n\n",t);
		        Sleep(3000);
			}
		}
	}
	
	
	
	
	//���[���ԕ�
	Voting1:
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
		zinro -= 1;
	}
	else
	{
		mura -= 1;
	}
	
	if(mura == zinro)
	{
		printf("\n\n�l�T�Ǝs���`�[���̐��������ɂȂ��Ă��܂��܂����B\n\n�l�T�`�[���̏����ł�\n\n\n");
		goto FIN;
	}
	else if(zinro == 0)
	{
		printf("\n\n�l�T�����Y����A���̑��ɂ͕��a���K��܂����B\n\n�s���`�[���̏����ł�\n\n\n");
		goto FIN;
	}
	else
	{
		printf("\n\n��ɂȂ�܂����B������2���ږ�t�F�[�Y�ɓ���܂��B\n\n");
		printf("la = %d\nlb = %d\nlc = %d\nld = %d\nzinro = %d\nmura = %d\n",la,lb,lc,ld,zinro,mura);
		Sleep(5000);
	}
	
	
	
	
	
	
	
	
	//2���ږ�V�[�P���X�J�n
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	Night2:
	printf("2���ږ�V�[�P���X�J�n......\n\n\n\n\n");
	Sleep(500);
	
	
	
	//2���ږ�AA�F��
	if(la == 0)
	goto A1;
	
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
	printf("\n�m�F������1����͂��ĉ�����...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	A1:
	
	
	
	//2���ږ�AB�F��
	if(lb == 0)
	goto B1;
	
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
	printf("\n�m�F������1����͂��ĉ�����...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	B1:
	
	
	
	//2���ږ�AC�F��
	if(lc == 0)
	goto C1;
	
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
	printf("\n�m�F������1����͂��ĉ�����...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	C1:
	
	
	
	//2���ږ�AD�F��
	if(ld == 0)
	goto D1;
	
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
	printf("\n�m�F������1����͂��ĉ�����...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	D1:
	
	
	
	//�c�_���ԕ�
	Discussion2:
	printf("���ɂȂ�܂����B�c�_���J�n���ĉ������B\n");
	printf("�c�_���Ԃ�%d�b�ł��B%d�b�o�ߎ��ɒZ�k�܂��͉�������]���邩�̃��b�Z�[�W���o�܂�\n�K�v�ɉ����ē��͂��Ă��������B\n\n",g,3 * g / 4);
	printf("�J�E���g�_�E���J�n(��������)\n");
	Sleep(g * 750);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	printf("%d�b�o�߂��܂����B%d�b��������Ȃ�1���A�Z�k����Ȃ�2���A\n����ȊO�Ȃ�0����͂��Ă���������",3 * g / 4, t);
	scanf("%d",&s);
	
	if (s == 1)
	{
			    printf("�������܂��B\n\n");
		        Sleep(t * 1000);
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("��������]���Ă���%d�b�o���܂����B�����%d�b��������]����ꍇ��1����͂��Ă��������B\n��]���Ȃ��ꍇ��0����͂��Ă��������B��",t,t);
		        scanf("%d",&s);
				if (s == 1)
				{
					printf("�������܂��B\n\n");
		            Sleep(t *1000);
					for(i = 0;i < 30;i++)
					{
						printf(">>>\n");
					}
		            printf("����ɉ�������]���Ă���%d�b�o���܂����B����ȏ�̉����͏o���܂���\n\n",t);
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
			printf("�c�_�J�n����%d�b���o�߂��܂����B%d�b�����Ȃ�1���A���[�t�F�[�Y�Ɉڍs����Ȃ�0����͂��Ă��������B��",g,t);
			scanf("%d",&s);
			if (s == 1)
			{
				printf("�������܂��B\n\n");
				
		        Sleep(t * 1000);
				
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("����ɉ�������]���Ă���%d�b�o���܂����B����ȏ�̉����͏o���܂���\n\n",t);
		        Sleep(3000);
			}
		}
	}
	
	
	
	//���[���ԕ�
	Voting2:
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
		case 1:
		printf("%s��������Y���܂��B\n",a);break;
		case 2:
		printf("%s��������Y���܂��B\n",b);break;
		case 3:
		printf("%s��������Y���܂��B\n",c);break;
		case 4:
		printf("%s��������Y���܂��B\n",d);break;
	}
	Sleep(1000);
	if(kill == zin)
	{
		zinro -= 1;
	}
	else
	{
		mura -= 1;
	}
	
	if(mura == zinro)
	{
		printf("\n\n�l�T�Ǝs���`�[���̐��������ɂȂ��Ă��܂��܂����B\n\n�l�T�`�[���̏����ł�\n\n\n");
		goto FIN;
	}
	else if(zinro == 0)
	{
		printf("\n\n�l�T�����Y����A���̑��ɂ͕��a���K��܂����B\n\n�s���`�[���̏����ł�\n\n\n");
		goto FIN;
	}
	
	
	
	
	FIN:
	return 0;
	
}