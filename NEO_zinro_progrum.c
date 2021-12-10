#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

struct my_player_status{
	char player_name[32];
	int player_life;
	int player_posi;
	int player_ans;
};

struct my_player_status player[4];

struct my_game_systems{
	int zinro_player;
	int uranai_player;
	int mura_num;
	int zinro_num;
	int day_number;
	int set_time;
	int set_add_time;
	int setting_accept;
};

struct my_game_systems systems;

int timer;
int time_now;

FILE *FP;

int night_turn;
int discussion_extend;
int extended_time;

void start(void);
void random_position(void);

void night_1st_day(void);
void night_other_day(void);

void daytime_everyday(void);
void discussion_time_everyday(void);

void kill_time_everyday(void);

void display_hide(void);




void main(){
	int i;
	
	timer = time(NULL);
	FP = fopen("Log.txt", "w");
	fprintf(FP, "%d:�v���O�����N������\n", (time(NULL) - timer));
	fprintf(FP, "%d:�w�b�_�[�ǂݍ��݊���\n", (time(NULL) - timer));
	fprintf(FP, "%d:�֐��錾����\n", (time(NULL) - timer));
	fprintf(FP, "%d:�O���[�o���ϐ��錾����\n", (time(NULL) - timer));
	fprintf(FP, "�����ݒ肪�������܂���\n\n");
	
	start();
	random_position();
	for(night_turn = 0; night_turn < 4; night_turn++){
		night_1st_day();
	}
	
	if(systems.setting_accept == 100){
		
		for(i = 0; i < 4; i++){
			printf("%s,%d\n", player[i].player_name, player[i].player_posi);
		}
		fprintf(FP, "\n%d,%d,%d,%d,%d,%d\n", systems.zinro_player, systems.uranai_player, systems.zinro_num, systems.mura_num, systems.set_time, systems.set_add_time);
		
		for(night_turn = 0; night_turn < 4; night_turn++){
			night_1st_day();
		}
	}
	fclose(FP);
}




void start(){
	
	int i;
	
	systems.zinro_num = 1;
	systems.mura_num = 3;
	
	fprintf(FP, "%d:�z�������l���ݒ芮��\n", (time(NULL) - timer));
	
	printf("�v���O�����N��......\n\n");
	Sleep(500);
	printf("�l�TGM�v���O������4�l�p\n");
	printf("���̃Q�[����ł́u�͂��v��1�A�u�������v��0����͂��Ă�������\n");
	printf("�Q�[�����̃X�N���[���͋֎~�ƂȂ��Ă���܂��B���������������B\n");
	printf("���A�c��ȃv���O�����ɂ�鏈�������ɂ��A�V�X�e�����~�܂邱�Ƃ�����܂����A���̏ꍇ�͕\�������܂ł��҂����������B\n\n\n\n");
	Sleep(5000);
	
	fprintf(FP, "%d:�v���C���[�����͊J�n\n", (time(NULL) - timer));
	
	printf("�����O���͕K���p�����œ��͂��Ă�������(32�����ȓ�)\n\n");
	
	do{
		for(i = 0; i < 4; i++){
			printf("�Q����%d�̖��O����͂��Ă�������==>",i + 1);
			scanf("%s",&player[i].player_name);
			player[i].player_posi = 0;
			player[i].player_life = 1;
		}
		printf("...\n\n");
		fprintf(FP, "%d:�v���C���[�����͊���\n", (time(NULL) - timer));
		
		printf("���̋c�_���Ԃ���͂��Ă��������B(�b�P��)\n�ʏ�ł����120����͂��Ă�������(�c�_���ɉ����E�Z�k�\)��");
		scanf("%d",&systems.set_time);
		
		printf("\n�c�_���ԉ����̍ۂ̕b�����w�肵�ĉ������B\n�ʏ�ł����60����͂��Ă���������");
		scanf("%d",&systems.set_add_time);
		fprintf(FP, "%d:�c�_���ԁE�������Ԑݒ芮��\n", (time(NULL) - timer));
		
		printf("\n\n\n������̐ݒ�ł�낵���ł��傤���H\n\n");
		
		for(i = 0; i < 4; i++){
			printf("�Q����%d==>%s\n", i + 1, &player[i].player_name);
		}
		printf("\n�c�_���ԁ�%d�b�A�������ԁ�%d�b", systems.set_time, systems.set_add_time);
		
		printf("\n��낵�����1���A�C������ꍇ��0����͂��Ă�������==>");
		scanf("%d",&systems.setting_accept);
		printf("\n\n\n");
	}while(!systems.setting_accept);
	fprintf(FP, "%d:���[�����F����\n", (time(NULL) - timer));
	
	printf("����ł̓Q�[�����J�n���܂��B\n");
	fprintf(FP, "%d:�Q�[���ݒ芮��\n", (time(NULL) - timer));
	
	Sleep(3000);
	display_hide();
	fprintf(FP, "%d:�Q�[���J�n\n", (time(NULL) - timer));
}


