#include <iostream>
#include <fstream>


using namespace std;

class FileWriter{
  private:
    fstream file;
  public:
    FileWriter(string filename, string mode){
      if (mode == "append"){
        file.open(filename, ios::app);
      } else if (mode == "overwrite"){
        file.open(filename, ios::out);
      }
    }
    void outputToFile(string output){
      file << output << endl;
    }
    ~FileWriter(){
      file.close();
    }
};

struct Highscore
{
  string name = "computer";
  int score = 0;
};

class HighScoreTable{
  private:
    Highscore highscores[5];
    int playerIndex = 0;
  public:
    void AddRecord(string name, int score, int position){
      highscores[position].name = name;
      highscores[position].score = score;
    }
    void printRecord(){
      for (int i = 0; i < 5; i++){
        cout << highscores[i].name << ": " << highscores[i].score << endl;
      }
    }
};

int main(){

  HighScoreTable ht;
  fstream inputFile;
  inputFile.open("saveFile", ios::in);
  string line;
  int index = 0;
  while (getline(inputFile, line)){
    size_t found = line.find(":");
    string name = line.substr(0, found);
    int score = stoi(line.substr(found+1));
    ht.AddRecord(name, score, index++);
  }
  inputFile.close();
  
  ht.printRecord();

  return 0;
}