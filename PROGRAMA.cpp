#include<stdio.h>
#include<stdlib.h>
int main()
{
int regiao;
do{
	printf("\n\n AGENDA PARA LIGACAO SEMANAL CLIENTE VENDEDOR CARLOS\n\n\n");
	printf("     0 PARA SAIR\n\n");
	printf("     1 SEGUNDA FEIRA REGIAO TELEMACO\n\n");
	printf("     2 TERCA FEIRA REGIAO CASTRO\n\n");
	printf("     3 QUARTA FEIRA REGIAO GUARAPUAVA\n\n");
	printf("     4 QUINTA FEIRA REGIAO SANTA CATARINA E UNIAO\n\n");
	printf("     5 SEXTA FEIRA REGIAO DE GUARAPUAVA\n\n");
	printf("     DIGITE O NUMERO QUE CORRESPONDE O DIA DA SEMANA SUA RESPECTIVA REGIAO\n\n");
	printf("     6 VOLTA MENU DIA DA SEMANA\n\n");
	scanf("%d",&regiao);
	switch (regiao){
		case 0:
			printf("   SAIR...\n");
			break;
		case 1:
			printf(" SEGUNDA FEIRA: ------------------------ <<CLIENTES REGIAO DE TELEMACO>>\n\n");			
			printf("\n CANDIDO DE ABREU - 154484 LUIZ CLEONI RODRIGUES LOPES (43 99985-2422)\n");
			printf("\n CANDIDO DE ABREU - 154911 CARLOS GERTENER (43 99677-1369)\n");
			printf("\n IMBAU ------------ 36216  SPOOL SR. LEONCIO (42 99934-6721)\n");
			printf("\n IMBAU ------------ 140635 CALHAS BARBOSA EDSON (42 99805-4779)\n");
			printf("\n IMBAU ------------ 144718 FRACTA ENGENHARIA (42 99104-2963)\n");
			printf("\n IMBAU ------------ 158863 CASA NOVA SIMONE (42 99836-0352)\n");
			printf("\n ORTIGUEIRA ------- 107353 SERRALHERIA PARANA KFE (42 98842-7460)\n");
			printf("\n RESERVA ---------- 20203  VANDERSON LUIZ SETTI (42 99922-8422)\n");
			printf("\n TELEMACO BORBA --- 123956 METALURGICA RESENDE ALESSANDRO (42 98826-3169 OU 42 99973-6911)\n");
			printf("\n TELEMACO BORBA --- 132490 SERRALHERIA FERRO E ARTE RUBINHO (42 99807-2892)\n");
			printf("\n TELEMACO BORBA --- 154706 AZAMBUJA (42 99921-0238)\n");
			break;
		case 2:
			printf(" TERCA FEIRA: ------------------------ <<CLIENTES REGIAO DE CASTRO>>\n\n");
			printf("\n CARAMBEI --------- 132491 LUCAS (42 99104-1064)\n");
			printf("\n CARAMBEI --------- 26315 ALEMAO ESQUADRIAS METALICAS (42 99807-0195)\n");
			printf("\n CARAMBEI --------- 37669 IRMAOS CAMARGO CONSTRUCAO CIVIL YASMIM (42 99144-4353)\n");
			printf("\n CASTRO ----------- 39929 JONATHAN CASTRO (42 99903-0511)\n");
			printf("\n CASTRO ----------- 136622 JOEL CALHAS (42 998009551)\n");
			printf("\n CASTRO ----------- 29758 ESTRUTURAS HERCULES SILMARA (42 99165-2233)\n");
			printf("\n CASTRO ----------- 147822 CALHAS ELITON LUIZ (42 99956-6104)\n");
			printf("\n ITARARE ---------- 127680 TIAGO CARDOSO (15 99830-9273)\n");
			printf("\n ITARARE ---------- 153496 BRUNO ROSA NIKOLAUS (15 99816-3166)\n");
			printf("\n ITARARE ---------- 148542 KAPRONEZAI (15 98804-0875)\n");
			printf("\n JAGUARIAIVA ------ 26354 BONFIM FRANCISCO (43 99911-2821)\n");
			printf("\n PIRAI DO SUL ----- 146796 BAIA (42 99863-4268)\n");
			printf("\n PIRAI DO SUL ----- 35280 KOBNER PRE-MOLDADOS (42 99945-1145)\n");
			printf("\n SENGES ----------- 138587 ROMULO (43 99950-6163)\n");
			printf("\n ARAPOTI ---------- 156593 MATOS & STOLBER LTDA MARCOS (43 99662-7258)\n");
			printf("\n CURITIBA --------- 153701 AZLUX ENGENHARIA (41 99978-4343)\n");
			printf("\n CAMPO LARGO ------ 146967 LS PRECON (41 99111-2225)\n");
			break;
		case 3:
			printf(" QUARTA FEIRA: ---------------------<<CLIENTES REGIAO DE GUARAPUAVA>>\n\n");
			printf("\n PRUDENTOPOLIS ---- 109137 JLM CONSTRUCOES (42 99833-1962)\n");
			printf("\n PRUDENTOPOLIS ---- 82920 SERRALHERIA NOVOSSADE (42 99927-8993)\n");
			printf("\n PRUDENTOPOLIS ---- 23424 LEANE MARIA LUNKES (42 99825-4007)\n");
			printf("\n PRUDENTOPOLIS ---- 12155 LUCIANO ZIEGMANN - PAINEIS (42 99927-1870)\n");
			printf("\n PRUDENTOPOLIS ---- 147382 MANINHO CALHAS (42 99872-1906)\n");
			printf("\n PRUDENTOPOLIS ---- 148036 M A METALURGICA AGILIZA LTDA (42 99811-0535)\n");
			printf("\n PRUDENTOPOLIS ---- 117849 CALHAS IGUACU (42 99958-3539)\n");
			printf("\n PRUDENTOPOLIS ---- 116875 VISUAL DO BRASIL (42 99982-2603)\n");
			printf("\n IMBITUVA --------- 123071 CLEITO (42 99979-6916)\n");
			printf("\n IMBITUVA --------- 160167 KOMUNIK COMUNICACAO VISUAL E DIGITAL (42 99918-7158)\n");
			printf("\n IRATI ------------ 131963 DG CALHAS (42 99823-4457)\n");
			printf("\n IRATI ------------ 139456 ADRIANA SERAFIM (42 98417-6661)\n");
			printf("\n IRATI ------------ 102694 CONSTRUCALHAS E TELHADOS (42 99865-5029)\n");
			printf("\n IRATI ------------ 147639 LEAL ESQUADRIAS E SOLDAS (42 9934-7369)\n");
			printf("\n IRATI ------------ 13212 CRIART DIGITAL LTDA (42 99976-3761)\n");
			printf("\n IRATI ------------ 134645 SINALZ COMUNICACAO VISUAL (42 99935-1799)\n");
			break;
		case 4:
			printf(" QUINTA FEIRA: ---------------------<<CLIENTES REGIAO DE SANTA CATARINA E UNIAO>>\n\n");
			printf("\n ANTONIO OLINTO --- 132803 JJ MULTILOJA (42 98831-0059)\n");
			printf("\n ANTONIO OLINTO --- 148723 HSS (42 8811-4062)\n");
			printf("\n ANTONIO OLINTO --- 141562 MARCIANO (42 98801-0196)\n");
			printf("\n CANOINHAS -------- 11895 COMERCIO DE CALHAS (47 99906-5789)\n");
			printf("\n CANOINHAS -------- 12218 ARLON ANDREY SILVA (47 99996-4834)\n");
			printf("\n CANOINHAS -------- 102088 OSNI DIAS RIBEIRO (47 9941-6553)\n");
			printf("\n CANOINHAS -------- 154702 SOS CALHAS (47 99189-7962)\n");
			printf("\n CANOINHAS -------- 155734 CASTELAR REPRESENTACAO (47 9945-1162)\n");
			printf("\n CANOINHAS -------- 159400 LM CHAPAS E BOBINAS DE ACO VANDER (47 99941-5362)\n");
			printf("\n CRUZ MACHADO ----- 138437 C.A.L CONSTRUCOES (42 98832-8209)\n");
			printf("\n CRUZ MACHADO ----- 157791 GRAFICA FORMATO (42 98833-3016)\n");
			printf("\n IRINEOPOLIS ------ 34049 COMERCIAL SAO JOSE (47 99168-1687)\n");
			printf("\n IRINEOPOLIS ------ 37708 SERRALHERIA LEAO (47 99175-6991)\n");
			printf("\n IRINEOPOLIS ------ 109427 V F CALHAS (47 99210-8378)\n");
			printf("\n IRINEOPOLIS ------ 122594 GILMAR LEMES DA SILVA (47 99210-8378)\n");
			printf("\n IRINEOPOLIS ------ 132627 LUCIANO (47 99187-1397)\n");
			printf("\n IRINEOPOLIS ------ 132963 PRE MOLDADO IRINEOPOLIS MARCELO (47 99191-6021)\n");
			printf("\n IRINEOPOLIS ------ 138293 ESQUADRIAS FERRO BOM (47 99222-7045)\n");
			printf("\n IRINEOPOLIS ------ 146163 NELCY AMARAL (47 99914-5388)\n");
			printf("\n IRINEOPOLIS ------ 155952 BORINI MATERIAIS ELETRICOS (47 98484-0175)\n");
			printf("\n LAPA ------------- 97537 METALURGICA INDUSTRIAL BOSCH (41 99646-5558)\n");
			printf("\n LAPA ------------- 118319 REAL CALHAS (41 99618-8940)\n");
			printf("\n LAPA ------------- 129728 CLEITON FELIPE (41 99874-4365)\n");
			printf("\n LAPA ------------- 153920 RP MONTAGEM E MANUTENCAO (41 99772-2679)\n");
			printf("\n QUITANDINHA ------ 127084 IAREK METALURGICA (41 99612-2845)\n");
			printf("\n REBOUCAS --------- 85307 FORTE CALHAS FUNILARIA (42 99989-7051)\n");
			printf("\n PALMEIRA --------- 130490 TIAGO (41 99983-8272)\n");
			printf("\n PALMEIRA --------- 16564 SIMONE POPOASKI (42 99115-2320)\n");
			printf("\n RIO NEGRO -------- 12272 CALHAS RIO NEGRO (42 99179-2239)\n");
			printf("\n MALLET ----------- 33488 PAULO (42 99995-8199)\n");
			break;
		case 5:
			printf("SEXTA FEIRA: ---------------------<<CLIENTES REGIAO DE GUARAPUAVA>>\n\n");
			printf("\n PRUDENTOPOLIS ---- 109137 JLM CONSTRUCOES (42 99833-1962)\n");
			printf("\n PRUDENTOPOLIS ---- 82920 SERRALHERIA NOVOSSADE (42 99927-8993)\n");
			printf("\n PRUDENTOPOLIS ---- 23424 LEANE MARIA LUNKES (42 99825-4007)\n");
			printf("\n PRUDENTOPOLIS ---- 12155 LUCIANO ZIEGMANN - PAINEIS (42 99927-1870)\n");
			printf("\n PRUDENTOPOLIS ---- 147382 MANINHO CALHAS (42 99872-1906)\n");
			printf("\n PRUDENTOPOLIS ---- 148036 M A METALURGICA AGILIZA LTDA (42 99811-0535)\n");
			printf("\n PRUDENTOPOLIS ---- 117849 CALHAS IGUACU (42 99958-3539)\n");
			printf("\n PRUDENTOPOLIS ---- 116875 VISUAL DO BRASIL (42 99982-2603)\n");
			printf("\n IMBITUVA --------- 123071 CLEITO (42 99979-6916)\n");
			printf("\n IMBITUVA --------- 160167 KOMUNIK COMUNICACAO VISUAL E DIGITAL (42 99918-7158)\n");
			printf("\n PITANGA ---------- 13169 ART CALHAS (42 99967-4769)\n");
			printf("\n PITANGA ---------- 31985 NENEVE PRINT (42 99977-9305)\n");
			printf("\n PITANGA ---------- 84105 ADRIANO CALHAS (42 99815-8151)\n");
			printf("\n PITANGA ---------- 110146 LAURETH CALHAS E ESTRUTURAS METALICAS (42 99977-7987)\n");
			printf("\n PITANGA ---------- 115238 HELDON JOSE CEDORAK (42 99964-5137)\n");
			printf("\n PITANGA ---------- 138235 A. C. CONSTRUCOES (42 99943-0944)\n");
			printf("\n IVAI ------------- 89164 CALHAS CAMELO (42 9994-3332)\n");
			printf("\n IRATI ------------ 131963 DG CALHAS (42 99823-4457)\n");
			printf("\n IRATI ------------ 139456 ADRIANA SERAFIM (42 98417-6661)\n");
			printf("\n IRATI ------------ 102694 CONSTRUCALHAS E TELHADOS (42 99865-5029)\n");
			printf("\n IRATI ------------ 147639 LEAL ESQUADRIAS E SOLDAS (42 9934-7369)\n");
			printf("\n IRATI ------------ 13212 CRIART DIGITAL LTDA (42 99976-3761)\n");
			printf("\n IRATI ------------ 134645 SINALZ COMUNICACAO VISUAL (42 99935-1799)\n");
			break;
		case 6:
			system("cls");
			break;	
	default:
	printf("\n O VALOR DIGITADO NAO CORRESPONDE A NENHUMA EXECUCAO DO MENU\n");
}
	} while (regiao);
	return 0;
}
