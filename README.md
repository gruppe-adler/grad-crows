# grad-crows
Ambient Crows

# Features
* Firing near Trees leads to flocks of crows startling
* After the first shot the area is empty and no crows will react to shootings in this area
* Crows are flying to the edge of the map for despawn

# Params
* Startling Area Size
* Crows Count per Flock

# Setup

1) Download Files, put grad-crows into your mission folder
2) Put this into your description.ext
```
class cfgFunctions {
	#include "grad-crows\cfgFunctions.hpp"	
};

class cfgSounds {
	#include "grad-crows\cfgSounds.hpp"	
};
```
3)
Put this into your init.sqf
`execVM "grad-crows\init.sqf";`

4) done

http://www.gruppe-adler.de
