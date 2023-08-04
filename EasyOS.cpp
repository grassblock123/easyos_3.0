/*

[C] : Copyright by Create.Inc (2023) & Grassinternet.Inc [2022 - 2040]

[D] : Designed by Create.Inc (2023) in China

[A] : Assembled by Create.Inc (2023)

All rights revicesd.

Do not copy or change to other ways.

[<---------------------------------------EasyOS Configs--------------------------------------->]

Varibles :

EasyX - Core (A - Series)

Processor Useage : >= 1%	Memory Useage : >= 100KB	Disk Usedage : >= 10MB


Static OS : 

Processor Useage : >= 20%	Memory Useage : >= 12MB		Disk Usedage : >= 10MB



Passeds : 

Safely & Correctly "EasyOS" [2023.7.8]

[<-------------------------------------------------------------------------------------------->]



Creators & Buiders :

Zhujunjie_Official (github.com/zhujunjie-official)

Xbodw (github.com/xbodw , xbodw.github.io)

Srz / Srz Studio (github.com/srz123123)

不知道从哪里来的Win7 (bzdcnldw7.mysxl.cn)

<只因鱼溺水> (No Sources)

姜哥说电脑 (No Sources)

grass_block (grassinternet.mysxl.cn , github.com/grassblock123 , createc.mysxl.cn)

Inside builders : Create.Inc　(2023) , Grassinternet.Inc [2022 - 2040] , grassDevice corp. , 
grassArt corp. , grassBIOS corp. , ArmIC.Inc (2023) , Srz Studio (2023) , Github.Inc (2023)

[Thanks for these creators and builders !]



EasyOS 3.0
Product : EO - 3.0 - EC - A - S - R - 1.0.0
Inside Core : EasyX Core - A Series [Version : V.1.0.0-R-A]
EFI Virsion : 1.0.0
lang : C++/C
Thanks for your using! 

*/


//EasyX Core - A Series Area

#define do1 523
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <windows.h>
#define random(x)(rand()%x)
using namespace std;

//Define EasyX
	string passage;
	string syskey;
	string hardkey;
	string taskey;
	string tuborkey;
	
	int tubor;
	char retubor;
	int re_tu;
	int poweru;
	int screenon;
	int slti = 2000;
	
	int processor;
	int cores;
	int treads;
	int clock_t;
	int memory;
	int write;
	
	int faild = 0;
	int error = 0;
	int warns = 0;
	int issues = 0;
	vector <string> faild_con;
	vector <string> err_con;
	vector <string> war_con;
	vector <string> iss_con;
	int err_before = 0;
	int fai_before = 0;
	int war_before = 0;
	
	string tmps;
	string message;
	int tmp;
	char tmpc;
	
	string boot_way;
	vector <string> esd_lang;
	int esd_count;
	
	vector <int> devices_values;
	string devices_name[6] = {"Processsor" , "Cores" , "Treads" , "Clock Time" , "Memorys" , "Writen time"};;
	
	string lang;
	
	int refined_config;
	
	string funthings[10] = {
	"Now we have Pre and beta editions!",
	"Can you can a can?",
	"Oh,oh. We are better than ever! Oh,oh",
	"Smarter than ever , even starter your self!",
	"MLP Hurray!",
	"Ever you try anything \nthat anybody didn't do?",
	"Hip hip Hurray!",
	"JNTM",
	"宽某我爱死你了！",
	"Bee yee hu,gun/linux",
	};
	
	string way;
	int cpu_die[64] = {0};
	int memory_die[7744] = {0};
	int cnt;
	int c_top;
	int m_top;
	int cnt1,cnt2;
	
	vector <string> f_name;
	vector <string> f_info;
	int dir_n;
	int flag;
	
	int a;
	int h;
	
//EasyX Core Funtions
int proper(){
	if(err_before < error){
		cout << "Error Config : \n[Error " << error << "] : " << err_con[error - 1] << "\n";
		err_before = error;
		Sleep(slti);
	}else if(fai_before < faild){
		cout << "Faild Config : \n[Faild " << faild << "] : " << faild_con[faild - 1] << "\n";
		fai_before = faild;
		Sleep(slti);
	}else if(war_before < warns){
		cout << "Waring Config : \n[Waring " << warns << "] : " << war_con[warns - 1] << "\n";
		war_before = warns;
		Sleep(slti);
	}
	return 0;
}


