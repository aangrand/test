find . -name "*.sh" | rev | sed "s/hs.//" | cut -d/ -f1 | rev
