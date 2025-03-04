#!/bin/bash

echo "Creating a Service file in /etc/systemd/system"
sudo rm -r  /etc/systemd/system/BatteryLimitCharin.service
sudo touch /etc/systemd/system/BatteryLimitCharin.service
while read -r line;
do
    echo $line>>/etc/systemd/system/BatteryLimitCharin.service

done <template.txt
echo "Automatic Generated Script "
cat /etc/systemd/system/BatteryLimitCharin.service
sudo systemctl enable BatteryLimitCharin.service 
sudo systemctl start BatteryLimitCharin.service 