int define_var(){
	passage = "EasyX Core RC - 100B";
	syskey = "EasyX&EasyOS is the best!";
	hardkey = "-vdY-|AcAB--T0Sx-0S1-|1EASSR-1NoT=EEW0NIT=1D";
	taskey = "C0pyrig&%tb^nte$%^&e#$*rr#a$%neygt.1ntnc&Crssi%^e.1&*ac";
	tuborkey = "V--TVERXC-LE--0-|LLS*INE^N|RYYTHW*#0R0#YA^G";
	poweru = 0;
	screenon = 0;
	slti = 20000;
	faild = 0;
	error = 0;
	issues = 0;
	warns = 0;
	tubor = 0;
	cnt = 0;
	c_top = 0;
	m_top = 0;
	retubor = 's';
	re_tu = 1;
	cnt1 = 0;
	cnt2 = 0;
	way = "EasyX_3.0";
	lang = "Static OS";
	refined_config = 2;
	issues ++;
	tmps = "define_varibles_value_in_system";
	iss_con.push_back(tmps);
	proper();
	return 0;
}

int boot_loader(){
	boot_way = "Static/EFI/Realty/easyos_lang.bwf";
	int esd_count = 0;
	esd_count ++;
	tmps = "access";
	esd_lang.push_back(tmps);
	issues ++;
	tmps = "load_in_boot_loader_and_wirte_value";
	iss_con.push_back(tmps);
	proper();
	return 0;
}

int init(){
	processor = 2;
	cores = 8;
	treads = 16;
	clock_t = 2048;
	memory = 8192;
	write = 2048;
	issues ++;
	tmps = "define_the_hardware_values";
	iss_con.push_back(tmps);
	proper();
	
	if(!tubor){
		processor *= 0.5;
		devices_values.push_back(processor);
		cores *= 0.5;
		devices_values.push_back(cores);
		treads *= 0.5;
		devices_values.push_back(treads);
		clock_t *= 0.5;
		devices_values.push_back(clock_t);
		memory *= 0.5;
		devices_values.push_back(memory);
		write *= 0.5;
		devices_values.push_back(write);
		issues += 6;
		issues ++;
		tmps = "belong_tubor_to_select_values";
		iss_con.push_back(tmps);
		proper();
		return 0;
	}else if(tubor){
		faild ++;
		tmps = "select_hardware_values_faild_meet_other_tubor_setting";
		faild_con.push_back(tmps);
		proper();
		if(retubor){
	  		cout << "\n[System] : Do you want to use the other tubor set? (.tubc) ['yes' or 'no']\n\n";
	  		cout << "[Tubor_set_input] << ";
	  		tmps = "input_tubor_set_choose";
	  		iss_con.push_back(tmps);
	  		cin >> tmps;
	  		issues += 1;
	  		if(tmps == "yes"){
	  			cout << "\n\n[System] : We are changing to other set... (.tubc)\n\n";
	  			processor *= re_tu;
				devices_values.push_back(processor);
				cores *= re_tu;
				devices_values.push_back(cores);
				treads *= re_tu;
				devices_values.push_back(treads);
				clock_t *= re_tu;
				devices_values.push_back(clock_t);
				memory *= re_tu;
				devices_values.push_back(memory);
				write *= re_tu;
				devices_values.push_back(write);
				issues ++;
				tmps = "belong_tubor_to_other_select_values";
				iss_con.push_back(tmps);
				proper();
				return 0;
			}else{
				cout << "\n\n[System] : We will use the default set\n\n[You can see it in website]\n\n";
				processor *= 0.5;
				devices_values.push_back(processor);
				cores *= 0.5;
				devices_values.push_back(cores);
				treads *= 0.5;
				devices_values.push_back(treads);
				clock_t *= 0.5;
				devices_values.push_back(clock_t);
				memory *= 0.5;
				devices_values.push_back(memory);
				write *= 0.5;
				devices_values.push_back(write);
				tmps = "belong_tubor_to_select_values";
				iss_con.push_back(tmps);
				proper();
				return 0;
			}
		}else{
			error += 1;
			tmps = "default_and_retubor_is_still_error";
			err_con.push_back(tmps);
			proper();
			return 0;
		}
	}
	return 0;
}

