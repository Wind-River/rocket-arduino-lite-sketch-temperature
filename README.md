## Wind River Rocket [**Arduino-lite**](https://github.com/Wind-River/rocket-arduino-lite) API

# Arduino-lite Temperature Sketch  
A **Temperature** sensor is used to display ambient temperature     

***   

##  Required Hardware
 * [**Intel Galileo Gen 2**](http://www.intel.com/content/www/us/en/embedded/products/galileo/galileo-overview.html) or [**NXP FRDM-K64F**](http://www.nxp.com/products/software-and-tools/hardware-development-tools/freedom-development-boards/freedom-development-platform-for-kinetis-k64-k63-and-k24-mcus:FRDM-K64F)  
 * [**Grove Starter Kit**](http://www.seeedstudio.com/deled/Grove-Starter-Kit-for-Arduino-p-1855.html)
   * **Temperature** sensor  (connected to **A0**).  
 
## Hardware Configuration

1. Power off the **Intel Galileo Gen 2** or **NXP FRDM-K64F** before connecting shield or sensors  

2. Ensure that the **VCC** switch on the **Grove Shield** is appropriate for the device:  
* **5V** for the **Intel Galileo Gen 2**; or   
* **3.3V** for the **NXP FRDM-K64F**

3. Locate the **Temperature sensor** and insert one end of a 4-pin cable into the connector.

4. On the Grove Shield, locate the connector labeled **A0** and insert the other end of the 4-pin cable.


## Output
The temperature is displayed in the Console of the Helix App Cloud IDE.
```
Temperature is 25.04
Temperature is 25.04
Temperature is 25.40
```

