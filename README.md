# Battery
Battery Charging Limit utility for linux to extend battery lifespan 
NOTE: tested on Asus Vivobook 15 pro
Utility is writtin in C so in order to compile it you need alteast a C Compiler preffered ```GCC```
```Setup.sh``` is script which will create a startapp Service so when you bootup your computer it will autmatically call BatteryLimitUtil and set the charging limit
Note Dafault Value of ChargingLimit is set to 60 you can customize it by
```
[Service]
ExecStart=/usr/bin/vbat YOUR_DESIRED_CHARGING_THRESHOLD 
```

Give executable permission to Setup.sh

```
chmod u+x ./Script.sh
```

Than Simple Execute Script.sh 

```
./Script.sh

```
Now you are ready to Go :)