int system_cmp(){
	if(passage == "EasyX Core RC - 100B"){
		issues += 1;
		tmps = "compare_the_passen";
		iss_con.push_back(tmps);
		if(syskey == "EasyX&EasyOS is the best!"){
			issues += 1;
			tmps = "compare_the_system_key";
			iss_con.push_back(tmps);
			if(hardkey == "-vdY-|AcAB--T0Sx-0S1-|1EASSR-1NoT=EEW0NIT=1D"){
				issues += 1;
				tmps = "compare_the_hardware_key[reharded]";
				iss_con.push_back(tmps);
				if(taskey == "C0pyrig&%tb^nte$%^&e#$*rr#a$%neygt.1ntnc&Crssi%^e.1&*ac"){
					issues += 1;
					tmps = "compare_the_task_key";
					iss_con.push_back(tmps);
					if(tuborkey == "V--TVERXC-LE--0-|LLS*INE^N|RYYTHW*#0R0#YA^G"){
						issues += 1;
						tmps = "compare_the_tubor_key";
						iss_con.push_back(tmps);
						if(retubor){
							issues += 1;
							tmps = "loading_resorces_packs";
							iss_con.push_back(tmps);
						}else{
							error += 1;
							tmps = "loading_resorces_packs_error";
							err_con.push_back(tmps);
							proper();
						}
					}else{
						error += 1;
						tmps = "loading_tubor_key_error";
						err_con.push_back(tmps);
						proper();
					}
				}else{
					error += 1;
					tmps = "loading_task_key_error";
					err_con.push_back(tmps);
					proper();
				}
			}else{
				error += 1;
				tmps = "loading_hardware_key_error";
				err_con.push_back(tmps);
				proper();
			}
		}else{
			error += 1;
			tmps = "loading_system_key_error";
			err_con.push_back(tmps);
			proper();
		}
	}else{
		error += 1;
		tmps = "loading_the_passen_error";
		err_con.push_back(tmps);
		proper();
	}
	return 0;
}

int value_cmp(){
	if(!retubor){
		if(processor == 1){
			issues += 1;
			tmps = "compare_the_processor_data";
			iss_con.push_back(tmps);
			if(cores == 4){
				issues += 1;
				tmps = "compare_the_cores";
				iss_con.push_back(tmps);
				if(treads == 8){
					issues += 1;
					tmps = "compare_the_treads";
					iss_con.push_back(tmps);
					if(memory == 4096){
						issues += 1;
						tmps = "compare_the_memory_size";
						iss_con.push_back(tmps);
						if(write == 1024){
							issues += 1;
							tmps = "compare_the_memory_writen_times";
							iss_con.push_back(tmps);
							if(clock_t == 1024){
								issues += 1;
								tmps = "compare_the_processor_clock_time";
								iss_con.push_back(tmps);
								return 0;
							}else{
								error += 1;
								tmps = "compare_the_processor_clock_time_error";
								err_con.push_back(tmps);
								proper();
							}
						}else{
							error += 1;
							tmps = "compare_the_memory_writen_time_error";
							err_con.push_back(tmps);
							proper();
						}
					}else{
						error += 1;
						tmps = "compare_the_memory_size_error";
						err_con.push_back(tmps);
						proper();
					}
				}else{
					error += 1;
					tmps = "compare_the_treads_error";
					err_con.push_back(tmps);
					proper();
				}
			}else{
				error += 1;
				tmps = "compare_the_cores_error";
				err_con.push_back(tmps);
				proper();
			}
		}else{
			error += 1;
			tmps = "compare_the_processor_data_error";
			err_con.push_back(tmps);
			proper();
		}
	}else{
		tmps = "use_other_tubor_setting";
		warns += 1;
		war_before = warns;
		war_con.push_back(tmps);
	}
	return 0;
}

int efi(string lang){
	if(lang == "Exsi Virtual" && boot_way != "Static/EFI/Realty/easyos_lang.bwf"){
		cout << "\n\nNo EFI Source or lang\n\n";
		Beep(do1,500);
		Sleep(slti);
		issues ++;
		tmps = "into_efi_no_efi_cause_exsi_vir_and_boot_way";
		iss_con.push_back(tmps);
		proper();
		return 1;
	}else{
		Beep(do1,500);
		issues ++;
		tmps = "into_efi_access_no_efi_cause_core_system";
		iss_con.push_back(tmps);
		proper();
	}
	return 0;
}

