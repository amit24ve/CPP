// #include <cctype>
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main() 
// {
//   char str[] = "ad138kw+~!$%?';]qjj";
//   string count = "",digit="",sc="";
//   for (int i = 0; i <strlen(str); ++i) 
//   {
//     if(isalpha(str[i]))
//     {
//       count+=str[i];
//     }
//     else if(isdigit(str[i]))
//     {
//         digit+=str[i];
//     }
//     else
//     {
//         sc+=str[i];
//     }
//   }
//   cout << "Number of alphabet characters: " << count << endl;
//   cout << "Number of digit characters: " << digit<<endl;
//   cout << "Number of special characters: " << sc<<endl;
//   cout<<strlen(str);
//   return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> a = {2, 4, 5, 6, 7, 8};
//     cout <<"";
//     for (int i = 0; i < a.size(); i++) {
//         cout << a[i];
//         if (i < a.size() - 1) {
//             cout << ", ";
//         }
//     }
//     cout << "]" << endl;
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     string a="amit is good boy are the useful";
//     int c=a.length();
//     cout<<c;
//     return 0;
// }

#include <iostream>
#include <sstream>  // for std::stringstream
#include <string>

int main() {
    std::string a = "amit is good boy are the useful";
    std::stringstream ss(a);
    std::string word;
    int wordCount = 0;

    // Extract words using stringstream and count them
    while (ss >> word) {
        wordCount++;
    }

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}
