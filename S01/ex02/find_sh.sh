find . -type f -name "*.sh" -execdir echo {} ';' | cut -d'.' -f1
