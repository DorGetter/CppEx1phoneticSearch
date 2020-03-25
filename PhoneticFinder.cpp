#include "PhoneticFinder.hpp"
#include <iostream>
#include <string>

using namespace std;
namespace phonetic{


    string find(string s1, string s2){

        char space = ' ';
        string temp = "";
        int tet = s1.size();
        for(unsigned int i=0 ; i < s1.size(); i++) {

            // End of a word //
            // Checking if this is the word we need to find : //
            if (s1[i] == space ){

                //first check: has to be same size (Number of characters) //
                if(temp.size() == s2.size()){

                    // iterate indexes  //
                    unsigned int temp_ind=0;
                    unsigned int s2_ind=0;
                    int te=temp.size();

                    while(temp_ind != temp.size()){

                        //saving the char in temps //
                        char temp_Ch= temp[temp_ind];
                        char s2_Ch= s2[s2_ind];

                        temp_Ch= std::tolower(temp_Ch, std::locale());
                        s2_Ch  = std::tolower(s2_Ch, std::locale());

                        if(temp_Ch == s2_Ch) {
                            if(temp_ind == te-1){
                                return temp;
                                i=s1.size();
                                temp_ind++;
                                s2_ind++;
                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }

                            //switch letters cases //
                        else if(((temp_Ch == 'v' && s2_Ch == 'w') || (temp_Ch == 'w' && s2_Ch == 'v'))){
                            if(temp_ind-1 == temp.size()){
                                return temp;
                                i=s1.size();
                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }
                        else if(((temp_Ch == 'g' && s2_Ch == 'j') || (temp_Ch == 'j' && s2_Ch == 'g'))){
                            if(temp_ind+1 == temp.size()){
                                return temp;
                                i=s1.size();
                                temp_ind++;
                                s2_ind++;

                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }
                        else if(((temp_Ch == 's' && s2_Ch == 'z') || (temp_Ch == 'z' && s2_Ch == 's'))){
                            if(temp_ind+1 == temp.size()){
                                return temp;
                                i=s1.size();
                                temp_ind++;
                                s2_ind++;
                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }
                        else if(((temp_Ch == 'd' && s2_Ch == 't') || (temp_Ch == 't' && s2_Ch == 'd'))) {
                            if(temp_ind+1 == temp.size()){
                                return temp;
                                i=s1.size();
                                temp_ind++;
                                s2_ind++;
                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }
                        else if(((temp_Ch == 'o' && s2_Ch == 'u') || (temp_Ch == 'u' && s2_Ch == 'o'))) {
                            if(temp_ind+1 == temp.size()){
                                return temp;
                                i=s1.size();
                                temp_ind++;
                                s2_ind++;
                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }
                        else if(((temp_Ch == 'i' && s2_Ch == 'y') || (temp_Ch == 'y' && s2_Ch == 'i'))) {
                            if(temp_ind+1 == temp.size()){
                                return temp;
                                i=s1.size();
                                temp_ind++;
                                s2_ind++;
                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }
                        else if(((temp_Ch == 'b' && s2_Ch == 'f') || (temp_Ch == 'b' && s2_Ch == 'p')
                                 ||      (temp_Ch == 'p' && s2_Ch == 'f') || (temp_Ch == 'p' && s2_Ch == 'b')
                                 ||      (temp_Ch == 'f' && s2_Ch == 'p') || (temp_Ch == 'f' && s2_Ch == 'b'))){
                            if(temp_ind+1 == temp.size()){
                                return temp;
                                i=s1.size();
                                temp_ind++;
                                s2_ind++;
                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }
                        else if(((temp_Ch == 'c' && s2_Ch == 'k') || (temp_Ch == 'c' && s2_Ch == 'q')
                                 ||      (temp_Ch == 'k' && s2_Ch == 'c') || (temp_Ch == 'k' && s2_Ch == 'q')
                                 ||      (temp_Ch == 'q' && s2_Ch == 'c') || (temp_Ch == 'q' && s2_Ch == 'k'))){
                            if(temp_ind+1 == temp.size()){
                                return temp;
                                i=s1.size();
                                temp_ind++;
                                s2_ind++;
                            }
                            else {
                                temp_ind++;
                                s2_ind++;
                            }
                        }
                        else{
                            temp = "";
                            temp_ind = temp.size();
                        }
                    }
                }
                else{
                    temp = "";
                }
            }
                // building the word --> append char to temp //
            else {
                char c = s1[i];
                temp.push_back(c);
            }
        }

    return "";

    }
}
