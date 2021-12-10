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
	fprintf(FP, "%d:プログラム起動完了\n", (time(NULL) - timer));
	fprintf(FP, "%d:ヘッダー読み込み完了\n", (time(NULL) - timer));
	fprintf(FP, "%d:関数宣言完了\n", (time(NULL) - timer));
	fprintf(FP, "%d:グローバル変数宣言完了\n", (time(NULL) - timer));
	fprintf(FP, "初期設定が完了しました\n\n");
	
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
	
	fprintf(FP, "%d:配役初期人数設定完了\n", (time(NULL) - timer));
	
	printf("プログラム起動......\n\n");
	Sleep(500);
	printf("人狼GMプログラム＠4人用\n");
	printf("このゲーム上では「はい」→1、「いいえ」→0を入力してください\n");
	printf("ゲーム中のスクロールは禁止となっております。ご了承ください。\n");
	printf("尚、膨大なプログラムによる処理落ちにより、システムが止まることがありますが、その場合は表示されるまでお待ちください。\n\n\n\n");
	Sleep(5000);
	
	fprintf(FP, "%d:プレイヤー情報入力開始\n", (time(NULL) - timer));
	
	printf("※名前等は必ず英数字で入力してください(32文字以内)\n\n");
	
	do{
		for(i = 0; i < 4; i++){
			printf("参加者%dの名前を入力してください==>",i + 1);
			scanf("%s",&player[i].player_name);
			player[i].player_posi = 0;
			player[i].player_life = 1;
		}
		printf("...\n\n");
		fprintf(FP, "%d:プレイヤー情報入力完了\n", (time(NULL) - timer));
		
		printf("昼の議論時間を入力してください。(秒単位)\n通常であれば120を入力してください(議論中に延長・短縮可能)→");
		scanf("%d",&systems.set_time);
		
		printf("\n議論時間延長の際の秒数を指定して下さい。\n通常であれば60を入力してください→");
		scanf("%d",&systems.set_add_time);
		fprintf(FP, "%d:議論時間・延長時間設定完了\n", (time(NULL) - timer));
		
		printf("\n\n\nこちらの設定でよろしいでしょうか？\n\n");
		
		for(i = 0; i < 4; i++){
			printf("参加者%d==>%s\n", i + 1, &player[i].player_name);
		}
		printf("\n議論時間→%d秒、延長時間→%d秒", systems.set_time, systems.set_add_time);
		
		printf("\nよろしければ1を、修正する場合は0を入力してください==>");
		scanf("%d",&systems.setting_accept);
		printf("\n\n\n");
	}while(!systems.setting_accept);
	fprintf(FP, "%d:ルール承認完了\n", (time(NULL) - timer));
	
	printf("それではゲームを開始します。\n");
	fprintf(FP, "%d:ゲーム設定完了\n", (time(NULL) - timer));
	
	Sleep(3000);
	display_hide();
	fprintf(FP, "%d:ゲーム開始\n", (time(NULL) - timer));
}


void random_position(){
	
	do{
		srand(time(NULL));
		systems.zinro_player = rand() % 4;
		systems.uranai_player = rand() % 4;
	}while(systems.zinro_player == systems.uranai_player);
	
	fprintf(FP, "%d:乱数生成完了\n", (time(NULL) - timer));
	
	player[systems.zinro_player].player_posi = 1;
	player[systems.uranai_player].player_posi = 2;
	fprintf(FP, "%d:人狼・占い師配役完了\n", (time(NULL) - timer));
}


void night_1st_day(){
	int i;
	
	do{
		printf("あなたは%sさんですか？　「はい」なら1を入力してください==>",player[night_turn].player_name);
		scanf("%d",&player[night_turn].player_ans);
	}while(player[night_turn].player_ans != 1);
	
	if(player[night_turn].player_posi == 1){
		printf("あなたは人狼です\n");
	}else if(player[night_turn].player_posi == 2){
		printf("あなたは占い師です\n");
		printf("誰を占いますか？(1:%s, 2:%s, 3:%s, 4:%s)==>", player[0].player_name, player[1].player_name, player[2].player_name, player[3].player_name);
		scanf("%d",&player[night_turn].player_ans);
		
		if(player[night_turn].player_ans == systems.zinro_player + 1){
			printf("この人は人狼です\n");
		}else{
			printf("この人は人狼ではありません");
		}
	}
	else{
		printf("あなたは市民です。協力して人狼を排除しましょう\n");
	}
	
	do{
		printf("\n確認したら1を入力して下さい...");
		scanf("%d",&player[night_turn].player_ans);
	}while(player[night_turn].player_ans != 1);
	
	display_hide();
}

void discussion_time_everyday(){
	int i;
	
	printf("朝になりました。議論を開始して下さい。\n");
	printf("議論時間は%d秒です。%d秒経過時に短縮または延長を希望するかのメッセージが出ます\n必要に応じて入力してください。\n\n", systems.set_time, systems.set_time * 0.75);
	printf("カウントダウン開始(内部処理)\n");
	Sleep(systems.set_time * 0.75);
	extended_time = systems.set_time * 0.75;
	display_hide();
	printf("%d秒経過しました。%d秒延長するなら1を、短縮するなら2を、\nそれ以外なら0を入力してください→", systems.set_time * 0.75, systems.set_add_time);
	scanf("%d", &discussion_extend);
	switch(discussion_extend){
		case 0:
			printf("タイマー再開します\n");
			Sleep(systems.set_time * 0.25);
			extended_time += systems.set_time * 0.25;
			break;
		case 1:
			printf("延長します\n");
			Sleep(systems.set_add_time);
			extended_time += systems.set_add_time;
			break;
		case 2:
			printf("短縮します\n");
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