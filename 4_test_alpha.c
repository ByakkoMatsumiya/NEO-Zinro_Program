//ヘッダ呼び出し部
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	//変数宣言部
	char a[32],b[32],c[32],d[32];
	int ans,zin,ura,t,u,kaku,i,s,g,kill,la,lb,lc,ld,mura,zinro;
	mura = 3;
	zinro = 1;
	la = 1;
	lb = 1;
	lc = 1;
	ld = 1;
	
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
	printf("\n議論時間延長の際の秒数を指定して下さい。\n通常であれば60を入力してください→");
	scanf("%d",&t);
	
	
	
	//入力確認部
	printf("こちらの設定でよろしいでしょうか？\n\n参加者A→%s\n参加者B→%s\n参加者C→%s\n参加者D→%s\n\n議論時間→%d秒\n延長時間→%d秒",a,b,c,d,g,t);
	printf("\nよろしければ1を、修正する場合は0を入力してください＝＝＞");
	scanf("%d",&ans);
	}while(!ans);
	printf("それではゲームを開始します。\n");
	Sleep(3000);
	
	
	
	//管理者用コード...901 初日夜シーケンス、902 議論フェーズ、903 投票フェーズ、904 2日目夜シーケンス
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
	
	
	//初日夜シーケンス開始
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	Night1:
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
	printf("\n確認したら1を入力して下さい...");
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
	printf("\n確認したら1を入力して下さい...");
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
	printf("\n確認したら1を入力して下さい...");
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
	printf("\n確認したら1を入力して下さい...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	
	
	//議論時間部
	Discussion1:
	printf("朝になりました。議論を開始して下さい。\n");
	printf("議論時間は%d秒です。%d秒経過時に短縮または延長を希望するかのメッセージが出ます\n必要に応じて入力してください。\n\n",g,3 * g / 4);
	printf("カウントダウン開始(内部処理)\n");
	Sleep(g * 750);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	printf("%d秒経過しました。%d秒延長するなら1を、短縮するなら2を、\nそれ以外なら0を入力してください→",3 * g / 4, t);
	scanf("%d",&s);
	
	if (s == 1)
	{
			    printf("延長します。\n\n");
		        Sleep(t * 1000);
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("延長を希望してから%d秒経ちました。さらに%d秒延長を希望する場合は1を入力してください。\n希望しない場合は0を入力してください。→",t,t);
		        scanf("%d",&s);
				if (s == 1)
				{
					printf("延長します。\n\n");
		            Sleep(t *1000);
					for(i = 0;i < 30;i++)
					{
						printf(">>>\n");
					}
		            printf("さらに延長を希望してから%d秒経ちました。これ以上の延長は出来ません\n\n",t);
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
			printf("議論開始から%d秒が経過しました。%d秒延長なら1を、投票フェーズに移行するなら0を入力してください。→",g,t);
			scanf("%d",&s);
			if (s == 1)
			{
				printf("延長します。\n\n");
				
		        Sleep(t * 1000);
				
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("さらに延長を希望してから%d秒経ちました。これ以上の延長は出来ません\n\n",t);
		        Sleep(3000);
			}
		}
	}
	
	
	
	
	//投票時間部
	Voting1:
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
		zinro -= 1;
	}
	else
	{
		mura -= 1;
	}
	
	if(mura == zinro)
	{
		printf("\n\n人狼と市民チームの数が同数になってしまいました。\n\n人狼チームの勝利です\n\n\n");
		goto FIN;
	}
	else if(zinro == 0)
	{
		printf("\n\n人狼が処刑され、この村には平和が訪れました。\n\n市民チームの勝利です\n\n\n");
		goto FIN;
	}
	else
	{
		printf("\n\n夜になりました。これより2日目夜フェーズに入ります。\n\n");
		printf("la = %d\nlb = %d\nlc = %d\nld = %d\nzinro = %d\nmura = %d\n",la,lb,lc,ld,zinro,mura);
		Sleep(5000);
	}
	
	
	
	
	
	
	
	
	//2日目夜シーケンス開始
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	
	Night2:
	printf("2日目夜シーケンス開始......\n\n\n\n\n");
	Sleep(500);
	
	
	
	//2日目夜、A認証
	if(la == 0)
	goto A1;
	
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
	printf("\n確認したら1を入力して下さい...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	A1:
	
	
	
	//2日目夜、B認証
	if(lb == 0)
	goto B1;
	
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
	printf("\n確認したら1を入力して下さい...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	B1:
	
	
	
	//2日目夜、C認証
	if(lc == 0)
	goto C1;
	
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
	printf("\n確認したら1を入力して下さい...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	C1:
	
	
	
	//2日目夜、D認証
	if(ld == 0)
	goto D1;
	
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
	printf("\n確認したら1を入力して下さい...");
	scanf("%d",&ans);
	}while(ans != 1);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	D1:
	
	
	
	//議論時間部
	Discussion2:
	printf("朝になりました。議論を開始して下さい。\n");
	printf("議論時間は%d秒です。%d秒経過時に短縮または延長を希望するかのメッセージが出ます\n必要に応じて入力してください。\n\n",g,3 * g / 4);
	printf("カウントダウン開始(内部処理)\n");
	Sleep(g * 750);
	for(i = 0;i < 30;i++)
	{
		printf(">>>\n");
	}
	printf("%d秒経過しました。%d秒延長するなら1を、短縮するなら2を、\nそれ以外なら0を入力してください→",3 * g / 4, t);
	scanf("%d",&s);
	
	if (s == 1)
	{
			    printf("延長します。\n\n");
		        Sleep(t * 1000);
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("延長を希望してから%d秒経ちました。さらに%d秒延長を希望する場合は1を入力してください。\n希望しない場合は0を入力してください。→",t,t);
		        scanf("%d",&s);
				if (s == 1)
				{
					printf("延長します。\n\n");
		            Sleep(t *1000);
					for(i = 0;i < 30;i++)
					{
						printf(">>>\n");
					}
		            printf("さらに延長を希望してから%d秒経ちました。これ以上の延長は出来ません\n\n",t);
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
			printf("議論開始から%d秒が経過しました。%d秒延長なら1を、投票フェーズに移行するなら0を入力してください。→",g,t);
			scanf("%d",&s);
			if (s == 1)
			{
				printf("延長します。\n\n");
				
		        Sleep(t * 1000);
				
				for(i = 0;i < 30;i++)
				{
					printf(">>>\n");
				}
		        printf("さらに延長を希望してから%d秒経ちました。これ以上の延長は出来ません\n\n",t);
		        Sleep(3000);
			}
		}
	}
	
	
	
	//投票時間部
	Voting2:
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
		case 1:
		printf("%sさんを処刑します。\n",a);break;
		case 2:
		printf("%sさんを処刑します。\n",b);break;
		case 3:
		printf("%sさんを処刑します。\n",c);break;
		case 4:
		printf("%sさんを処刑します。\n",d);break;
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
		printf("\n\n人狼と市民チームの数が同数になってしまいました。\n\n人狼チームの勝利です\n\n\n");
		goto FIN;
	}
	else if(zinro == 0)
	{
		printf("\n\n人狼が処刑され、この村には平和が訪れました。\n\n市民チームの勝利です\n\n\n");
		goto FIN;
	}
	
	
	
	
	FIN:
	return 0;
	
}
