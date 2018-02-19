#pragma once

#include "ofMain.h"
#include "ofFileUtils.h"

typedef struct{
    string filename;
    string fullpath;
}entry;


class simpleFileLister : public ofDirectory{

     public:

        simpleFileLister();
        int refreshDir();

        int listDir(string directory);

        void reverseOrder();

        bool selectedHasChanged();
        void clearChangedFlag();

        string getName(int which);
        string getPath(int which);
        void setSelectedFile(int which);
        string getSelectedName();
        string getSelectedPath();
		
        int  selected;
        bool selectedChanged;
        bool bRevSort;

        string lastDirectory;

        vector <entry> entries;
};