int refind(int a){
	if(a == 3){
		error += 1;
		tmps = "into_refind_mode_error_no_enough_quest";
		err_con.push_back(tmps);
		proper();
		return 0;
	}else if(a == 2){
		return 0;
	}else if(a == 1){
		issues ++;
		tmps = "into_refind_mode_access";
		iss_con.push_back(tmps);
		cout << "Name : " << "		"  << "Varible Name : " << "		" << "Values"  << "		" << "Config Time"  << "		" << "Creator\n\n";
		for(int i = 0; i < 6; i++){
			cout << devices_name[i]  << "		" << "devices_name" << "		" << devices_values[i] << "		" << "2023/6/24"  << "		" << "Create.Inc\n";
		}
		cout << "\n\n\n";
		cout << "Temprature : " << "		" << "Usage" << endl;
		cout << "29 C" << "			" << "45%\n\n";
		cout << "Created by grassBIOS corp.\nArted by grassArt corp.\n[input 'exit' to exit]\n\n";
		while(1){
			cin >> tmps;
			if(tmps == "exit"){
				return 0;
			}else{
				cout << "Not Clr\n"; 
			}
		}
	}
	return 0;
}

int easyx(){
	define_var();
	boot_loader();
	init();
	system_cmp();
	value_cmp();
	refind(refined_config);
	if(efi(lang)){
		error ++;
		tmps = "process_system_error_cause_efi";
		err_con.push_back(tmps);
		return 1;
	}else{
		cout << "<---------------------------------------------------------------------------------------------------------------------->";
		cout << "                                                   EasyOS 3.0                    \n\n";
		cout << "EasyOS Hurray!\n";
		cout << "Something fun : \n\n" << funthings[random(9)] << "\n\n\n";
		cout << "Prediction : 3.0-R\nCore : v.1.0.0(ra)\n[C] : Create.Inc (2023)\n";
		cout << "<---------------------------------------------------------------------------------------------------------------------->\n\n\n";
		issues ++;
		tmps = "process_syste_and_into_oobe_access";
		iss_con.push_back(tmps);
		Sleep(400);
		return 0;
	}
}

int upload_c(int a){
	for(int i = c_top; i < c_top + a; i++){
		cpu_die[i] += 1;
	}
	c_top = c_top + a;
	if(c_top == 64){
		c_top = 0;
	}
	return 0;
}

int upload_m(int a){
	for(int i = m_top; i < m_top + a; i++){
		memory_die[i] += 1;
	}
	m_top = m_top + a;
	if(m_top == 64){
		m_top = 0;
	}
	return 0;
}

int pro_c(){
	for(int i = 0; i < 64; i++){
		if(cpu_die[i] == 1){
			cnt += 1;
		}
	}
	return cnt;
}

int mem_c(){
	for(int i = 0; i < 7744; i++){
		if(memory_die[i] == 1){
			cnt ++;
		}
	}
	return cnt;
}

int process_clr(){
	if(pro_c() >= 50){
		cnt /= 2;
	}
	return 0;
}

int mem_clr(){
	if(mem_c() >= 6017){
		cnt /= 100;
	}
	return 0;
}


//Static OS area

//Funtions

//System funtion & application

int help(){
	cout << "\n\nHelp UI : \n\n";
	cout << "System Funtion & Application : \n\n";
	cout << "Help communication" << "          " << "'help'" << "          " << "How to concact and communicate to this system\n";
	cout << "Task communication" << "          " << "'task'" << "          " << "See the processor and memory useage\n";
	cout << "OS communication" << "           " << "'easyver'" << "        " << "See the EasyOS virsion\n";
	cout << "File communication" << "          " << "'file'" << "          " << "To create and edit the files";
	cout << "\n\n\n\n";
	cout << "Communicate Applicaion : \n\n";
	cout << "Calculator app" << "          " << "'cal'" << "          " << "Calculates the values\n";
	cout << "Mineral" << "                 " << "'mine'" << "         " << "A game like minecraft\n\n\n";
	issues ++;
	tmps = "process_help_using";
	iss_con.push_back(tmps);
	//upload_c(10);
	//upload_m(100);
}

