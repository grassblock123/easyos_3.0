/*

[C] : Copyright by Create.Inc (2023) & Grassinternet.Inc [2022 - 2040]

[D] : Designed by Create.Inc (2023) in China

[A] : Assembled by Create.Inc (2023)

All rights revicesd.

Do not copy or change to other ways.

Inside builders : Create.Inc　(2023) , Grassinternet.Inc [2022 - 2040] , grassDevice corp. , 
grassArt corp. , grassBIOS corp. , ArmIC.Inc (2023) , Github.Inc (2023) , Srz Studio (2023) 



---------------------------------------EasyX Core configs-------------------------------------------

Values:

*Because "EasyX Core" can't used by oneself , so these values are the "EasyX Core" used in system

Processor Useage : >= 1%	Memory Useage : >= 100KB	Disk Usedage : >= 10MB

处理器使用 : >= 1%		内存使用 : >= 100KB		磁盘使用 : >= 10MB
 
Использование процессора: > = 1% 
Использование памяти: > = 100 КБ 
Использование диска: > = 10 КБ

Prozessorauslastung : > = 1 % 
Speicherauslastung : > = 100 KB 
Festplattenauslastung : > = 10 MB

Uso del procesador : >= 1% 
Uso de memoria : >= 100KB 
Uso del disco : >= 10MB


Passeds : 

Safely & Truely of "EasyX Core" [2023.6.13]

"EasyX Core"的检测属性为 : 安全，正常的 (检测于2023年6月13日)

Безопасно и верно от "EasyX Core" [2023.6.13]

Sicher & Wahrhaftig von "EasyX Core" [2023.6.13]

Con seguridad y veracidad de "EasyX Core" [2023.6.13]
------------------------------------------------------------------------------------------------------

*/


/*

[<-------------------------------------The New Look!------------------------------------------>]

Grassinternet.Inc [2022 -2040] & Create.Inc (2023):

	This is the new product of our system core , it's become more easily , clearly , fastly 
	and useful. "EasyX Core" created and based on EasyOS(R) 2.0 , so it extented lots of fea-
	tures of EasyOS(R) 2.0 , also , EasyOS(R) 2.0 is based on "easycore" , but easycore is n-
	ot useful. it is slowly and worse than "EasyX Core" , the biggest bug in the "easycore"
	is the hardware safe. Everybody can open the file and change the values and then to hacked
	the system. So in this time , we deleted all of the value settings , who replace it? - the
	strings and the T/F values. We don't created it in the public enviroment , we created it in
	the personal enviroment. so you cannot change it before system strarting. it became more sa-
	fely. And soon we will use GUI in the EasyOS(R)!
	
	These are the news about the "EasyX Core" update , thanks for your use!
	
	- grassblock 
			-2023.6.13
*/

/*

[<-------------------------------------Some message------------------------------------------>]

Creators : 

Zhujunjie_Official (github.com/zhujunjie-official)

Xbodw (github.com/xbodw , xbodw.github.io)

不知道从哪里来的Win7 (bzdcnldw7.mysxl.cn)

<只因鱼溺水> (No Sources)

姜哥说电脑 (No Sources)

grass_block (grassinternet.mysxl.cn , github.com/grassblock123 , createc.mysxl.cn)

[Thanks for these these creators!]


EasyX Core [Full edition]
Product : R - 100A
Thanks for your using!

*/

//Maining codes

//C++ Head Librarys
#define do1 523
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;

//Define
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
	int tmp;
	char tmpc;
	
	string boot_way;
	vector <string> esd_lang;
	int esd_count;
	
	vector <int> devices_values;
	string devices_name[6] = {"Processsor" , "Cores" , "Treads" , "Clock Time" , "Memorys" , "Writen time"};;
	
	string lang;
	
	int refined_config;
	
//Funtions
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
	retubor = 's';
	re_tu = 1;
	lang = "Exsi Virtual";
	refined_config = 2;
	issues ++;
	tmps = "define_varibles_value_in_system";
	iss_con.push_back(tmps);
	proper();
	return 0;
}

int boot_loader(){
	boot_way = "EFI/Virtual/Easyx-core/boot_lang.bwy";
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

int starting_up(){
	cout << "--------------------EasyX - Core Starting up--------------------\n";
	cout << "\n[C] : Copyright by Create.Inc (2023) & Grassinternet.Inc [2022 - 2040]\n\n";
	cout << "[D] : Designed by Create.Inc (2023) in China\n\n";
	cout << "[A] : Assembled by Create.Inc (2023)\n\n";
	cout << "All rights revicesd.\n\n";
	cout << "-----------------------------------------------------------------\n\n";
	issues ++;
	tmps = "into_strating_up_funtion";
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
		war_con.push_back(tmps);
	}
	return 0;
}

int efi(string lang){
	if(lang == "Exsi Virtual"){
		cout << "\n\nNo EFI Source or lang\n\n";
		Beep(do1,1000);
		Sleep(slti);
		issues ++;
		tmps = "into_efi_no_efi_cause_exsi_vir";
		iss_con.push_back(tmps);
		proper();
	}else{
		cout << "\n\nThis is a core system , no EFI or System way...\n\n";
		Beep(do1,1000);
		Sleep(slti);
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
	starting_up();
	init();
	system_cmp();
	value_cmp();
	refind(refined_config);
	efi(lang);
	
	return 0;
}

int main(){
	easyx();
	return 0;
}
