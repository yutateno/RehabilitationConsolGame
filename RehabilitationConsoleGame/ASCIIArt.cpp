#include "ASCIIArt.hpp"



/// ----------------------------------------------------------------------------------------------
void ASCIIArt::Draw(int t_ID)
{
	if (t_ID < 20)
	{
		SleepCout("　／￣＼");
		SleepCout("○ ／￣￣￣＼ヘ");
		SleepCout("　 /・　 ・　 ＼>");
		SleepCout("／￣￣￣＼　　 Ｖ|");
		SleepCout("｜ ――― ｜　　｜|");
		SleepCout("＼＿＿＿／　　 ∧|");
		SleepCout("　　＼　　　　／〉");
		SleepCout("　　　￣￣￣￣￣");
		SleepCout("　　ヽ(´･ω･)ﾉ");
		SleepCout("　　　 |　 /");
		SleepCout("　　　 UU");
	}
	else if (t_ID >= 20 && t_ID < 40)
	{
		SleepCout("　　∧,,∧　　.∧,,∧");
		SleepCout("　(´・ω・)　( *・ω・)");
		SleepCout("　 (つ=|||O　(つ=|||O");
		SleepCout("　 .＼≠≠／　.＼≠≠／");
		SleepCout("￣￣￣￣￣￣￣￣￣");
	}
	else if (t_ID >= 40 && t_ID < 60)
	{
		SleepCout(".（；：)");
		SleepCout(".(：；)");
		SleepCout("（；)");
		SleepCout("　[]　　　∧∧");
		SleepCout("　||　|可(・ω・`)");
		SleepCout("（ニニl Ｈ￣∪Ｈ￣|");
		SleepCout(". y.tb-O-◎◎―◎◎");
	}
	else if (t_ID >= 60 && t_ID < 80)
	{
		SleepCout("　　　　←");
		SleepCout("　　　　∧_∧");
		SleepCout("　　 ∧_∧･ω･`)　↑");
		SleepCout("↓　( ･ω･`)･ω･`)");
		SleepCout("　 く|　⊂)ω･`)");
		SleepCout("　　 (⌒　ヽ･`)");
		SleepCout("　　 ∪￣＼⊃");
	}
	else if (t_ID >= 80 && t_ID < 100)
	{
		SleepCout("ヘ＿＿／￣￣￣＼");
		SleepCout("＼ﾉ　 (･)　ヽ_＿)");
		SleepCout("　＼_ノ　　　丿");
		SleepCout("　　(ﾉー、　 |");
		SleepCout("　　　 ノ　　ヽ");
		SleepCout("　　　/　　｜ |");
		SleepCout("　　 ｜　　(_ノ");
		SleepCout("　　　＼　　/");
		SleepCout("　　　　)　/");
		SleepCout("　　　 (＿ﾉ");
	}
	else if (t_ID >= 100 && t_ID < 120)
	{
		SleepCout("　　　∧,,∧");
		SleepCout("　　 (・ω・｀) /|　");
		SleepCout("　／くＴ￣￣二=二] 三二─");
		SleepCout("　￣￣￣＼二＼");
	}
	else if (t_ID >= 120 && t_ID < 140)
	{
		SleepCout("　　　 ＿＿＿");
		SleepCout("　　 ／　　　▲");
		SleepCout("／￣　 ヽ　■■");
		SleepCout("●　　　　　■■");
		SleepCout("ヽ＿＿＿　　■■");
		SleepCout("　　　　）＝｜");
		SleepCout("　　　／　｜｜");
		SleepCout("　∩∩＿＿とﾉ");
		SleepCout("　しし───┘");
	}
	else if (t_ID >= 140 && t_ID < 160)
	{
		SleepCout("　　★★★★　　　★★★★");
		SleepCout("　★　　　　★　★　　　　★");
		SleepCout("　★　･*･ ∧_∧★∧_∧･*･　★");
		SleepCout("　★　’.　(｡･ω･)(･ω･｡)　’★");
		SleepCout("　　★　’･|　つ★と　|･’　★");
		SleepCout("　　　★　*ﾟ’･｡°｡･ﾟ’*　★");
	}
	else if (t_ID >= 160 && t_ID < 180)
	{
		SleepCout("　(´･ω･`)");
		SleepCout("＿(__つ/￣￣￣/");
		SleepCout("　　＼/　　 /");
		SleepCout("　　　 ￣￣￣");
		SleepCout("　(´･ω･`)");
		SleepCout("＿(　つ　ミ　　");
		SleepCout("　　＼￣￣￣＼ミ");
		SleepCout("　　　 ￣￣￣￣");
		SleepCout("　(´･ω･`)");
		SleepCout("＿(　　　)");
		SleepCout("　　＼￣￣￣＼");
		SleepCout("　　　 ￣￣￣￣");
	}
	else if (t_ID >= 180 && t_ID < 200)
	{
		SleepCout("　　/　　 /　　/　 /");
		SleepCout("　　＿n＿");
		SleepCout("　／//|ヾ ＼　/　/");
		SleepCout("　⌒⌒|⌒⌒");
		SleepCout("/　　 |∧_∧　/　 /");
		SleepCout("　　　|･ω･`)");
		SleepCout("　/　 Oと　 )　/　/");
		SleepCout("　 　 しーＪ｡｡｡｡｡");
	}
	else if (t_ID >= 200 && t_ID < 220)
	{
		SleepCout("　　　∧__,,∧");
		SleepCout("　ヽ(´・ω・`)ノ");
		SleepCout("♪　へ/　　/　♪");
		SleepCout("　　　ヽノ");
		SleepCout("　　　　＞");
	}
	else if (t_ID >= 220 && t_ID < 240)
	{
		SleepCout("　 　∧＿∧");
		SleepCout("　／(@・ω・@) ／＼　　");
		SleepCout("／|￣∪ ∪ ￣|＼／");
		SleepCout("|＿＿ ＿＿ |／");
		SleepCout("");
		SleepCout("　　 ∧＿∧∩ミ");
		SleepCout("　／(@・ω・@)っ ＼");
		SleepCout("／|￣∪￣ ￣ |＼／");
		SleepCout("|＿＿ ＿＿ |／");
	}
	else if (t_ID >= 240 && t_ID < 260)
	{
		SleepCout("　∧,,∧　 ∧,,∧");
		SleepCout("(　 ・ω)σ)・ω・)");
		SleepCout("( つ旦 ノ ( つ旦O)");
		SleepCout("と＿)＿) と＿)＿)");
	}
	else if (t_ID >= 260 && t_ID < 280)
	{
		SleepCout("(´･_･)");
		SleepCout("(´っ_c)");
		SleepCout("(´◎ω◎)");
		SleepCout("＿人人 人人＿");
		SleepCout("＞ (´◎ω◎) ＜");
		SleepCout("￣Y^Y^Y^Y￣");
	}
	else if (t_ID >= 280 && t_ID < 300)
	{
		SleepCout("┣””””┣””””┣””””┣””””┣””””");
		SleepCout("┣””””┣””””┣””””┣””””┣””””");
		SleepCout("　　　　∧_,,∧");
		SleepCout(".　　　(｀・ω・)");
		SleepCout("((;　＼と　　　つ");
		SleepCout("((（;;　ミ三三彡");
	}
	else if (t_ID >= 300 && t_ID < 320)
	{
		SleepCout("*　　。☆　　。*");
		SleepCout("　 ∧_∧　 .　∧∞∧");
		SleepCout("ヽ(・ω・)人(・∀・)ノ");
		SleepCout("　( O x.）（ 　 O)");
		SleepCout("。：　∪　　　∪。☆");
		SleepCout("☆。 :.+: +　o。。 。");
	}
	else if (t_ID >= 320 && t_ID < 340)
	{
		SleepCout("　 ∧_∧  　 ∧_∧");
		SleepCout("　( ･ω･)　 ( ･ω･)");
		SleepCout("［o⌒/⌒o　[o⌒/⌒o");
		SleepCout("|￣⌒⌒￣||￣⌒⌒￣|");
		SleepCout("∥二二二∥∥二二二∥");
		SleepCout("∥ ∧_∧ ∥∥ ∧_∧");
		SleepCout("　( ･ω･)　 ( -ω-) ");
		SleepCout("［o⌒/⌒o　[o⌒/⌒o");
	}
	else if (t_ID >= 340 && t_ID < 360)
	{
		SleepCout("．　　 ∧,,∧　 ∧,,∧");
		SleepCout("　∧ (´・ω・) (・ω・｀) ∧∧");
		SleepCout("(　´・ω)　Ｕ) ( つと ﾉ(ω・｀ )");
		SleepCout("｜　Ｕ (　　・) (・｀　　)　と ﾉ");
		SleepCout("　ｕ-ｕ （l 　　 ) (　　　ﾉu-ｕ");
		SleepCout("　　　　 `ｕ-ｕ’.　`ｕ-u’");
	}
	else if (t_ID >= 360 && t_ID < 380)
	{
		SleepCout("　　 ／￣￣￣＼");
		SleepCout("　 /　　　　　ヽ");
		SleepCout("　 / ＿＿＿＿＿ヽ");
		SleepCout("　｜ |　　　　 ｜|");
		SleepCout("　｜ |　 ﾆ　ﾆ　 / |");
		SleepCout("　｜ |　　Ｊ　/ |");
		SleepCout("　｜ ヽ　 ～ ／　 |");
		SleepCout("　 ￣￣>ーイ ￣￣");
		SleepCout("　　　/ヽﾆﾉヽ");
	}
	else if (t_ID >= 380 && t_ID < 400)
	{
		SleepCout(".∩＿＿＿(￣`ヽ");
		SleepCout("/　⌒　　⌒ヽ |");
		SleepCout("|　＞　　＜ | |");
		SleepCout("|　 (_●_)　ミﾉ");
		SleepCout("彡､　|∪|　ノ /");
		SleepCout("　＿ﾉ￣)ﾉ　 /");
		SleepCout("＿＿_ノ　 /");
	}
	else if (t_ID >= 400 && t_ID < 420)
	{
		SleepCout("　　　　　(～)　");
		SleepCout("　　　　γ´⌒｀ヽ　　");
		SleepCout("　　　 {i:i:i:i:i:i:i:i:}");
		SleepCout("　　　（ ´･ω･｀）∫");
		SleepCout("　　　 （:::::::::つc□");
		SleepCout("￣￣￣￣￣￣￣￣￣￣￣￣￣|");
	}
	else if (t_ID >= 420 && t_ID < 440)
	{
		SleepCout(" 　 ┓　　　┏");
		SleepCout("　＊┗┓　┏┛");
		SleepCout("　　　┫　┣　＊");
		SleepCout("  　┏┳┻━┻┳┓");
		SleepCout("＊　┣　　━┃　＊");
		SleepCout("　┏┛　　〃┃");
		SleepCout("　┃●　　　┣━┳┓");
		SleepCout("　┗┻┳━━┛　┣┛");
		SleepCout("　＊　┃┏┓┣┓┃");
	}
	else if (t_ID >= 440 && t_ID < 460)
	{
		SleepCout("　　|＼＿／|");
		SleepCout("　　|―　―|");
		SleepCout("　　∧_∧_ノ_＿＿／/");
		SleepCout("　 (･ω･`)ﾆｬｰ　　　/");
		SleepCout("　 O旦⊂|　 ＿　　ヽ");
		SleepCout("　 ＯＯノ_／｣/_／＼｣");
	}
	else if (t_ID >= 460 && t_ID < 480)
	{
		SleepCout("　 ∧＿∧");
		SleepCout("　（　´∀｀）");
		SleepCout("　（　　　　）");
		SleepCout("　 ｜ ｜　|");
		SleepCout("　（_＿）＿）");
	}
	else if (t_ID >= 480 && t_ID < 500)
	{
		SleepCout("　　／￣￣￣￣＼");
		SleepCout("　/◆_==_◆　　　#＼");
		SleepCout("▼＿_______　　　Y　　Y");
		SleepCout("　∨ｗ∨Wヽヽ　|　　_|");
		SleepCout("　∧M∧M　)　　＼／");
	}
	else if (t_ID >= 500 && t_ID < 520)
	{
		SleepCout("　　　　　／￣￣＼　　");
		SleepCout(".　　　.／　_ノ　 ヽ");
		SleepCout("　　　 | 　（ ●) (●)");
		SleepCout("　　　 |   　（__人__） 　∫");
		SleepCout("　　　 |　　　｀⌒´ﾉ　∬");
		SleepCout(".　　　ヽ　　 　　　} |￣|");
		SleepCout("　　　　 ヽ　  　 ノ　|＿|）");
		SleepCout("＿＿__／　　　　　 ｲー┘ |");
		SleepCout("| |　　/　　/　　 　_＿＿/");
		SleepCout("| |　 /　　/　 　 　　|");
		SleepCout("| |　（　　　￣￣￣⌒ヽ");
		SleepCout("￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣|");
	}
	else if (t_ID >= 520 && t_ID < 540)
	{
		SleepCout("　 　　　＿＿＿_　　");
		SleepCout("　　　／　　 　 　＼");
		SleepCout("　 ／　　─　 　 ─＼　");
		SleepCout("／ 　　（●）  （●）＼");
		SleepCout("|　 　　 （__人__）    |　　");
		SleepCout("/　　　　 ∩ノ ⊃　　／");
		SleepCout("(　 ＼　／ ＿ノ　|　 |");
		SleepCout(".＼　“　／  ＿＿|　 | 　");
		SleepCout("　　＼ ／    ＿＿＿ ／ 　");
	}
	else if (t_ID >= 540 && t_ID < 560)
	{
		SleepCout("／⌒ヽ");
		SleepCout("　　/　´_ゝ`）");
		SleepCout("　　|　 　　/");
		SleepCout("　　| /|　|");
		SleepCout("　 //　| |");
		SleepCout("　Ｕ　 .Ｕ");
	}
	else if (t_ID >= 560 && t_ID < 580)
	{
		SleepCout("　__[警]");
		SleepCout("　　(　 )(ﾟДﾟ )");
		SleepCout("　　(　 )Ｖノ ）");
		SleepCout("　　 | |　　| |");
	}
	else if (t_ID >= 580 && t_ID <= 600)
	{
		SleepCout("　　　　　　　　　　－－－」　ヽ");
		SleepCout("　　　　　　　　　｜　　　＿＿　」");
		SleepCout("　　　　　　　　｜　＿―　　　　|");
		SleepCout("　　　　　　　　｜ ‐＿＿――‐┘　　");
		SleepCout("　　　　　　　　」　［v|||　〇　ヽ");
		SleepCout("　　　　＿＿  　――;;;;;　　　　｜");
		SleepCout("　　　/　　 ｜:::::::::::＼;;;;　┬　　　　　　　　　　　　　　　/　　／");
		SleepCout("　　｜　　　/:::／￣＼＼;;　 　匚　　　　　　　　　　　　　　　/／　　　　　　　　　　　　=≡二二二二二)");
		SleepCout("　　　＼　／:::|;; 　　　｜|＿＿」　＿＿＿＿＿＿＿　　/／");
		SleepCout("　　　｜　|:::::::|:　　　　::::|;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;|コ　　　　=≡二二二二二)");
		SleepCout("　　　|　　|:::::::ｊ:　　　　::::|;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;＿＿|　ヽ＼");
		SleepCout("　　｜　｜:::::|::　　　　:://;;;;;;;;;;;|￣￣￣￣￣￣| ―――┐ヽ＼　　　　　　　　　　　　　　　=≡二二二二二)");
		SleepCout("　　　|￣￣￣ヽ　　　　ヽ┬┬┐:　　||＿||_|| 　| ―――┘　ヽ　＼");
		SleepCout("　　　|::::::::::::::::::＼＿　　　|;;;;|　｜]―｜｜｜―");
		SleepCout("　　　|＿＿＿／　　　―┴┴コ＝　└┴┘");
	}
	else if (t_ID >= 601)
	{
		SleepCout("　　　　　　　　　　　　　　　　　∧∧");
		SleepCout("　　　　  ┃ 　 　┏━┃ 　 　　(,,ﾟ∀ﾟ) 　　　　┃┃");
		SleepCout("　　　　━┏┛  　┏━┃    　━━/　つ━━┛   .┃┃");
		SleepCout("　　　　━┏┛  　┛  ┃ 　    ～(　,ﾉつ　　　　 ┛┛");
		SleepCout("　　　　　┛ 　 　　　┛   　 　 (/　 　　　 　　.┛┛");
	}
}
