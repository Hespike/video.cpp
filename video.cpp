#include <string>

using namespace std;

class Video {
   string cim;
   string leiras;
   int hossz;

public:
   Video(string cim, string leiras, int hossz) : cim(cim), leiras(leiras), hossz(hossz) {}

   string get_cim() {
       return cim;
   }

   string get_leiras() {
       return leiras;
   }

   int get_hossz() const {
       return hossz;
   }

   void set_cim(string cim) {
       this->cim = cim;
   }

   void set_leiras(string leiras) {
       this->leiras = leiras;
   }
};

void update_video(Video& v1, string ujcim) {
   v1.set_cim(ujcim);
   v1.set_leiras(v1.get_leiras() + " #shorts");
}

/*
#include <string>

using namespace std;

class Video {
   string cim;
   string leiras;
   int hossz;

public:
   Video(string cim, string leiras, int hossz) : cim(cim), leiras(leiras), hossz(hossz) {}

   string get_cim() {
       return cim;
   }

   string get_leiras() {
       return leiras;
   }

   int get_hossz() const {
       return hossz;
   }

   void set_cim(string cim) {
       this->cim = cim;
   }

   void set_leiras(string leiras) {
       this->leiras = leiras;
   }
};

void update_video(Video& video, string uj_cim) {
   video.set_cim(uj_cim);
   video.set_leiras(video.get_leiras() + " #shorts");
}
*/
