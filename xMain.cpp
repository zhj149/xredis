#include "xRedis.h"
#include "xLzf.h"
#include <google/profiler.h>




char *ascii_logo =
"                _._                                                  \n"
"           _.-``__ ''-._                                             \n"
"      _.-``    `.  `_.  ''-._           redis 1.0 					  \n"
"  .-`` .-```.  ```\\/    _.,_ ''-._                                  \n"
" (    '      ,       .-`  | `,    )     Running in release			  \n"
" |`-._`-...-` __...-.``-._|'` _.-'|     Port: 6379                   \n"
" |    `-._   `._    /     _.-'    |  								  \n"
"  `-._    `-._  `-./  _.-'    _.-'                                   \n"
" |`-._`-._    `-.__.-'    _.-'_.-'|                                  \n"
" |    `-._`-._        _.-'_.-'    |                   				  \n"
"  `-._    `-._`-.__.-'_.-'    _.-'                                   \n"
" |`-._`-._    `-.__.-'    _.-'_.-'|                                  \n"
" |    `-._`-._        _.-'_.-'    |                                  \n"
"  `-._    `-._`-.__.-'_.-'    _.-'                                   \n"
"      `-._    `-.__.-'    _.-'                                       \n"
"          `-._        _.-'                                           \n"
"              `-.__.-'                                               \n";
int main()
{	
	ProfilerStart("test.prof"); // test.prof is the name of profile file
	printf("%s",ascii_logo);
	xRedis redis;
	redis.run();
	ProfilerStop(); 
	return 0;
}
