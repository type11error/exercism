Vagrant.configure("2") do |config|
  config.vm.box = "bento/ubuntu-18.04"
  config.vm.provision :shell, path: "bootstrap.sh"

  $exercism = "/bin/bash --login /vagrant/exercism.sh"
  config.vm.provision :shell, privileged: false, inline: $exercism
end
