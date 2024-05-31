#pragma once
#include <iostream> 
#include <windows.h> 
#include <ctime> 
#include <cstdlib>
#include <locale.h>
#include <string>
#include <conio.h>
using namespace std;

void Logo();

class Instruction
{
public:
	Instruction();
	virtual ~Instruction() {};
	void friend Logo();
};

class Game
{
public:
	virtual void play() = 0;
};

class WordleGame : public Game
{
private:
	string words[436] = { "kotek","trawa","wujek","drzwi","pozew","aloes","babka","palec","drink","remis","mango","czary","burak","polka","twoje","niebo","tasak","taras","totem","osoba","belka","racja","dawca",
"trans","pismo","karta","katar","karat","zebra","chory","elita","litry","wylot","aorta","alarm","oliwa","talia","narty","wylew","wzlot","awizo","larwa","rywal","tiara","walor","towar",
"wiara","werwa","wiatr","wrota","wiwat","wyraz","rower","zmora","admin","adres","afekt","afera","zgoda","agawa","agent","atomy","aglet","akcja","alert","aneks","antyk","sinus","owoce",
"arbuz","armia","arena","astma","atlas","ataki","awans","autor","bagno","bajka","bajty","balet","banan","barok","barka","basen","pasek","barwa","beton","bekon","bieda","bigos","bitwa",
"bobas","bolec","bomba","bonus","broda","brama","brzeg","bryza","budka","bulwa","burak","butan","burza","buzia", "cekin","celny","cezar","chips","chudy","ciosy","cisza","cygan","czara",
"dawka","delta","duchy","dusza","dzban","ebola","egipt","ekipa","ekran","efekt","epika","etyka","facet","fajka","fajne","farba","flora","fauna","felga","ferie","farma","figle","flaga",
"forma","forsa","fuzja","gracz","galop","gapie","gwara","gamma","gleba","gluty","gnomy","godny","grono","grota","groby","groza","grupa","guawa","gzyms","gumka","guzik","guzek","gwara",
"gwint","gyros","harfa","halka","harem","henna","hojny","hokej","humor","hydra","ikona","iskra","islam","jajko","jasno","jazda","jeden","jutro","kabel","kadra","kalka","karma","kebab",
"kibel","kiedy","klapa","klata","klasa","klucz","koala","kakao","kpocyk","kogut","kokos","kolba","kolka","komin","konik","kobra","korek","koszt","kosze","kozak","kpina","kreda","krowa",
"ksywa","kubek","kucyk","kujon","kursy","kurka","kwarc","kwota","lalka","lampa","larwa","laska","lekko","liana","linka","lista","lizak","login","lasso","lotto","lotos","lwica","mafia",
"magia","macka","magma","morze","maska","metro","miano","miara","minus","mleko","mlecz","mocno","motel","motto","motyw","mucha","napad","napis","nerwy","nauka","nazwa","nerka","niebo",
"ninja","nisko","nitka","norma","nurek","numer","obawa","obraz","obora","obrus","ocean","oczko","odzew","odlew","odrys","ogier","ohyda","okres","oliwa","omega","opora","opera","osada",
"pacha","pajda","palec","palma","panda","panna","praca","prasa","ptaki","patio","pegaz","picie","piast","pizza","plama","pliki","plony","poeta","poker","polak","polka","ponad",
"pompa","posag","potop","pozew","prawo","proza","psalm","psoty","pauza","puder","pulpa","puste","pycha","pyton","rabat","radio","ranek","razem","renta","robak","robot","rodeo","rogal",
"rogal","rondo","rozum","runda","rynek","rynna","rurka","rybka","rygor","rzeka","sabat","sadza","sakwa","salka","salsa","sandr","sarna","sauna","skala","schab","sedno","seans","serce",
"seria","sesja","sepia","sfera","siano","sitko","smaki","sosna","audio","spryt","srogo","sroka","ssaki","stado","start","stopy","stopa","sushi","suwak","sutek","syrop","szata","szopa"
"szyba","tacka","tafla","tajga","tango","taran","taras","tarka","tarta","tenis","tipsy","toast","topos","trema","trawa","trupy","tylko","ucisk","uczta","ugoda","ukrop","ulica","uroda",
"uszka","utarg","uwaga","wanna","wapno","warga","wazon","wasal","wdowa","werwa","wideo","widmo","wieko","wilki","winda","wirus","wnuki","wolne","wrona","wrzos","wujek","wydmy","wykaz",
"wymaz","wypad","wypis","wyrwa","wyrok","wysyp","wzory","jacht","zakaz","zalew","zamek","zamsz","zapas","zaspa","zbieg","zebra","zenit","zgaga","zgoda","zgred","zguba","zjazd","zmora",
"zorza" };
public:
	void play();
};