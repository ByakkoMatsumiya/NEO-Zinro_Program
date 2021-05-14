//ヘッダ呼び出し
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	//変数宣言部
	char a[32],b[32],c[32],d[32],killn[32];
	int ans,zin,ura,t,u,kaku,i,s,g,kill,la,lb,lc,ld,mura,zinro,key;
	mura = 3;
	zinro = 1;
	printf("変数宣言......\n\n\n");
	Sleep(1000);
	
	
	
	//プログラム起動部
	printf("プログラム起動......\n\n");
	Sleep(500);
	printf("人狼GMプログラム＠4人用\n");
	printf("このゲーム上では「はい」→1、「いいえ」→0を入力してください\n");
	printf("ゲーム中のスクロールは禁止となっております。ご了承ください。\n");
	printf("尚、膨大なプログラムによる処理落ちにより、システムが止まることがありますが、その場合は表示されるまでお待ちください。\n\n\n\n");
	Sleep(5000);
	
	
	
	//名前入力・議論時間設定部
	printf("※名前等は必ず英数字で入力してください(32文字以内)\n\n");
	do{
	printf("参加者Aの名前を入力してください＝＝＞");
	scanf("%s",&a);
	printf("参加者Bの名前を入力してください＝＝＞");
	scanf("%s",&b);
	printf("参加者Cの名前を入力してください＝＝＞");
	scanf("%s",&c);
	printf("参加者Dの名前を入力してください＝＝＞");
	scanf("%s",&d);
	printf("...\n\n");
	printf("昼の議論時間を入力してください。(秒単位)\n通常であれば120を入力してください(議論中に延長・短縮可能)→");
	scanf("%d",&g);
	
	
	
	//入力確認部
	printf("こちらの設定でよろしいでしょうか？\n\n参加者A→%s\n参加者B→%s\n参加者C→%s\n参加者D→%s\n\n議論時間→%d秒\n",a,b,c,d,g);
	printf("\nよろしければ1を、修正する場合は0を入力してください＝＝＞");
	scanf("%d",&ans);
	}while(!ans);
	printf("それではゲームを開始します。\n");
	Sleep(3000);
	
	
	
	//管理者用コード...101 初日夜シーケンス、102 議論フェーズ、103 投票フェーズ
	if(ans == 101){
		goto Night;
	}
	if(ans == 102){
		goto Discussion;
	}
	if(ans == 103){
		goto Voting;
	}
	
	
	
	//初日夜シーケンス開始
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	Night:
	printf("乱数生成中......\n>>>\n>>>\n>>>\n>>>\n");
	srand(time(NULL));
	zin = rand() % 4 + 1;
	ura = rand() % 4 + 1;
	
	printf("初日夜シーケンス開始......\n\n\n\n\n");
	Sleep(500);
	
	
	
	//初日夜、A認証
	do{
		printf("あなたは%sさんですか？　「はい」なら1を入力してください→",a);
		scanf("%d",&ans);
	}while(ans != 1);
	
	printf("\n認証完了\n\n");
	do{
	if(zin == 1){
		printf("あなたは人狼です\n");
	}else if(ura == 1){
		printf("あなたは占い師です\n");
		printf("誰を占いますか？\n");
		printf("%s= 2,%s= 3,%s= 4...",b,c,d);
		scanf("%d",&u);
		if(u == zin){
			printf("この人は人狼です\n");
		}else{
			printf("この人は人狼ではありません\n");
		}
	}else{
		printf("あなたは市民です。協力して人狼を排除しましょう\n");
	}
	printf("\n確認したら1を入力して下さい");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//初日夜、B認証
	do{
		printf("あなたは%sさんですか？　「はい」なら1を入力してください→",b);
		scanf("%d",&ans);
	}while(ans != 1);
	
	printf("\n認証完了\n\n");
	do{
	if(zin == 2){
		printf("あなたは人狼です\n");
	}else if(ura == 2){
		printf("あなたは占い師です\n");
		printf("誰を占いますか？\n");
		printf("%s= 1,%s= 3,%s= 4...",a,c,d);
		scanf("%d",&u);
		if(u == zin){
			printf("この人は人狼です\n");
		}else{
			printf("この人は人狼ではありません\n");
		}
	}else{
		printf("あなたは市民です。協力して人狼を排除しましょう\n");
	}
	printf("\n確認したら1を入力して下さい");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//初日夜、C認証
	do{
		printf("あなたは%sさんですか？　「はい」なら1を入力してください→",c);
		scanf("%d",&ans);
	}while(ans != 1);
	
	printf("\n認証完了\n\n");
	do{
	if(zin == 3){
		printf("あなたは人狼です\n");
	}else if(ura == 3){
		printf("あなたは占い師です\n");
		printf("誰を占いますか？\n");
		printf("%s= 1,%s= 2,%s= 4...",a,b,d);
		scanf("%d",&u);
		if(u == zin){
			printf("この人は人狼です\n");
		}else{
			printf("この人は人狼ではありません\n");
		}
	}else{
		printf("あなたは市民です。協力して人狼を排除しましょう\n");
	}
	printf("\n確認したら1を入力して下さい");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//初日夜、D認証
	do{
		printf("あなたは%sさんですか？　「はい」なら1を入力してください→",d);
		scanf("%d",&ans);
	}while(ans != 1);
	
	printf("\n認証完了\n\n");
	do{
	if(zin == 4){
		printf("あなたは人狼です\n");
	}else if(ura == 4){
		printf("あなたは占い師です\n");
		printf("誰を占いますか？\n");
		printf("%s= 1,%s= 2,%s= 3...",a,b,c);
		scanf("%d",&u);
		if(u == zin){
			printf("この人は人狼です\n");
		}else{
			printf("この人は人狼ではありません\n");
		}
	}else{
		printf("あなたは市民です。協力して人狼を排除しましょう\n");
	}
	printf("\n確認したら1を入力して下さい");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//議論時間部
	Discussion:
	printf("朝になりました。議論を開始して下さい。\n");
	printf("議論時間は%d秒です。%d秒経過時に短縮または延長を希望するかのメッセージが出ます\n必要に応じて入力してください。\n\n",g,3 * g / 4);
	printf("カウントダウン開始(内部処理)\n");
	Sleep(g * 750);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	printf("%d秒経過しました。1分延長するなら1を、短縮するなら2を、\nそれ以外なら0を入力してください==>",3 * g / 4);
	scanf("%d",&s);
	
	if (s == 1)
	{
			    printf("延長します。\n\n");
		        Sleep(60000);
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("延長を希望してから1分経ちました。さらに1分延長を希望する場合は1を入力してください。\n希望しない場合は0を入力してください。→");
		        scanf("%d",&s);
				if (s == 1)
				{
					printf("延長します。\n\n");
		            Sleep(60000);
					for(i = 0;i < 30;i++)
					{
						printf(">>>\n");
					}
		            printf("さらに延長を希望してから1分経ちました。これ以上の延長は出来ません\n\n");
				    Sleep(3000);
				}
	} else {
		if (s == 0)
		{
			printf("では、議論を続けてください。(タイマー再開)\n\n");
			Sleep(g * 250);
			for(i = 0;i < 30;i++)
			{
				printf(">>>\n");
			}
			printf("議論開始から%d秒が経過しました。1分延長なら1を、投票フェーズに移行するなら0を入力してください。→",g);
			scanf("%d",&s);
			if (s == 1)
			{
				printf("延長します。\n\n");
				
		        Sleep(60000);for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("さらに延長を希望してから1分経ちました。これ以上の延長は出来ません\n\n");
		        Sleep(3000);
			}
		}
	}
	
	
	
	
	//投票時間部
	Voting:
	printf("投票時間になりました。議論をやめてください。\n");
	Sleep(3000);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	printf("それでは、投票する人を決めてください。");
	printf("%s→1,%s→2,%s→3,%s→4\n",a,b,c,d);
	printf("誰を処刑しますか？＝＝＞");
	scanf("%d",&kill);
	
	
	
	//処刑部
	switch(kill)
	{
		case 1:la = 0;
		printf("%sさんを処刑します。\n",a);break;
		case 2:lb = 0;
		printf("%sさんを処刑します。\n",b);break;
		case 3:lc = 0;
		printf("%sさんを処刑します。\n",c);break;
		case 4:ld = 0;
		printf("%sさんを処刑します。\n",d);break;
	}
	Sleep(1000);
	if(kill == zin)
	{
		printf("\n\n人狼が処刑され、この村には平和が訪れました。\n\n市民チームの勝利です");
	}
	
	
	
	
	
	
	
	
	
	return 0;
	
}