#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 2) {
        system("xdg-open https://www.youtube.com");
    } else {
        if(string(argv[1]) != "-m") {
            string search = "https://www.youtube.com/results?search_query=";

            search.append(argv[1]);
    
            string bl = "xdg-open ";
            bl.append(search);

            system(bl.c_str());
        } else {
            if(argc < 3) {
                system("xdg-open https://music.youtube.com");
            } else {
                string search = "https://music.youtube.com/search?q=";
                search.append(argv[2]);

                string bl = "xdg-open ";bl.append(search);

                system(bl.c_str());
            }
        }
    }

    return 0;
}
