#!/usr/bin/env bash
mkdir -p ~/bin
ln -s /vagrant/vender/exercism ~/bin/exercism 
echo "export PATH=~/bin:$PATH" >> ~/.bash_profile
source ~/.bash_profile
