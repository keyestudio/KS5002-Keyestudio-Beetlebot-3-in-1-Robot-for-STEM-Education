import network

# Enter correct AP name and password.
ssidAP         = 'ESP32_WiFi' # Enter the router name
passwordAP     = '12345678'  # Enter the router password

local_IP       = '192.168.1.149'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

# Set ESP32 in AP mode.
ap_if = network.WLAN(network.AP_IF)

def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns]) # Configure IP address, gateway and subnet mask for ESP32.
    print("Setting soft-AP  ... ")
# Turn on an AP in ESP32, whose name is set by ssid_AP and password is set by password_AP
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)
except:
    print("Failed, please disconnect the power and restart the operation.")
    ap_if.disconnect() # If the program is running abnormally, the AP disconnection function will be called.