int task_alpha(){
	process_clr();
	mem_clr();
	cout << "\n\nTask Manager UI : \n\n\n\n";
	cout << "Processor Usage : \n\n";
	cout << "#- - - - - - - - -#                    #- - - - - - - - -#\n";
	for(int i = 0; i < 8; i++){
		cout << "| ";
		for(int j = 0; j < 8; j++){
			cout << cpu_die[i * 8] << " ";
		}
		cout << "|" << "                    " << "| ";
		for(int j = 0; j < 8; j++){
			cout << cpu_die[i * 968] << " ";
		}
		cout << "|" << endl;
	}
	cout << "#- - - - - - - - -#                    #- - - - - - - - -#\n\n";          
	/*cout << "| ";
	for(int i = 0; i < 64; i++){
		cout << cpu_die[i] << " ";
		cnt ++;
		if(cnt == 8){
			cout << "|" << endl;
			cnt = 0;	
		}
	}
	cout << "#- - - - - - - - -#                    #- - - - - - - - -#\n";*/
	cout << "Performance :                          Perfomance : \n[";
	process_clr();
	mem_clr();
	int ans = pro_c(); 
	for(int i = 0; i < (ans / 8); i++){
		cout << "==";
	}
	for(int i = 0; i < 8 - (ans / 8); i++){
		cout << "  ";
	}
	cout << "] " << (ans / 8) * 10 << "%                  [";
	ans = mem_c();
	for(int i = 0; i < (ans / 968); i++){
		cout << "==";
	}
	for(int i = 0; i < 8 - (ans / 968); i++){
		cout << "  ";
	}
	cout << "] " << ceil(ans / 100) << "%\n\n\n";
	cout << "About this processor :                 About Memory : \n\n";
	cout << "ArmIC(R) Virtual Processor             Create.Inc(R) Memory chips\n\n";
	printf("Clock time : %.1lfGhz;                   Stroging : %.1lfGB\n\
Caluacting : %.1lfGhz;                   Write time : %d\n\n\n",
	(double)clock_t / 1024.0,(double)memory / 1024.0,
	(double)clock_t * (pro_c() / 64 / 100),write); 
	issues ++;
	tmps = "process_task_broken_using";
	iss_con.push_back(tmps);
}

int task(){
	//upload_c(23);
	//upload_m(100);
	/*cout << "\n\nProcessor used : [";
	for(int i = 0; i <= pro_c() / 8; i++){
		cout << "=";
	}
	for(int i = 0; i <= 8 - (pro_c() / 8); i++){
		cout << " ";
	}
	cout << "]		" << pro_c() << "%" << endl;
	cout << "Memoroy used : [";
	for(int i = 0; i <= mem_c() / 968; i++){
		cout << "=";
	}
	for(int i = 0; i <= 8 - (mem_c() / 968); i++){
		cout << " ";
	}
	printf("]		%.2lfMB\n\n",mem_c() / 2048.0);*/
	cout << "\nAbout this processor :                 About Memory : \n\n";
	cout << "ArmIC(R) Virtual Processor             Create.Inc(R) Memory chips\n\n";
	printf("Clock time : %.1lfGhz;                   Stroging : %.1lfGB\n\
Caluacting : 0.0Ghz;                   Write time : %d\n\n",
	(double)clock_t / 1024.0,(double)memory / 1024.0,write);
	cout << "The broke taskmanager , maybe has some problem! (err404) \n\n\n";
	issues ++;
	tmps = "process_task_beta_(broke)_using";
	iss_con.push_back(tmps);
	return 0;
}

int cal(){
	issues ++;
	tmps = "process_caluator_using";
	iss_con.push_back(tmps);
	double a,b;
	char sign;
	cout << "Calulator UI : \n\n";
	cout << "How to input : \n";
	cout << "1.General Calulate : (num) (sign) (num)\n2.Exit : 0 0 0\n\n";;
	while(1){
		cout << "\ninput << ";
		cin >> a >> sign >> b;
		if(sign == '+'){
			printf("\nThe anwser is %.0lf\n",a + b);
			continue;
		}else if(sign == '-'){
			printf("\nThe anwser is %.0lf\n",a - b);
			continue;
		}else if(sign == '*' || sign == 'x'){
			printf("\nThe anwser is %.3lf\n",a * b);
			continue;
		}else if(sign == '/'){
			printf("\nThe anwser is %.3lf\n",a / b);
			continue;
		}else if(sign == '%'){
			printf("\nThe anwser is %d\n",(int)a % (int)b);
			continue;
		}else if(sign == '^'){
			printf("\nThe anwser is %.3lf\n",pow(a,b));
			continue;
		}else if(sign == '0' && a == 0 && b == 0){
			cout << "\n\n";
			return 0;
		}else{
			cout << "\nNot Clear Sign in Math or this Calulator!\n";issues ++;
			tmps = "process_caluator_meet_error_sign_not_clr";
			iss_con.push_back(tmps);
			continue;
		}
	}
	return 0;
}

