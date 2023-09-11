alias verif='echo ------------------------- && ls */* && echo ------------------------- && hidden_files="$(find . -type f -name ".*" -o -name "#*" -o -name "*#" -o -name "$*" -o -name "*$")"; if [ -n "$hidden_files" ]; then echo "\033[31mFichiers cachés trouvés :\033[0m" ; echo "$hidden_files" ; else echo "\033[32mAucun fichier caché : OK!\033[0m" ; fi ; echo ------------------------- && aout_files="$(find . -type f -name "a.*")"; if [ -n "$aout_files" ]; then echo "\033[31mFichiers a.out trouvés et supprimés :\033[0m" ; echo "$aout_files" ; else echo "\033[32mAucun fichier a.out : OK!\033[0m" ; fi ; echo ------------------------- && find . -type f -name "a.*" -delete && norminette * -R CheckForbiddenSourceHeader'

alias eval='echo ------------------------- && ls */* && echo ------------------------- && hidden_files="$(find . -type f -name ".*" -o -name "#*" -o -name "*#" -o -name "$*" -o -name "*$")"; if [ -n "$hidden_files" ]; then echo "\033[31mFichiers cachés trouvés :\033[0m" ; echo "$hidden_files" ; else echo "\033[32mAucun fichier caché : OK!\033[0m" ; fi ; echo ------------------------- && aout_files="$(find . -type f -name "a.*")"; if [ -n "$aout_files" ]; then echo "\033[31mFichiers a.out trouvés :\033[0m" ; echo "$aout_files" ; else echo "\033[32mAucun fichier a.out : OK!\033[0m" ; fi ; echo ------------------------- && norminette * -R CheckForbiddenSourceHeader'

alias work='cd ~/piscine'

alias rickroll='curl -s -L https://bit.ly/3zvELNz | bash'

alias gitc='git commit -m "next ex done"'

alias recup='git clone $(xclip -o)'

alias fcc='gcc -Wall -Wextra -Werror'

alias findf='function find_and_cd() { local file_name="$1"; local file_path; file_path=$(find . -type f -name "*$file_name*" -print -quit); if [ -n "$file_path" ]; then cd "$(dirname "$file_path")"; else echo "Fichier introuvable : $file_name"; fi; }; find_and_cd'


