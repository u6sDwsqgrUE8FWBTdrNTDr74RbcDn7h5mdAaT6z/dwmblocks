//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"echo $(if [ $(pamixer --get-mute) = true ]; then echo \"M \"; fi)$(pamixer --get-volume)%",	0,	10},
	{"",	"echo $(cat /sys/class/power_supply/BAT0/capacity)%",	60,	3},
	{"",	"date '+%a %F %H:%M:%S'",	1,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