int easy_ver(){
	cout << "\n\n<------------------------------->\n\n";
	cout << "About EasyOS : \n\n";
	cout << "Create.Inc EasyOS\nProduct 3.0 \n\n(Inside build 3.0.0 - R)\n\n\n[C] : Copyright by Create.Inc & Grassinternet.Inc\nAll rights revicesd\n\n\n";
	cout << "After 'Final Eula' , We accept underline user to use EasyOS:\n\n";
	cout << "		@manager\n\n\n";
	cout << "More Message : \n";
	cout << "\nAPI Edition : None of API!\n";
	cout << "\nApplication Edition : 3.1\n";
	cout << "\nHardware Driver : For EO 3.0\n";
	cout << "\nCore Edition : EasyX - A Series (1.0.0)\n";
	cout << "\nCreators : Zhujunjie_Official , Xbodw , Srz , 不知道从哪里来的Win7 , <只因鱼溺水> , 姜哥说电脑 , grass_block\n";
	cout << "\nThanks for your using!\n\n";
	cout << "<------------------------------->\n\n";
	issues ++;
	tmps = "process_easy_ver_using";
	iss_con.push_back(tmps);
	return 0;
}

int create(){
	cout << "\nFile name << ";
	cin >> tmps;
	f_name.push_back(tmps);
	cout << "\nFinish!\n\n";
	issues ++;
	tmps = "process_file_mgr_extra_create_using";
	iss_con.push_back(tmps);
	return 0;
}

int edit(string name,int dir){
	cout << "[Editing] * " << name << "(input '0' to end editing)\n\n";
	//cout << f_info[dir];
	cout << f_info[dir].length();
	/*while(tmps != "0"){
		cin >> tmps;
		string space = " ";
		int len = f_info[dir].length();
		f_info[dir].insert(len,space);
		f_info[dir].insert(len + 1,tmps);
	}*/
	issues ++;
	tmps = "process_file_mgr_extra_edit_using";
	iss_con.push_back(tmps);
	return 0;
}

int del1(int dir_n){
	f_name.at(dir_n) = "NONE_NAME";
	f_info.at(dir_n) = "NONE_INFO";
	issues ++;
	tmps = "process_file_mgr_extra_del_using";
	iss_con.push_back(tmps);
	return 0;
}

int fil_mgr(){
	issues ++;
	tmps = "process_file_mgr_using";
	iss_con.push_back(tmps);
	cout << "\nFile Manager UI : \n\n";
	cout << "__________		__________		__________\n";
	cout << "|        |		|        |		|        |\n";
	cout << "|    +   |		|    -   |		|    e   |\n";
	cout << "|   new  |		|   del  |		|  edit  |\n";
	cout << "|________|		|________|		|________|\n";
	cout << "\n(input the '+' to create a new one , '-' to delete , 'e' to edit , 'exit' to exit\n\n";
	while(1){
		cout << "Tasks << ";
		cin >> tmps;
		if(tmps == "+"){
			create();
		}else if(tmps == "-"){
			cout << "\nName of the File << ";
			cin >> tmps;
			for(int i = 0; i < f_name.size(); i++){
				if(f_name[i] == tmps){
					dir_n = i;
					break;
				}
			}
			del1(dir_n);
			cout << "\nFinish!\n\n";
		}else if(tmps == "e"){
			cout << "\nName of the File << ";
			cin >> tmps;
			for(int i = 0; i < f_name.size(); i++){
				if(f_name[i] == tmps){
					dir_n = i;
					flag = 0;
					break;
				}else{
					flag = 1;
				}
			}	
			if(flag == 1){
				cout << "\nThis file is NOT in the EasyOS!\nCheck out have you created that!\n\n";
				issues ++;
				tmps = "process_file_mgr_meet_error_file_not_clr";
				iss_con.push_back(tmps);
			}else{
				edit(tmps,dir_n);				
			}
		}else if(tmps == "exit"){
			cout << endl;
			issues ++;
			tmps = "exiting_file_mgr";
			iss_con.push_back(tmps);
			return 0;
		}else{
			cout << "\nNot clear!\n\n";
			issues ++;
			tmps = "process_file_mgr_meet_error_tasks_is_not_clr";
			iss_con.push_back(tmps);
		}
	}
	return 0;
}

