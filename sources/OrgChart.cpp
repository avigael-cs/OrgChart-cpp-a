#include "OrgChart.hpp"
using namespace std;

namespace ariel{    
    OrgChart::OrgChart() {}
    OrgChart &OrgChart::add_root(string root) {
        return *this;
    }
    OrgChart &OrgChart::add_sub(string father, string son) {
        return *this;
    }
    int* OrgChart::begin(){
        return NULL;
    }
    int* OrgChart::end(){
        return NULL;
    }
    string *OrgChart::begin_level_order(){
        return NULL;
    }
    string *OrgChart::end_level_order(){
        return NULL;
    }
    string *OrgChart::begin_reverse_order(){ 
        return NULL;
    }
    string *OrgChart::end_reverse_order(){
        return NULL;
    }
    string *OrgChart::begin_preorder(){
        return NULL;
    }
    string *OrgChart::end_preorder(){
        return NULL;
    }
    string *OrgChart::reverse_order(){
        return NULL;
    }
    ostream &operator<<(ostream &out, const OrgChart &root){
        return out;
    }
    OrgChart::~OrgChart() {
    }

}