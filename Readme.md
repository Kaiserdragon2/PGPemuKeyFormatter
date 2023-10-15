# PGPemuKeyFormatter
This tool is used to format the data provided by the "Suota Go+" app from Jesus Bamford (https://github.com/Jesus805/Suota-Go-Plus)
to fit the needs of the PGPemu Project for the ESP32 from Yohanes Nugroho (https://github.com/yohanes/pgpemu). 
To Download the SuotaGo+ App: https://github.com/Jesus805/Suota-Go-Plus/releases/tag/v1.0

## How to use

### Command-Line Usage:


```
python PGPemuKeyFormatter.py --path path_to_your_data.json
``` 


If your JSON file is in the same directory as the script and named "data.json," you can run the script without specifying the --path option:

```
python PGPemuKeyFormatter.py
```

The script generates a file called secrets.c in the dictonary it is run.
Just replace the secrets.c file in the [pgpemu project](https://github.com/yohanes/pgpemu) with this generated one.



### Required Libraries:

Ensure that you have the argparse library available in your Python environment. If it's not installed, you can typically install it using pip:

```
pip install argparse
```