int play(){
	cout << "\nGenering the world...\n\n";
	string map[a + 1][a + 1][h + 1] = {0};
	for(int x = 3; x <= h; x++){
		for(int i = 1; i <= a; i++){
			for(int j = 1; j <= a; j++){
				map[i][j][x] = random(3);
			}
		}
	}
	
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= a; j++){
			map[i][j][h] = "#"; 
		}
	}
	
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= a; j++){
			map[i][j][0] = "0"; 
		}
	}
	
	cout << "Genering Access! Into world...\n\n";
	dir_n = 1;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= a; j++){
			cout << map[i][j][dir_n];
		}
		cout << endl;
	}
	
	cout << "\n\nInto world access!\n\n";
	return 0;
}

int mine(){
	issues ++;
	tmps = "process_mineral_(broke)_using";
	iss_con.push_back(tmps);
	cout << "\n\nMineral Game UI : \n\n";
	cout << "Welcome to the new game - Mineral !";
	cout << "Tasks : \n";
	cout << "1.play - Play a new world\n2.exit - Exit the program\n";
	cout << "3.setting - Setting the game generals\n";
	cout << "4.ver - The game version\n(the testing program , cannot use!)\n\n";
	issues ++;
	tmps = "waiting_for_input";
	iss_con.push_back(tmps);
	while(1){
		cout << "Tasks << ";
		issues ++;
		tmps = "user_input_task";
		iss_con.push_back(tmps);
		cin >> tmps;
		if(tmps == "exit"){
			cout << "\n";
			return 0;
		}else{
			cout << "\nThe task is not open!\n\n";
			continue;
		}
	}
	return 0;
} 

//System Control Funtions

int top(){
	cout << "<--------------------------------------------------System Main--------------------------------------------------------->\n\n";
	return 0;
}

int sysreport(string say){
	if(err_before < error){
		cout << "\n[Error " << error << "] : \n“"  << say << "”" << err_con[error - 1] << "\n\n";
		err_before = error;
	}else if(fai_before < faild){
		cout << "\n[Faild " << faild << "] : \n“"  << say << "”" << faild_con[faild - 1] << "\n\n";
		fai_before = faild;
	}else if(war_before < warns){
		cout << "\n[Waring " << warns << "] : \n“"  << say << "”"  << war_con[warns - 1] << "\n\n";
		war_before = warns;
	}
	return 0;
}

int login(){
	cout << "Hello! The user @manager #64 !\n\nWelcome to use EasyOS 3.0!\nPlease enter anything to into system\n\n";
	cout << "[@manager #64 : password input] << ";
	cin >> tmps;
	cout << "\n\nWelcome back! @manager #64!\n\nPreparing desktop and services...\n[Teaing]\n\n";
	Sleep(500);
	issues ++;
	tmps = "login_to_system_access_with_no_password";
	iss_con.push_back(tmps);
	return 0;
}

int main_output(){
	cout << "[" << way << "] @manager #64 << ";
	issues ++;
	tmps = "waiting_for_users_commands";
	iss_con.push_back(tmps);
}

int process(){
	while(1){
		main_output();
		cin >> message;
		if(message == "help"){
			help();
			continue;
		}else if(message == "task"){
			task();
			continue;
		}else if(message == "cal"){
			cal();
			continue;
		}else if(message == "easyver"){
			easy_ver();
			continue;
		}else if(message == "file"){
			fil_mgr();
			continue;
		}else if(message == "mine"){
			mine();
			continue;
		}else{
			warns ++;
			tmps = "is not clear or reclear in EasyOS";
			war_con.push_back(tmps);
			Beep(do1,500);
			sysreport(message);
			continue;
		}
	}
}

int StaticOS(){
	easyx();
	login();
	top();
	process();
}

int main(){
	StaticOS();
	return 0;
}

