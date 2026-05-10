#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 2) {
        system("xdg-open https://www.youtube.com");
    } else {
        if(string(argv[1]) != "-m") {
            string search = "https://www.youtube.com/results?search_query=";

            for(int i = 1; i < argc; ++i) {
                if(i > 1) search.push_back('+');
                search.append(argv[i]);
            }

            string bl = "xdg-open ";
            bl.append(search);

            system(bl.c_str());
        } else {
            if(argc < 3) {
                system("xdg-open https://music.youtube.com");
            } else {
                string search = "https://music.youtube.com/search?q=";

                for(int i = 2; i < argc; ++i) {
                    if(i > 2) search.push_back('+');
                    search.append(argv[i]);
                }

                string bl = "xdg-open ";
                bl.append(search);

                system(bl.c_str());
            }
        }
    }

    return 0;
}