void random_position(){
	
	do{
		srand(time(NULL));
		systems.zinro_player = rand() % 4;
		systems.uranai_player = rand() % 4;
	}while(systems.zinro_player == systems.uranai_player);
	
	fprintf(FP, "%d:������������\n", (time(NULL) - timer));
	
	player[systems.zinro_player].player_posi = 1;
	player[systems.uranai_player].player_posi = 2;
	fprintf(FP, "%d:�l�T�E�肢�t�z������\n", (time(NULL) - timer));
}


void night_1st_day(){
	int i;
	
	do{
		printf("���Ȃ���%s����ł����H�@�u�͂��v�Ȃ�1����͂��Ă�������==>",player[night_turn].player_name);
		scanf("%d",&player[night_turn].player_ans);
	}while(player[night_turn].player_ans != 1);
	
	if(player[night_turn].player_posi == 1){
		printf("���Ȃ��͐l�T�ł�\n");
	}else if(player[night_turn].player_posi == 2){
		printf("���Ȃ��͐肢�t�ł�\n");
		printf("�N��肢�܂����H(1:%s, 2:%s, 3:%s, 4:%s)==>", player[0].player_name, player[1].player_name, player[2].player_name, player[3].player_name);
		scanf("%d",&player[night_turn].player_ans);
		
		if(player[night_turn].player_ans == systems.zinro_player + 1){
			printf("���̐l�͐l�T�ł�\n");
		}else{
			printf("���̐l�͐l�T�ł͂���܂���");
		}
	}
	else{
		printf("���Ȃ��͎s���ł��B���͂��Đl�T��r�����܂��傤\n");
	}
	
	do{
		printf("\n�m�F������1����͂��ĉ�����...");
		scanf("%d",&player[night_turn].player_ans);
	}while(player[night_turn].player_ans != 1);
	
	display_hide();
}

void discussion_time_everyday(){
	int i;
	
	printf("���ɂȂ�܂����B�c�_���J�n���ĉ������B\n");
	printf("�c�_���Ԃ�%d�b�ł��B%d�b�o�ߎ��ɒZ�k�܂��͉�������]���邩�̃��b�Z�[�W���o�܂�\n�K�v�ɉ����ē��͂��Ă��������B\n\n", systems.set_time, systems.set_time * 0.75);
	printf("�J�E���g�_�E���J�n(��������)\n");
	Sleep(systems.set_time * 0.75);
	extended_time = systems.set_time * 0.75;
	display_hide();
	printf("%d�b�o�߂��܂����B%d�b��������Ȃ�1���A�Z�k����Ȃ�2���A\n����ȊO�Ȃ�0����͂��Ă���������", systems.set_time * 0.75, systems.set_add_time);
	scanf("%d", &discussion_extend);
	switch(discussion_extend){
		case 0:
			printf("�^�C�}�[�ĊJ���܂�\n");
			Sleep(systems.set_time * 0.25);
			extended_time += systems.set_time * 0.25;
			break;
		case 1:
			printf("�������܂�\n");
			Sleep(systems.set_add_time);
			extended_time += systems.set_add_time;
			break;
		case 2:
			printf("�Z�k���܂�\n");
			break;
	}
	display_hide();
}

void display_hide(){
	int i;
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
}