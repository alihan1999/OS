#include<bits/stdc++.h>
#include "Process.h"
#include "Manager.h"
#include "ReadProcess.h"

using namespace std;







int main() {
    Manager M;
    string line;
    ifstream ProcessFile;
    ProcessFile.open("..//process.txt");

    Process P;


    while (getline(ProcessFile, line)) {
      P = ReadProcess(line);

      cout<<P.get_id()<<" "<<P.get_ex()<<" "<<P.get_arrival()<<endl;


        M.add(P);

    }

   M.start();


    return 0;
}

