#!/bin/bash
if [[ $EUID -ne 0 ]]; then
   echo "This script must be run as root"
   exit 1
fi
$ARCH = $(uname -m)
echo "Starting Install Of 'sanddice'..."
echo "Downloading Stuff..."
mkdir -p /usr/share/sandpotnoodles
wget https://raw.githubusercontent.com/ActuallySandPotNoodles/sanddice-cpp/refs/heads/main/sanddice-new.png -O /usr/share/sandpotnoodles/sanddice.png
wget https://raw.githubusercontent.com/ActuallySandPotNoodles/sanddice-cpp/refs/heads/main/sanddice.desktop -O /usr/share/applications/sanddice.desktop
if [[ "$(uname -m)" == "x86_64" ]]; then
wget https://github.com/ActuallySandPotNoodles/sanddice-cpp/releases/download/v1.1.0/sanddice_x86_64 -O /usr/bin/sanddice-py
fi
if [[ "$(uname -m)" == "aarch64" ]]; then
wget https://github.com/ActuallySandPotNoodles/sanddice-cpp/releases/download/v1.1.0/sanddice_aarch64 -O /usr/bin/sanddice-py
fi
chmod 775 /usr/bin/sanddice
echo "Install Complete!"
