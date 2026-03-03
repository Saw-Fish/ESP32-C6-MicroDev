## Preparing the device for use with ESPHome & Home Assistant

There are multiple ways you can flash the device for use with ESPHome, this is just one example and will work if your Home Assistant instance is not using https.

* Plug the board into a PC via the USB-C port.

* **Do not plug the board in via the USB-A Port.** This may damage the board.

* In Home Assistant, navigate to the ESPHome Builder and click **New Device**.

* Select **New Device Setup** and give it a name.

* Select device type, in this case **ESP32-C6**.

* When the configuration is created, select **Skip**. This will take you back to your ESPHome Builder dashboard where you can see the file you just created.

* Select **Edit** and copy paste any parts you need of the example yaml provided. Make sure your Wifi details, etc are correct. You can also add other options here such as Bluetooth Proxy or additional sensors.
   
* Click **Install** and when prompted choose **Plug into this computer**.

* ESPHome Builder will compile the file, after it is finished click **Download project** and select **Factory format** this will download a .bin file to your PC.

* Then follow the **Open ESPHome Web** link or go to https://web.esphome.io/

* Hit **Connect** and find your device in the list, it will usually start with USB JTAG.

* Click **Install** and select the previously downloaded .bin file and install the file.

* Once this is done you can check the logs from ESPHome Web to make sure the device has properly connected to your network, if nothing appears at first click **Reset Device**.

* Your device should now show as **ONLINE** in the ESPHome Builder dashboard.

* In Home Assistant you can navigate to Settings/Devices & services and your new device should appear at the top under **Discovered** you can now add it to Home Assistant.
