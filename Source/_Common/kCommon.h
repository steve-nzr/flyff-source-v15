//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-
/*
															`.-`
													   .:/+oo++oo+/:-
													.+sso++++///+++oss+-
						 .                       `./yysooo++o--o+++oosyh+:-..``             ``.-://.
						 shysoo+/:--..--:/++oshdmmmhyso/.-+syhhhs+-.:osyhdmmddhyysoo+////+osyyyhmmmy`
						sdmmdyo+ooo+++++ooossssyyyhhy/. `:oshddhso:` `:syhossoooo+++++///////ohhydsyy`
					  `sy+sh+syy+/:------::::://::hys/-` .:+osso+/- `-/syh:.::::::--....--/oys//ho//oy.
					 `ys///ss///ss+:-.....---:::`+hhyyss+///+++++//+ssyyhhs `:::--.....-:os+::/so/::/oy:
					.yo/:::/s+::::+s+:.....--:-  /hhhyyyssoooooooosssyyhhho  `-:--....-+o/---:/s/----:+s+.
				   :s+:----:+s/--..-/o/-...--:`   ohhhyyyyssssysssyyyyhhhs`   `:--..-/o/.....-s/-..`...-/o+-
				 :o+:-..``..-oo-.....-/+/:--::    `shhhhhhhhhyyhhhhyhhhhy`     ::::/+/-..```./o-.````...-://::.
			   -++/-...````..:o:.```...-/+///:     `/yhhhhhhyyyyhhhhhhh+.      ://++:--.....-o:......--..``  `.
			 :/--------......./+.....--::/+++:       `/yhhhhhhyhhhhhy/`        :++/:::------/+-----.`
			``       ``..-----:+:-::-.....--:-          .:/yhhhhy/:.           `.````   .-::+/::.`
						  `.-::++::.                       hNmmm.                         `:+-`
							  .:+.                         mmmmo
														  `mmmd`
														  -mmm+
														   yhs
														  `hh/
														  `hh-
														  `yy`
														   os.
														  :s-
														  .o-
														   o:
														   -+.`-`
															`//so:`
															  .++:-`
															   .o+:-`
																os+/
																 -/-
*/
//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define	NEUZ_TITLE	"[VS22] Ketchup V15"				//: Window title of the client.
#define	NEUZ_BHASH	"sunkist"							//: String to boot the client.
#define	NEUZ_IPSET	"127.0.0.1"							//: Ip of the server, must match AccountServer.ini & LoginServer.ini.
#define	NEUZ_CPORT	"5400"								//: Cache port, must match CacheServer.ini.
#define	NEUZ_PHASH	"kikugalanet"						//: Md5 password salt.
#define	NEUZ_MSGVR	"20100412"							//: Ver of the server, must match AccountServer.ini & LoginServer.ini.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define WEB_FIRST_PAGE	"http://mycoolflyff.com/index.html"
#define SERVER_ROOT		"/RESCLIENT/"
#define PATCHSEVER_URL	"patcher.mycoolflyff.com"
#define HOME_LINK		"http://mycoolflyff.com/"
#define REGISTER_LINK	"http://mycoolflyff.com/register.html"

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define COLOR_ADMINISTRATOR     0xFFFF4500				//: Name coloring of admin characters.
#define	TITLE_ADMINISTRATOR		"[Admin]"				//: Title for admin characters.

#define COLOR_GAMEMASTER        0xFFFF4500				//: Name coloring of gm characters.
#define	TITLE_GAMEMASTER		"[Gm]"					//: Title for gm characters.

enum { ENCHANT_TIME = 1 };								//: Adjust the time of upgrading.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-